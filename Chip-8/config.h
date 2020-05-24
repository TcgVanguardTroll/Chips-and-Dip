//
// Created by Jordan Grant on 5/23/20.
//

#include "stdint.h"

#ifndef SDL2_BASIC_SETUP_CONFIG_H
#define SDL2_BASIC_SETUP_CONFIG_H


#define CHIP8_WIDTH 64

#define CHIP8_HEIGHT 32

#define CHIP8_MEMORY 4096

#define CHIP8_REGISTERS 16

#define CHIP8_TITLE "Chip-8 Emulator"

/*
 * Chip-8 has 16 general purpose 8-bit registers,
 * usually referred to as Vx.
 * */
unsigned char Vx[CHIP8_REGISTERS];

/* The Chip 8 has 35 opcodes which are all two bytes long.
 * To store the current opcode, we need a data type that
 * allows us to store two0 bytes.
 * */
unsigned short opcode;

/* There is an Index register I and a program counter (pc)
 * which can have a value from 0x000 to 0xFFF .
 * */
unsigned short I;
unsigned short pc;

#endif //SDL2_BASIC_SETUP_CONFIG_H
