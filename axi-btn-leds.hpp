
#ifndef __AXI_LITE_LEDS__
#define __AXI_LITE_LEDS__

#include <ap_int.h>

typedef ap_fixed<4,4>   led_t, btn_t;

typedef ap_fixed<4,4>   btn_state_t;

void hls_btn_leds(led_t& led_o, led_t led_in, btn_t btn, btn_state_t* btn_reg) ;

#endif
