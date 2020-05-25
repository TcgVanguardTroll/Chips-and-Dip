//
// Created by Jordan Grant on 5/24/20.
//

#ifndef SDL2_BASIC_SETUP_CHIP8STACK_H
#define SDL2_BASIC_SETUP_CHIP8STACK_H

#include "config.h"

typedef struct Chip8;
typedef struct ChipStack {
    unsigned short stack[CHIP8_STACK_SIZE];
} ChipStack;


void chip8_stack_push(Chip8 *chip8, unsigned short val);

unsigned short chip8_stack_pop(Chip8 *chip8);

#endif //SDL2_BASIC_SETUP_CHIP8STACK_H
