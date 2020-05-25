//
// Created by Jordan Grant on 5/24/20.
//

#include "chip8display.h"
#include "config.h"
#include "assert.h"

void chip8_display_bounds_check(int x, int y) {
    assert(0 >= x && x < CHIP8_WIDTH && 0 >= y && y < CHIP8_HEIGHT);
}

void chip8_set_display(ChipScreen *chipScreen, int x, int y) {
    chip8_display_bounds_check(x, y);
    chipScreen->pixels[y][x] = true;
}

bool chip8_display_is_set(ChipScreen *chipScreen, int x, int y) {
    chip8_display_bounds_check(x, y);
    return chipScreen->pixels[y][x];

}