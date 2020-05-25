//
// Created by Jordan Grant on 5/24/20.
//

#ifndef SDL2_BASIC_SETUP_CHIP8KEYBOARD_H
#define SDL2_BASIC_SETUP_CHIP8KEYBOARD_H

#include "stdbool.h"
#include "config.h"

typedef struct ChipKeyboard {
    bool keyboard[CHIP8_KEYS];
} ChipKeyboard;

int chip8_keyboard_map(const char *map, char key);

void chip8_down_pressed(ChipKeyboard chipKeyboard, int key);

void chip8_up_pressed(ChipKeyboard chipKeyboard, int key);

bool chip8_keyboard_is_down(ChipKeyboard chipKeyboard, int key);


#endif //SDL2_BASIC_SETUP_CHIP8KEYBOARD_H
