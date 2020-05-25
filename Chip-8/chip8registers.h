//
// Created by Jordan Grant on 5/24/20.
//

#ifndef SDL2_BASIC_SETUP_CHIP8REGISTERS_H
#define SDL2_BASIC_SETUP_CHIP8REGISTERS_H

#include "config.h"

typedef struct ChipReg {
    /*
 * Chip-8 has 16 general purpose 8-bit registers,
 * usually referred to as Vx.
 * */
    unsigned char Vx[CHIP8_REGISTERS];
    unsigned short I;
    unsigned short program_counter;
    unsigned char delay_timer;
    unsigned char sound_timer;
    unsigned char stack_pointer;
} ChipReg;

#endif //SDL2_BASIC_SETUP_CHIP8REGISTERS_H
