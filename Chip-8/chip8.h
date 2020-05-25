//
// Created by Jordan Grant on 5/23/20.
//

#ifndef SDL2_BASIC_SETUP_CHIP_8_H
#define SDL2_BASIC_SETUP_CHIP_8_H


#include "config.h"
#include "chip8mem.h"
#include "chip8stack.h"
#include "chip8registers.h"

typedef struct Chip8 {
    ChipMem chipMem;
    ChipReg chipReg;
    ChipStack chipStack;
} Chip8;

#endif //SDL2_BASIC_SETUP_CHIP_8_H
