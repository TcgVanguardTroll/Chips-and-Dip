//
// Created by Jordan Grant on 5/24/20.
//

#ifndef SDL2_BASIC_SETUP_CHIP8DISPLAY_H
#define SDL2_BASIC_SETUP_CHIP8DISPLAY_H

#include "stdbool.h"
#include "config.h"

typedef struct ChipScreen {
    bool pixels[CHIP8_HEIGHT][CHIP8_WIDTH];
} ChipScreen;

void chip8_set_display(ChipScreen *chipScreen, int x, int y);

bool chip8_display_is_set(ChipScreen *chipScreen, int x, int y);

#endif //SDL2_BASIC_SETUP_CHIP8DISPLAY_H
