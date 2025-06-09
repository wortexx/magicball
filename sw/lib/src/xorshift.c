#include "util.h"
#include "config.h"
#include "xorshift.h"

volatile uint32_t* prng_ptr          = (volatile uint32_t*)USER_PRNG_BASE_ADDR;

uint32_t xorshift32(int seed) {
    int offset = seed > (0xFFF) ? 0xFFA : 0x004; // Ensure offset is within bounds
    // read uint32_t value by adding the offset to the base address
    return *(prng_ptr + (offset / 4));
}