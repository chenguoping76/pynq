#include "stdio.h"
#include "axi-btn-leds.hpp"

int main(void){

	led_t in4 = 0xE;

	led_t out4;

	btn_t readBack_btn, inBtn = 0;

	int error_count = 0;


	// test 1: led set and output test, inBtn = 0 as none button pushdown
	hls_btn_leds(out4, in4, inBtn, &readBack_btn) ;
	if(out4!=in4) {error_count++; printf("Something error!\r\n");}

	// test 2: btn set and readback test, inBtn = 2 as second button pushdown
	inBtn = 0x2;
	hls_btn_leds(out4, in4,  inBtn, &readBack_btn) ;
	if(readBack_btn != inBtn) {error_count++; printf("Something error!\r\n");}

	// finish
	if(error_count==0) printf("All simulation passed!\r\n");

	return 0;

}
