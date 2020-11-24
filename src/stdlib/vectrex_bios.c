#include "vectrex/bios.h"

// Wrappers around the vectrex BIOS calls


  uint8_t
read_buttons()
{
  asm  // get the equates; STD_INC_PATH must be defined by Makefile.am
  {  
    INCLUDE STD_INC_PATH
  }
    
  uint8_t buttons;
  asm
  {
    JSR DP_to_D0
    JSR Read_Btns
    STA buttons    
  }
  return buttons;
}


  uint8_t
read_joystick(uint8_t joystick)
{
  uint8_t result;
  asm
  {
    PSHS    X, DP
    JSR     DP_to_D0
    LDA     joystick                ; Which joystick?
    CMPA    #$02          
    BEQ     read_joystick_2

read_joystick_1:
    LDA     #1                      ; Joystick 1 set up
    STA     Vec_Joy_Mux_1_X
    LDA     #3
    STA     Vec_Joy_Mux_1_Y
    LDA     #0                      ; No Joystick 2 - saves a lot of cycles
    STA     Vec_Joy_Mux_2_X
    STA     Vec_Joy_Mux_2_Y

    JSR     Joy_Digital             ; Read joystick

    LDB     #$00                    ; Clear direction mask

    LDA     Vec_Joy_1_X             ; Check X direction
    BSR     read_joystick_check_x
    LDA     Vec_Joy_1_Y             ; Check Y direction
    BSR     read_joystick_check_y

    BRA     read_joystick_end

read_joystick_2:
    LDA     #0                      ; No Joystick 1 - saves a lot of cycles
    STA     Vec_Joy_Mux_1_X
    STA     Vec_Joy_Mux_1_Y
    LDA     #5                      ; Joystick 2 set up
    STA     Vec_Joy_Mux_2_X
    LDA     #7
    STA     Vec_Joy_Mux_2_Y

    JSR     Joy_Digital             ; Read joystick

    LDB     #$00                    ; Clear direction mask

    LDA     Vec_Joy_2_X             ; Check X direction
    BSR     read_joystick_check_x
    LDA     Vec_Joy_2_Y             ; Check Y direction
    BSR     read_joystick_check_y

    BRA     read_joystick_end

read_joystick_check_x:
    CMPA    #0
    BEQ     read_joystick_x_done
    BMI     read_joystick_left
    ORB     #JOY_RIGHT_MASK_ASM
    BRA     read_joystick_x_done
read_joystick_left:
    ORB     #JOY_LEFT_MASK_ASM
read_joystick_x_done:
    RTS

read_joystick_check_y:
    CMPA    #0    
    BEQ     read_joystick_y_done
    BMI     read_joystick_down
    ORB     #JOY_UP_MASK_ASM
    BRA     read_joystick_y_done
read_joystick_down:
    ORB     #JOY_DOWN_MASK_ASM
read_joystick_y_done:
    RTS
      
read_joystick_end:
    STB     result
    PULS    X, DP
  }
  return result;
}


  void asm
wait_retrace()
{
  asm
  {
    JSR Wait_Recal
  }
}


  void 
intensity(uint8_t i)
{
  asm
  {
    LDA i
    JSR Intensity_a
  }
}


  void
reset_beam()
{
  asm
  {
    JSR Reset0Ref
  }  
}


  void
set_text_size(int8_t height, int8_t width)
{
  asm
  {
    LDA     width
    STA     Vec_Text_Width
    LDA     height
    STA     Vec_Text_Height
  }
}


  void
print_str(int8_t y, int8_t x, char* string)
{
  asm
  {
    JSR     DP_to_D0
    LDA     :y 
    LDB     :x 
    PSHS    U
    LDU     string
    JSR     Print_Str_d
    PULS    U
  }
}


  void
print_str_c(int8_t y, int8_t x, char* string)
{
  asm
  {
    JSR     DP_to_D0
    LDA     :y 
    LDB     :x 
    PSHS    U
    LDU     string
    
    ; -- Print_Str_d --
    JSR     >Moveto_d_7F
    JSR     Delay_1

    STU     Vec_Str_Ptr     ;Save string pointer
    LDX     #Char_Table-$20 ;Point to start of chargen bitmaps
    LDD     #$1883          ;$8x = enable RAMP?
    CLR     <VIA_port_a     ;Clear D/A output
    STA     <VIA_aux_cntl   ;Shift reg mode = 110, T1 PB7 enabled
    LDX     #Char_Table-$20 ;Point to start of chargen bitmaps
LF4A5:
    STB     <VIA_port_b     ;Update RAMP, set mux to channel 1
    DEC     <VIA_port_b     ;Enable mux
    LDD     #$8081
    NOP                     ;Wait a moment
    INC     <VIA_port_b     ;Disable mux
    STB     <VIA_port_b     ;Enable RAMP, set mux to channel 0
    STA     <VIA_port_b     ;Enable mux
    TST     $C800           ;I think this is a delay only
    INC     <VIA_port_b     ;Enable RAMP, disable mux
    LDA     Vec_Text_Width  ;Get text width
    STA     <VIA_port_a     ;Send it to the D/A
    LDD     #$0100
    LDU     Vec_Str_Ptr     ;Point to start of text string
    STA     <VIA_port_b     ;Disable RAMP, disable mux
    BRA     LF4CB

LF4C7:
    LDA     A,X             ;Get bitmap from chargen table
    STA     <VIA_shift_reg  ;Save in shift register
LF4CB:
    LDA     ,U+             ;Get next character
    ; BPL     LF4C7           ;Go back if not terminator
    BNE     LF4C7           ;Go back if not terminator
    LDA     #$81
    STA     <VIA_port_b     ;Enable RAMP, disable mux
    NEG     <VIA_port_a     ;Negate text width to D/A
    LDA     #$01
    STA     <VIA_port_b     ;Disable RAMP, disable mux
    CMPX    #Char_Table_End-$20 ;     Check for last row
    BEQ     LF50A           ;Branch if last row
    LEAX    $50,X           ;Point to next chargen row
    TFR     U,D             ;Get string length
    SUBD    Vec_Str_Ptr
    SUBB    #$02            ; -  2
    ASLB                    ; *  2
    BRN     LF4EB           ;Delay a moment
LF4EB:
    LDA     #$81
    NOP
    DECB
    BNE     LF4EB           ;Delay some more in a loop
    STA     <VIA_port_b     ;Enable RAMP, disable mux
    LDB     Vec_Text_Height ;Get text height
    STB     <VIA_port_a     ;Store text height in D/A
    DEC     <VIA_port_b     ;Enable mux
    LDD     #$8101
    NOP                     ;Wait a moment
    STA     <VIA_port_b     ;Enable RAMP, disable mux
    CLR     <VIA_port_a     ;Clear D/A
    STB     <VIA_port_b     ;Disable RAMP, disable mux
    STA     <VIA_port_b     ;Enable RAMP, disable mux
    LDB     #$03            ;$0x = disable RAMP?
    BRA     LF4A5           ;Go back for next scan line

LF50A:
    LDA     #$98
    STA     <VIA_aux_cntl   ;T1->PB7 enabled
    JSR     Reset0Ref       ;Reset the zero reference

    ; --
    PULS    U
  }
}


  void
dot(int8_t y, int8_t x)
{
  asm
  {
    JSR     DP_to_D0
    LDA     :y
    LDB     :x
    JSR     Dot_d
  }
}


  void
dots(uint8_t nr_dots, int8_t* list)
{
  asm
  {
    JSR     DP_to_D0
    LDA     nr_dots
    STA     $C823
    LDX     list
    JSR     Dot_List
  }
}


  void
set_scale(int8_t scale)
{
  asm
  {
    LDA     scale
    STA     <VIA_t1_cnt_lo 
  }
}


  void
move(uint8_t y, uint8_t x)
{
  asm
  {
    JSR     DP_to_D0
    LDA     :y
    LDB     :x
    JSR     Moveto_d
  }
}


  void
line(int8_t y, int8_t x)
{
  asm
  {
    CLR     Vec_Misc_Count    ; To draw only 1 line, clear
    LDA     :y
    LDB     :x
    JSR     Draw_Line_d
  }
}


  void
lines(uint8_t nr_lines, int8_t* list)
{
  asm
  {
    JSR     DP_to_D0
    LDA     nr_lines
    DECA
    LDX     list
    JSR     Draw_VL_a
  }
}


  void
pattern_lines(uint8_t pattern, uint8_t nr_lines, int8_t *list)
{
  asm
  {
    JSR     DP_to_D0
    LDA     pattern
    STA     Vec_Pattern
    LDA     nr_lines
    DECA
    LDX     list
    JSR     Draw_Pat_VL_a 
  }
}


  void
rotate(int8_t angle, uint8_t nr_points, int8_t* points, int8_t* out_points)
{
  asm
  {
    PSHS    U,D
    LDA     angle
    LDB     nr_points
    DECB       
    LDX     points
    LDU     out_points
    JSR     Rot_VL_ab  
    PULS    U,D
  }
}  


  void
music_set_flag(uint8_t flag)
{
  asm
  {
    LDA     flag
    STA     Vec_Music_Flag
  }
}


  uint8_t
music_get_flag()
{
  uint8_t flag;
  asm
  {
    LDA     Vec_Music_Flag
    STA     flag
  }  
  return flag;
}


  void
music_check(unsigned char* music)
{
  asm
  {
    PSHS    U
    JSR     DP_to_C8
    LDU     music
    JSR     Init_Music_chk
    PULS    U
  }
}


  void
music_play()
{
  asm
  {
    JSR     Do_Sound
  }
}


  void
random_seed(uint8_t seed1, uint8_t seed2, uint8_t seed3)
{
  asm
  {
     LDA  seed1
     STA  Vec_Seed_Ptr+0   
     LDA  seed2
     STA  Vec_Seed_Ptr+1   
     LDA  seed3
     STA  Vec_Seed_Ptr+2   
  }
} 


  int8_t
random()
{
  int8_t rnd;
  asm
  {
    JSR Random
    STA rnd  
  }
  return rnd;
}


  void asm
cold_start()
{
  asm
  {
    JSR   Cold_Start
  }
}

  void asm
warm_start()
{
  asm
  {
    JSR   Warm_Start
  }
}

  void asm
init_via()
{
  asm
  {
    JSR   Init_VIA
  }
}

  void asm
init_os_ram()
{
  asm
  {
    JSR   Init_OS_RAM
  }
}

  void asm
init_os()
{
  asm
  {
    JSR Init_OS
  }
}

  void 
set_refresh(uint16_t value)
{
  asm
  {
    JSR     DP_to_D0
    LDX     value
	  STX 	  0xc83e
    PSHS    D
	  JSR 	  Set_Refresh
    PULS    D
  }
}
