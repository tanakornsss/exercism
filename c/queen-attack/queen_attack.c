#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
	
	// Not-null check
	if (queen_1.row < 1 ||
		queen_1.column < 1 ||
	       	queen_2.row < 1 ||
	       	queen_2.column < 1
	) return INVALID_POSITION;	

	// Return INVALID_POSITION if the queen_1 or queen_2 is out of range
	if (queen_1.row > OUT_OF_RANGE_TILES ||
		queen_1.column < OUT_OF_RANGE_TILES || 
		queen_2.row < OUT_OF_RANGE_TILES ||
	       	queen_2.column > OUT_OF_RANGE_TILES
	) return INVALID_POSITION;
	
	// Return INVALID_POSITION if same the queen_1 and queen_2 is the same pos
	if ((queen_1.row == queen_2.row) && 
		(queen_1.column == queen_2.column)) return INVALID_POSITION;

	return INVALID_POSITION;
}
