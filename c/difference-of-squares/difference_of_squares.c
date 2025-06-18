#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int number) {
	int sum = 0;
	int product = 1;

	for (int i = number; i >= 1; i--) {
		sum += i;
	}

	product = (int) pow(sum, 2);
	return product;
}

unsigned int sum_of_squares(unsigned int number) {
	int sum = 0;

	for (int i = number; i >= 1; i--) {
		sum += (int) pow(i, 2);
	}
	return sum;
}

unsigned int difference_of_squares(unsigned int number) {
	int delta = square_of_sum(number) - sum_of_squares(number);

	return delta;
}
