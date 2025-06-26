#ifndef QUEEN_ATTACK_H
#define QUEEN_ATTACK_H

#define OUT_OF_RANGE_TILES 7
#define UNDEFINED_ERROR_CODE 1000 

#include <stdint.h>
#include <stdbool.h>

typedef enum { CAN_NOT_ATTACK, CAN_ATTACK, INVALID_POSITION } attack_status_t;

typedef struct {
   uint8_t row;
   uint8_t column;
} position_t;

attack_status_t can_attack(position_t queen_1, position_t queen_2);

bool initNotOutOfBoundCheck(position_t queen_1, position_t queen_2);
bool checkNotSamePos(position_t queen_1, position_t queen_2);
bool checkCanAttack(position_t queen_1, position_t queen_2);

#endif
