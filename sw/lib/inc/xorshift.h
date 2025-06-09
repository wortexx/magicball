#pragma once

#include <stdint.h>

// -- Xorshift PRNG Register Offsets --
#define PRNG_TRIGGER_BYTE_OFFSET  0x000 
#define PRNG_READ_BYTE_OFFSET     0x004 

uint32_t xorshift32(int seed);