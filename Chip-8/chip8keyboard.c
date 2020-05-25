//
// Created by Jordan Grant on 5/24/20.
//

#include <assert.h>
#include "chip8keyboard.h"

static void chip8_keyboard_bounds_check(int key) {
    assert(key >= 0 && key < CHIP8_KEYS);
}

int chip8_keyboard_map(const char *map, char key) {
    for (int i = 0; i < CHIP8_KEYS; ++i) {
        if (map[i] == key) {
            return i;
        }
    }
    return -1;
}

void chip8_down_pressed(ChipKeyboard chipKeyboard, int key) {
    chipKeyboard.keyboard[key] = true;
}

void chip8_up_pressed(ChipKeyboard chipKeyboard, int key) {
    chipKeyboard.keyboard[key] = false;

}

bool chip8_keyboard_is_down(ChipKeyboard chipKeyboard, int key) {
    return chipKeyboard.keyboard[key];


}
