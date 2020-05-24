//
// Created by Jordan Grant on 5/24/20.
//

#ifndef SDL2_BASIC_SETUP_CHIP8MEM_H
#define SDL2_BASIC_SETUP_CHIP8MEM_H

#include "config.h"

typedef struct ChipMem {
    /* The Chip 8 has 4K memory in total, which we can emulated as. */
    unsigned char memory[CHIP8_MEMORY];
} ChipMem;

void chip8_set_mem(ChipMem *memory, int idx, unsigned char val);

unsigned char chip8_get_mem(ChipMem *memory, int idx);


#endif //SDL2_BASIC_SETUP_CHIP8MEM_H
