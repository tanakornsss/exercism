#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
	if (initNotOutOfBoundCheck(queen_1, queen_2)) return INVALID_POSITION;
	if (checkNotSamePos(queen_1, queen_2)) return INVALID_POSITION;
	if (checkCanAttack(queen_1, queen_2)) return CAN_ATTACK;
	return UNDEFINED_ERROR_CODE;
}

bool initNotOutOfBoundCheck(position_t queen_1, position_t queen_2) {
	if (	
		queen_1.column > OUT_OF_RANGE_TILES ||
		queen_1.row > OUT_OF_RANGE_TILES ||
		queen_2.column > OUT_OF_RANGE_TILES ||
		queen_2.row > OUT_OF_RANGE_TILES
	) return true;
	return false;	
}

bool checkNotSamePos(position_t queen_1, position_t queen_2) {
	if (
		queen_1.column == queen_2.column &&
		queen_1.row == queen_2.row		
	) return true;
	return false;
}

bool checkCanAttack(position_t queen_1, position_t queen_2) {
	// We can attack when we are either in the same row or column.
	// We can attack in the "+" direction and "x" direction only.
	
	return false;
}
