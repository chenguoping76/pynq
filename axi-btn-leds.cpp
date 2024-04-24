#include "axi-btn-leds.hpp"
/*
 *   this project to explain how to use interfaces of hls
 */
void hls_btn_leds(led_t& led_o, led_t led_in, btn_t btn, btn_state_t* btn_reg) {
	
	*btn_reg = btn;

	led_o = led_in;											// set hw leds based on sw value which come from axi-lite
}
