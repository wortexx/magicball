#include "util.h"
#include "config.h"
#include "xorshift.h"

//volatile uint32_t* prng_ptr          = (volatile uint32_t*)USER_PRNG_BASE_ADDR;

uint32_t xorshift32(uint16_t seed) {
    //seed between 0x000 and 0xFFA, if larger, use 0xFFA
    seed = seed > (0xFFA) ? 0xFFA : seed; // Ensure seed is within bounds
    // read uint32_t value by adding the offset to the base address
    //return *(volatile uint32_t *)(USER_PRNG_BASE_ADDR + seed);
    return *reg32(USER_PRNG_BASE_ADDR, 0x000);
}