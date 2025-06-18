#include "resistor_color.h"

uint16_t color_code(resistor_band_t color) {
	return color;
}

const resistor_band_t* colors(void) {
	 static const resistor_band_t expected[] = { BLACK,
		 BROWN, RED, ORANGE, YELLOW,
                 GREEN, BLUE,  VIOLET, GREY,   WHITE 
	 };

	 return expected;
 
}
