#ifndef __vectrex_bios_h__
#define __vectrex_bios_h__

#include <vectrex/types.h>

// Expose Vectrex music addreses
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

#endif // __vectrex_bios_h__
