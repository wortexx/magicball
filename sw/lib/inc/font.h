#pragma once

#include <stdint.h>
#include "config.h"

// returns 12 byte font data for a character
uint8_t *font_get_char(uint8_t c);