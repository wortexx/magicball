#include "util.h"
#include "config.h"
#include "xorshift.h"

uint32_t xorshift32(uint16_t seed) {
    //seed between 0x000 and 0x400, if larger, use seed % 0x400
    seed = seed > 0x400 ? seed % 0x400 : seed; // Ensure offset is within bounds
    return *reg32(USER_PRNG_BASE_ADDR, seed * 4);
}