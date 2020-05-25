//
// Created by Jordan Grant on 5/24/20.
//
#include "chip8.h"
#include "chip8stack.h"
#include "assert.h"

static void chip8_bounds_check(struct Chip8 *chip8) {
    assert(chip8->chipReg.stack_pointer < sizeof(chip8->chipStack.stack));
}

void chip8_stack_push(struct Chip8 *chip8, unsigned short val) {

    chip8->chipReg.stack_pointer += 1;
    chip8_bounds_check(chip8);
    chip8->chipStack.stack[chip8->chipReg.stack_pointer] = val;
}

unsigned short chip8_stack_pop(struct Chip8 *chip8) {
    /* The interpreter sets the program counter to the address at the top of the stack,
     * then subtracts 1 from the stack pointer.
    */
    chip8_bounds_check(chip8);
    unsigned short res = chip8->chipStack.stack[chip8->chipReg.stack_pointer];
    chip8->chipReg.stack_pointer -= 1;
    return res;
}