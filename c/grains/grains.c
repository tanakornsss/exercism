#include "grains.h"

uint64_t square(uint8_t index) {
	uint64_t grains = pow(2, index - 1);
	return grains;
}

uint64_t total(void) {
	return square(65);
}
