#ifndef __vectrex_bios_h__
#define __vectrex_bios_h__

#include <vectrex/types.h>

// Byte pointer
#define BP(x) *((volatile uint8_t *) x)

// Static RAM
#define Vec_Snd_Shadow       BP(0xC800) // Shadow of sound chip registers (15 bytes)
#define Vec_Btn_State        BP(0xC80F) // Current state of all joystick buttons
#define Vec_Prev_Btns        BP(0xC810) // Previous state of all joystick buttons
#define Vec_Buttons          BP(0xC811) // Current toggle state of all buttons
#define Vec_Button_1_1       BP(0xC812) // Current toggle state of stick 1 button 1
#define Vec_Button_1_2       BP(0xC813) // Current toggle state of stick 1 button 2
#define Vec_Button_1_3       BP(0xC814) // Current toggle state of stick 1 button 3
#define Vec_Button_1_4       BP(0xC815) // Current toggle state of stick 1 button 4
#define Vec_Button_2_1       BP(0xC816) // Current toggle state of stick 2 button 1
#define Vec_Button_2_2       BP(0xC817) // Current toggle state of stick 2 button 2
#define Vec_Button_2_3       BP(0xC818) // Current toggle state of stick 2 button 3
#define Vec_Button_2_4       BP(0xC819) // Current toggle state of stick 2 button 4
#define Vec_Joy_Resltn       BP(0xC81A) // Joystick A/D resolution (0x80=min 0x00=max)
#define Vec_Joy_1_X          BP(0xC81B) // Joystick 1 left/right
#define Vec_Joy_1_Y          BP(0xC81C) // Joystick 1 up/down
#define Vec_Joy_2_X          BP(0xC81D) // Joystick 2 left/right
#define Vec_Joy_2_Y          BP(0xC81E) // Joystick 2 up/down
#define Vec_Joy_Mux          BP(0xC81F) // Joystick enable/mux flags (4 bytes)
#define Vec_Joy_Mux_1_X      BP(0xC81F) // Joystick 1 X enable/mux flag (=1)
#define Vec_Joy_Mux_1_Y      BP(0xC820) // Joystick 1 Y enable/mux flag (=3)
#define Vec_Joy_Mux_2_X      BP(0xC821) // Joystick 2 X enable/mux flag (=5)
#define Vec_Joy_Mux_2_Y      BP(0xC822) // Joystick 2 Y enable/mux flag (=7)
#define Vec_Misc_Count       BP(0xC823) // Misc counter/flag byte, zero when not in use
#define Vec_0Ref_Enable      BP(0xC824) // Check0Ref enable flag
#define Vec_Loop_Count       BP(0xC825) // Loop counter word (incremented in Wait_Recal)
#define Vec_Brightness       BP(0xC827) // Default brightness
#define Vec_Dot_Dwell        BP(0xC828) // Dot dwell time?
#define Vec_Pattern          BP(0xC829) // Dot pattern (bits)
#define Vec_Text_HW          BP(0xC82A) // Default text height and width
#define Vec_Text_Height      BP(0xC82A) // Default text height
#define Vec_Text_Width       BP(0xC82B) // Default text width
#define Vec_Str_Ptr          BP(0xC82C) // Temporary string pointer for Print_Str
#define Vec_Counters         BP(0xC82E) // Six bytes of counters
#define Vec_Counter_1        BP(0xC82E) // First  counter byte
#define Vec_Counter_2        BP(0xC82F) // Second counter byte
#define Vec_Counter_3        BP(0xC830) // Third  counter byte
#define Vec_Counter_4        BP(0xC831) // Fourth counter byte
#define Vec_Counter_5        BP(0xC832) // Fifth  counter byte
#define Vec_Counter_6        BP(0xC833) // Sixth  counter byte
#define Vec_RiseRun_Tmp      BP(0xC834) // Temp storage word for rise/run
#define Vec_Angle            BP(0xC836) // Angle for rise/run and rotation calculations
#define Vec_Run_Index        BP(0xC837) // Index pair for run
//                              0xC839     Pointer to copyright string during startup
#define Vec_Rise_Index       BP(0xC839) // Index pair for rise
//                              0xC83B     High score cold-start flag (=0 if valid)
#define Vec_RiseRun_Len      BP(0xC83B) // length for rise/run
//                              0xC83C     temp byte
#define Vec_Rfrsh            BP(0xC83D) // Refresh time (divided by 1.5MHz)
#define Vec_Rfrsh_lo         BP(0xC83D) // Refresh time low byte
#define Vec_Rfrsh_hi         BP(0xC83E) // Refresh time high byte
#define Vec_Music_Work       BP(0xC83F) // Music work buffer (14 bytes, backwards?)
#define Vec_Music_Wk_A       BP(0xC842) // register 10
//                              0xC843     register 9
//                              0xC844     register 8
#define Vec_Music_Wk_7       BP(0xC845) // register 7
#define Vec_Music_Wk_6       BP(0xC846) // register 6
#define Vec_Music_Wk_5       BP(0xC847) // register 5
//                              0xC848     register 4
//                              0xC849     register 3
//                              0xC84A     register 2
#define Vec_Music_Wk_1       BP(0xC84B) // register 1
//                              0xC84C     register 0
#define Vec_Freq_Table       BP(0xC84D) // Pointer to note-to-frequency table (normally 0xFC8D)
#define Vec_Max_Players      BP(0xC84F) // Maximum number of players for Select_Game
#define Vec_Max_Games        BP(0xC850) // Maximum number of games for Select_Game
#define Vec_ADSR_Table       BP(0xC84F) // Storage for first music header word (ADSR table)
#define Vec_Twang_Table      BP(0xC851) // Storage for second music header word ('twang' table)
#define Vec_Music_Ptr        BP(0xC853) // Music data pointer
#define Vec_Expl_ChanA       BP(0xC853) // Used by Explosion_Snd - bit for first channel used?
#define Vec_Expl_Chans       BP(0xC854) // Used by Explosion_Snd - bits for all channels used?
#define Vec_Music_Chan       BP(0xC855) // Current sound channel number for Init_Music
#define Vec_Music_Flag       BP(0xC856) // Music active flag (0x00=off 0x01=start 0x80=on)
#define Vec_Duration         BP(0xC857) // Duration counter for Init_Music
#define Vec_Music_Twang      BP(0xC858) // 3 word 'twang' table used by Init_Music
#define Vec_Expl_1           BP(0xC858) // Four bytes copied from Explosion_Snd's U-reg parameters
#define Vec_Expl_2           BP(0xC859) // 
#define Vec_Expl_3           BP(0xC85A) // 
#define Vec_Expl_4           BP(0xC85B) // 
#define Vec_Expl_Chan        BP(0xC85C) // Used by Explosion_Snd - channel number in use?
#define Vec_Expl_ChanB       BP(0xC85D) // Used by Explosion_Snd - bit for second channel used?
#define Vec_ADSR_Timers      BP(0xC85E) // ADSR timers for each sound channel (3 bytes)
#define Vec_Music_Freq       BP(0xC861) // Storage for base frequency of each channel (3 words)
//                              0xC85E     Scratch 'score' storage for Display_Option (7 bytes)
#define Vec_Expl_Flag        BP(0xC867) // Explosion_Snd initialization flag?
//                     0xC868 - 0xC876     Unused?
#define Vec_Expl_Timer       BP(0xC877) // Used by Explosion_Snd
//                              0xC878     Unused?
#define Vec_Num_Players      BP(0xC879) // Number of players selected in Select_Game
#define Vec_Num_Game         BP(0xC87A) // Game number selected in Select_Game
#define Vec_Seed_Ptr         BP(0xC87B) // Pointer to 3-byte random number seed (=0xC87D)
#define Vec_Random_Seed      BP(0xC87D) // Default 3-byte random number seed
//                     0xC880 - 0xCBEA     User RAM
#define Vec_Default_Stk      BP(0xCBEA) // Default top-of-stack
#define Vec_High_Score       BP(0xCBEB) // High score storage (7 bytes)
#define Vec_SWI3_Vector      BP(0xCBF2) // SWI2/SWI3 interrupt vector (3 bytes)
#define Vec_SWI2_Vector      BP(0xCBF2) // SWI2/SWI3 interrupt vector (3 bytes)
#define Vec_FIRQ_Vector      BP(0xCBF5) // FIRQ interrupt vector (3 bytes)
#define Vec_IRQ_Vector       BP(0xCBF8) // IRQ interrupt vector (3 bytes)
#define Vec_SWI_Vector       BP(0xCBFB) // SWI/NMI interrupt vector (3 bytes)
#define Vec_NMI_Vector       BP(0xCBFB) // SWI/NMI interrupt vector (3 bytes)
#define Vec_Cold_Flag        BP(0xCBFE) // Cold start flag (warm start if = 0x7321)

// The Programmable Interface Adapter
#define VIA_port_b           BP(0xD000) // VIA port B data I/O register
//                                         - 0 sample/hold (0=enable  mux 1=disable mux)
//                                         - 1 mux sel 0
//                                         - 2 mux sel 1
//                                         - 3 sound BC1
//                                         - 4 sound BDIR
//                                         - 5 comparator input
//                                         - 6 external device (slot pin 35) initialized to input
//                                         - 7 /RAMP
#define VIA_port_a       BP(0xD001)  // VIA port A data I/O register (handshaking)
#define VIA_DDR_b        BP(0xD002)  // VIA port B data direction register (0=input 1=output)
#define VIA_DDR_a        BP(0xD003)  // VIA port A data direction register (0=input 1=output)
#define VIA_t1_cnt_lo    BP(0xD004)  // VIA timer 1 count register lo (scale factor)
#define VIA_t1_cnt_hi    BP(0xD005)  // VIA timer 1 count register hi
#define VIA_t1_lch_lo    BP(0xD006)  // VIA timer 1 latch register lo
#define VIA_t1_lch_hi    BP(0xD007)  // VIA timer 1 latch register hi
#define VIA_t2_lo        BP(0xD008)  // VIA timer 2 count/latch register lo (refresh)
#define VIA_t2_hi        BP(0xD009)  // VIA timer 2 count/latch register hi
#define VIA_shift_reg    BP(0xD00A)  // VIA shift register
#define VIA_aux_cntl     BP(0xD00B)  // VIA auxiliary control register
//                                      - 0 PA latch enable
//                                      - 1 PB latch enable
//                                      - 2 \ 110=output to CB2 under control of phase 2 clock
//                                      - 3  > shift register control (110 is the only mode used by the Vectrex ROM)
//                                      - 4 /
//                                      - 5 0=t2 one shot 1=t2 free running
//                                      - 6 0=t1 one shot 1=t1 free running
//                                      - 7 0=t1 disable PB7 output 1=t1 enable PB7 output
#define VIA_cntl         BP(0xD00C)  // VIA control register
//                                      - 0 CA1 control CA1 -> SW7 0=IRQ on low 1=IRQ on high
//                                      - 1 \
//                                      - 2  > CA2 control  CA2 -> /ZERO  110=low 111=high
//                                      - 3 /
//                                      - 4 CB1 control CB1 -> NC 0=IRQ on low 1=IRQ on high
//                                      - 5 \
//                                      - 6  > CB2 control  CB2 -> /BLANK 110=low 111=high
//                                      - 7 /
#define VIA_int_flags    BP(0xD00D)  // VIA interrupt flags register
//                                      - bit cleared by
//                                      - 0 CA2 interrupt flag reading or writing port A I/O
//                                      - 1 CA1 interrupt flag reading or writing port A I/O
//                                      - 2 shift register interrupt flag reading or writing shift register
//                                      - 3 CB2 interrupt flag reading or writing port B I/O
//                                      - 4 CB1 interrupt flag reading or writing port A I/O
//                                      - 5 timer 2 interrupt flag read t2 low or write t2 high
//                                      - 6 timer 1 interrupt flag read t1 count low or write t1 high
//                                      - 7 IRQ status flag  write logic 0 to IER or IFR bit
#define VIA_int_enable   BP(0xD00E)  // VIA interrupt enable register
//                                      - 0 CA2 interrupt enable
//                                      - 1 CA1 interrupt enable
//                                      - 2 shift register interrupt enable
//                                      - 3 CB2 interrupt enable
//                                      - 4 CB1 interrupt enable
//                                      - 5 timer 2 interrupt enable
//                                      - 6 timer 1 interrupt enable
//                                      - 7 IER set/clear control
#define VIA_port_a_nohs  BP(0xD00F)  // VIA port A data I/O register (no handshaking)

// New gcc style wrappers
void wait_recal();
void intensity_a(uint8_t i);
void reset0ref();
void print_str_d(int8_t y, int8_t x, char* string);
void dot_d(int8_t y, int8_t x);
void dot_list(uint8_t nr_dots, int8_t* list);
void moveto_d(uint8_t y, uint8_t x);
void draw_line_d(int8_t y, int8_t x);
void draw_vl_a(uint8_t nr_lines, int8_t* list);
void draw_pat_vl_a(uint8_t pattern, uint8_t nr_lines, int8_t *list);
void rot_vl_ab(int8_t angle, uint8_t nr_points, int8_t* points, int8_t* out_points);
void init_music_chk(unsigned char* music);
void do_sound();
void cold_start();
void warm_start();
void init_via();
void init_os_ram();
void init_os();
void set_refresh(uint16_t value);
int8_t random();
uint8_t read_btns();
void joy_digital();
void joy_analog();

// Helper functions to simplyify access to some sysvars (keeped from previous implementation)
void set_text_size(int8_t height, int8_t width);
void set_scale(int8_t scale);
void music_set_flag(uint8_t flag);
uint8_t music_get_flag();
void random_seed(uint8_t seed1, uint8_t seed2, uint8_t seed3);

// C-style print function
void print_str_c(int8_t y, int8_t x, char* string);

// Controller/Joystick helpers
void controller_enable_1_x();
void controller_enable_1_y();
void controller_enable_2_x();
void controller_enable_2_y();
void controller_disable_1_x();
void controller_disable_1_y();
void controller_disable_2_x();
void controller_disable_2_y();

void controller_check_buttons();
uint8_t controller_buttons_pressed();
uint8_t controller_buttons_held();

uint8_t controller_button_1_1_pressed();
uint8_t controller_button_1_2_pressed();
uint8_t controller_button_1_3_pressed();
uint8_t controller_button_1_4_pressed();
uint8_t controller_button_2_1_pressed();
uint8_t controller_button_2_2_pressed();
uint8_t controller_button_2_3_pressed();
uint8_t controller_button_2_4_pressed();

uint8_t controller_button_1_1_held();
uint8_t controller_button_1_2_held();
uint8_t controller_button_1_3_held();
uint8_t controller_button_1_4_held();
uint8_t controller_button_2_1_held();
uint8_t controller_button_2_2_held();
uint8_t controller_button_2_3_held();
uint8_t controller_button_2_4_held();

void controller_check_joysticks();
int8_t controller_joystick_1_x();
int8_t controller_joystick_1_y();
int8_t controller_joystick_2_x();
int8_t controller_joystick_2_y();
uint8_t controller_joystick_1_leftChange();
uint8_t controller_joystick_1_rightChange();
uint8_t controller_joystick_1_downChange();
uint8_t controller_joystick_1_upChange();
uint8_t controller_joystick_1_left();
uint8_t controller_joystick_1_right();
uint8_t controller_joystick_1_down();
uint8_t controller_joystick_1_up();
uint8_t controller_joystick_2_left();
uint8_t controller_joystick_2_right();
uint8_t controller_joystick_2_down();
uint8_t controller_joystick_2_up();

// Next section keeped for compatibility reasons (not used anymore)
#define vx_music_1  (char*) 0xFD0D
#define vx_music_2  (char*) 0xFD1D
#define vx_music_3  (char*) 0xFD81
#define vx_music_4  (char*) 0xFDD3
#define vx_music_5  (char*) 0xFE38
#define vx_music_6  (char*) 0xFE76
#define vx_music_7  (char*) 0xFEC6
#define vx_music_8  (char*) 0xFEF8
#define vx_music_9  (char*) 0xFF26
#define vx_music_10 (char*) 0xFF44
#define vx_music_11 (char*) 0xFF62
#define vx_music_12 (char*) 0xFF7A
#define vx_music_13 (char*) 0xFF8F

#define JOY1_BTN1 0
#define JOY1_BTN2 1
#define JOY1_BTN3 2
#define JOY1_BTN4 3

#define JOY2_BTN1 4
#define JOY2_BTN2 5
#define JOY2_BTN3 6
#define JOY2_BTN4 7

#define JOY1_BTN1_MASK (1<<JOY1_BTN1)
#define JOY1_BTN2_MASK (1<<JOY1_BTN2)
#define JOY1_BTN3_MASK (1<<JOY1_BTN3)
#define JOY1_BTN4_MASK (1<<JOY1_BTN4)

#define JOY2_BTN1_MASK (1<<JOY2_BTN1)
#define JOY2_BTN2_MASK (1<<JOY2_BTN2)
#define JOY2_BTN3_MASK (1<<JOY2_BTN3)
#define JOY2_BTN4_MASK (1<<JOY2_BTN4)

#define JOY_UP    0
#define JOY_DOWN  1
#define JOY_LEFT  2
#define JOY_RIGHT 3

#define JOY_UP_MASK    (1<<JOY_UP) 
#define JOY_DOWN_MASK  (1<<JOY_DOWN)
#define JOY_LEFT_MASK  (1<<JOY_RIGHT)
#define JOY_RIGHT_MASK (1<<JOY_LEFT)

#define JOY_UP_MASK_ASM    1 
#define JOY_DOWN_MASK_ASM  2
#define JOY_LEFT_MASK_ASM  4
#define JOY_RIGHT_MASK_ASM 8

#endif // __vectrex_bios_h__
