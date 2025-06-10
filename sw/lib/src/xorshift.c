#include "util.h"
#include "config.h"
#include "xorshift.h"

uint32_t xorshift32(uint16_t seed) {
    //seed between 0x000 and 0x400, if larger, use seed % 0x400
    seed = seed > 0x400 ? seed % 0x400 : seed; // Ensure offset is within bounds
    uint16_t offset = seed * 4; // Calculate the offset in bytes
    // make sure the offset is within the range of 0000 to 0xFFF
    if (offset > 0xFFF) {
        offset %= 0xFFF; // Cap the offset to the maximum allowed value
    }
    return *reg32(USER_PRNG_BASE_ADDR, offset);
}