#include "font.h"

uint8_t *font_get_char(uint8_t c){
    if (c < 32 || c > 127) {
        c = 32; // Out of bounds, return space character
    }
    return (uint8_t *)(USER_FONT_ROM_BASE_ADDR + (c - 32) * 12);
}