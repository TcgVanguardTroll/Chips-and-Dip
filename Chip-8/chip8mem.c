//
// Created by Jordan Grant on 5/24/20.
//

#include "chip8mem.h"
#include "assert.h"

static chip8_bounds_check(int idx) {
    assert(idx >= 0 && idx < CHIP8_MEMORY)
}

void chip8_set_mem(ChipMem *memory, int idx, unsigned char val) {
    chip8_bounds_check(idx);
    memory->memory[idx] = val;
}

unsigned char chip8_get_mem(ChipMem *memory, int idx) {
    return memory->memory[idx];


}
