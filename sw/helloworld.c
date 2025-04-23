// Copyright (c) 2024 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0/
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>
/*
#include "uart.h"
#include "print.h"
#include "timer.h"
#include "gpio.h"
#include "util.h"

/// @brief Example integer square root
/// @return integer square root of n
uint32_t isqrt(uint32_t n) {
    uint32_t res = 0;
    uint32_t bit = (uint32_t)1 << 30;

    while (bit > n) bit >>= 2;

    while (bit) {
        if (n >= res + bit) {
            n -= res + bit;
            res = (res >> 1) + bit;
        } else {
            res >>= 1;
        }
        bit >>= 2;
    }
    return res;
}

int main() {
    uart_init(); // setup the uart peripheral

    // simple printf support (only prints text and hex numbers)
    printf("Hello World!\n");
    // wait until uart has finished sending
    uart_write_flush();

    // toggling some GPIOs
    gpio_set_direction(0xFFFF, 0x000F); // lowest four as outputs
    gpio_write(0x0A);  // ready output pattern
    gpio_enable(0xFF); // enable lowest eight
    // wait a few cycles to give GPIO signal time to propagate
    asm volatile ("nop; nop; nop; nop; nop;");
    printf("GPIO (expect 0xA0): 0x%x\n", gpio_read());

    gpio_toggle(0x0F); // toggle lower 8 GPIOs
    asm volatile ("nop; nop; nop; nop; nop;");
    printf("GPIO (expect 0x50): 0x%x\n", gpio_read());
    uart_write_flush();

    // doing some compute
    uint32_t start = get_mcycle();
    uint32_t res   = isqrt(1234567890UL);
    uint32_t end   = get_mcycle();
    printf("Result: 0x%x, Cycles: 0x%x\n", res, end - start);
    uart_write_flush();

    // using the timer
    printf("Tick\n");
    sleep_ms(10);
    printf("Tock\n");
    uart_write_flush();
    return 1;
}*/

#include <stdint.h> // For standard integer types like uint32_t, uint8_t

// Include necessary headers from your Croc environment
#include "uart.h"
#include "print.h" // Use this for printf/putchar
#include "timer.h"
#include "gpio.h"  // Provides gpio_set_direction, gpio_write, gpio_read
#include "util.h"

// --- Assumed Low-Level Access Functions ---
// These are likely needed for direct register access if gpio.h functions aren't sufficient
// or for accessing the SPI peripheral registers. Replace if SDK provides alternatives.
static inline void mmio_write32(uint32_t addr, uint32_t value) {
    volatile uint32_t *ptr = (volatile uint32_t *)addr;
    *ptr = value;
}
static inline uint32_t mmio_read32(uint32_t addr) {
    volatile uint32_t *ptr = (volatile uint32_t *)addr;
    return *ptr;
}

// --- Hardware Addresses (CRITICAL: Replace with actual values) ---

// Base address of the standard GPIO controller (from croc_pkg.sv)
// Example: PeriphBaseAddr (0x00000000) + GpioAddrOffset (0x03005000)
#define GPIO_CTRL_BASE_ADDR     0x03005000 // <<< MUST BE VERIFIED/UPDATED

// Offsets within the GPIO controller (These are guesses - VERIFY from GPIO RTL/docs)
// Check if gpio.h functions map directly or if you need offsets for mmio_*
// #define GPIO_DIRECTION_OFFSET   0x04 // Example offset for direction register
// #define GPIO_OUTPUT_OFFSET      0x08 // Example offset for output value register
// #define GPIO_INPUT_OFFSET       0x0C // Example offset for input value register

// Base address of your user SPI peripheral (from user_pkg.sv)
// Example: UserSpiAddrOffset (0x20001000 after correction)
#define USER_SPI_BASE_ADDR      0x20001000 // <<< MUST BE VERIFIED/UPDATED (Should match user_pkg.sv)

// Offsets within your SPI peripheral (Match your obi_spi_peripheral design)
#define SPI_CTRL_REG_OFFSET     0x00
#define SPI_TX_REG_OFFSET       0x04
#define SPI_STATUS_REG_OFFSET   0x08

// Absolute addresses for SPI registers
#define SPI_CTRL_ADDR   (USER_SPI_BASE_ADDR + SPI_CTRL_REG_OFFSET)
#define SPI_TX_ADDR     (USER_SPI_BASE_ADDR + SPI_TX_REG_OFFSET)
#define SPI_STATUS_ADDR (USER_SPI_BASE_ADDR + SPI_STATUS_REG_OFFSET)

// --- GPIO Pin Assignments (Choose available GPIO pins) ---
#define SSD1331_CS_PIN      2  // Example: Use GPIO pin 2 for Display CS
#define ADXL345_CS_PIN      3  // Example: Use GPIO pin 3 for Accelerometer CS
#define SSD1331_DC_PIN      4  // Example: Use GPIO pin 4 for Display D/C
#define ADXL345_INT_PIN     5  // Example: Use GPIO pin 5 for Accelerometer Interrupt Input

// --- GPIO Control Functions (Revised based on gpio.h declarations) ---

// Shadow register to keep track of GPIO output state if read-modify-write isn't possible/reliable
// Initialize based on expected power-on state (likely all zeros)
static uint32_t gpio_output_shadow = 0x00000000;

// Configure GPIO pin direction (1=Output, 0=Input)
// Assumes gpio_set_direction(mask_of_pins, mask_of_directions)
void gpio_set_pin_direction(uint32_t pin, int is_output) {
    uint32_t mask = 1 << pin;
    if (is_output) {
        gpio_set_direction(mask, mask); // Set direction for this pin to output
    } else {
        gpio_set_direction(mask, 0);    // Set direction for this pin to input
    }
    // Use %lu for uint32_t if available, otherwise cast to int
    printf("GPIO: Set Pin %d Direction = %s\n", (int)pin, is_output ? "Output" : "Input");
}

// Write value (0 or 1) to a GPIO output pin
// Uses shadow register and writes the full 32-bit value
void gpio_write_pin(uint32_t pin, int value) {
    uint32_t mask = 1 << pin;
    if (value) {
        gpio_output_shadow |= mask; // Set bit in shadow register
    } else {
        gpio_output_shadow &= ~mask; // Clear bit in shadow register
    }
    gpio_write(gpio_output_shadow); // Write the complete shadow value
}

// Read value (0 or 1) from a GPIO input pin
// Assumes gpio_read() returns the state of all input pins
int gpio_read_pin(uint32_t pin) {
    // Assuming gpio_read reads all pins and we mask the one we want
    return (gpio_read() >> pin) & 0x1;
}

// --- SPI Control Functions ---

// Waits for the hardware SPI peripheral to be idle (busy bit = 0)
void spi_wait_idle() {
    uint32_t status;
    int timeout = 10000; // Add a simple timeout
    do {
        status = mmio_read32(SPI_STATUS_ADDR); // Read status directly
        timeout--;
    } while ((status & 0x1) && (timeout > 0)); // Loop while busy bit (bit 0) is set

    if (timeout == 0) {
        printf("SPI: ERROR - Timeout waiting for idle! Status=0x%x\n", (unsigned int)status);
        // Consider adding an exit or error flag here
    }
}

// Sends one byte using the hardware SPI peripheral
// Assumes CS and D/C are already set correctly by calling code
void spi_send_byte_hw(uint8_t data) {
    spi_wait_idle();
    mmio_write32(SPI_TX_ADDR, (uint32_t)data); // Write data directly
    mmio_write32(SPI_CTRL_ADDR, 1); // Trigger SPI transfer directly
    spi_wait_idle();
}

// --- Higher-Level Device Interaction ---

// Selects/deselects a device using GPIO CS lines
void set_cs(uint32_t pin, int active) {
    gpio_write_pin(pin, active ? 0 : 1); // Active LOW
    for(volatile int i=0; i<10; i++); // Simple busy-wait delay
}

// Sets the D/C line state via GPIO
void set_dc(int is_data) {
    gpio_write_pin(SSD1331_DC_PIN, is_data);
    for(volatile int i=0; i<10; i++); // Simple busy-wait delay
}

// Send a command byte to the SSD1331
void ssd1331_command(uint8_t cmd) {
    // *** FIXED printf format specifier ***
    printf("SSD1331: Sending Command 0x%02x\n", cmd);
    set_cs(ADXL345_CS_PIN, 0); // Ensure other device is inactive
    set_cs(SSD1331_CS_PIN, 1); // Activate display CS
    set_dc(0);                // Set D/C low (Command)
    spi_send_byte_hw(cmd);    // Send byte via hardware SPI
    set_cs(SSD1331_CS_PIN, 0); // Deactivate display CS
    // *** FIXED printf format specifier ***
    printf("SSD1331: Command 0x%02x Sent.\n", cmd);
}

// Send a data byte to the SSD1331
void ssd1331_data(uint8_t data) {
    // printf("SSD1331: Sending Data 0x%02x\n", data); // Can be very verbose
    set_cs(ADXL345_CS_PIN, 0); // Ensure other device is inactive
    set_cs(SSD1331_CS_PIN, 1); // Activate display CS
    set_dc(1);                // Set D/C high (Data)
    spi_send_byte_hw(data);   // Send byte via hardware SPI
    set_cs(SSD1331_CS_PIN, 0); // Deactivate display CS
}

// --- Original isqrt Function ---
uint32_t isqrt(uint32_t n) {
    uint32_t res = 0;
    uint32_t bit = (uint32_t)1 << 30;
    while (bit > n) bit >>= 2;
    while (bit) {
        if (n >= res + bit) {
            n -= res + bit;
            res = (res >> 1) + bit;
        } else {
            res >>= 1;
        }
        bit >>= 2;
    }
    return res;
}


// --- Modified Main Function ---
int main() {
    uart_init(); // setup the uart peripheral
    printf("Hello World! Starting SPI/GPIO Test...\n");
    uart_write_flush();

    // 1. Configure GPIO Directions
    printf("Configuring GPIOs...\n");
    gpio_set_pin_direction(SSD1331_CS_PIN, 1); // Output
    gpio_set_pin_direction(ADXL345_CS_PIN, 1);  // Output
    gpio_set_pin_direction(SSD1331_DC_PIN, 1);   // Output
    gpio_set_pin_direction(ADXL345_INT_PIN, 0);  // Input
    uart_write_flush();

    // Ensure CS lines are initially inactive (high) and initialize shadow register
    gpio_output_shadow = 0; // Assuming all start low, set bits for inactive CS
    gpio_output_shadow |= (1 << SSD1331_CS_PIN);
    gpio_output_shadow |= (1 << ADXL345_CS_PIN);
    gpio_write(gpio_output_shadow); // Write initial inactive state

    // 2. Send a simple command to the display
    printf("Sending Display ON command (0xAF)...\n");
    uart_write_flush();
    ssd1331_command(0xAF); // SSD1331 Display ON command
    uart_write_flush();

    // 3. Send a dummy data byte to test D/C=1 path
    printf("Sending dummy data byte (0xAA)...\n");
    uart_write_flush();
    ssd1331_data(0xAA);
    uart_write_flush();

    // 4. Poll the ADXL345 interrupt pin (example)
    printf("Polling ADXL345 INT pin (GPIO %d)...\n", ADXL345_INT_PIN);
    uart_write_flush();
    int int_status = gpio_read_pin(ADXL345_INT_PIN);
    printf("ADXL345 INT pin status = %d\n", int_status);
    uart_write_flush();

    // --- Can add original compute/timer tests back here if desired ---
    // ...

    printf("--- Test Finished ---\n");
    uart_write_flush();

    return 1; // Return 1 to signal $finish in testbench
}
