#include <stdint.h> 

#include "uart.h"
#include "print.h" 
#include "timer.h"
// #include "gpio.h" // Not needed here
#include "util.h"

// --- Assumed Low-Level Access Functions ---
static inline void mmio_write32(uint32_t addr, uint32_t value) {
    volatile uint32_t *ptr = (volatile uint32_t *)addr;
    *ptr = value;
}
static inline uint32_t mmio_read32(uint32_t addr) {
    volatile uint32_t *ptr = (volatile uint32_t *)addr;
    return *ptr;
}



#define USER_SPI_BASE_ADDR      0x20001000 

// Offsets within SPI peripheral 
#define SPI_CTRL_REG_OFFSET     0x00
#define SPI_TX_REG_OFFSET       0x04
#define SPI_STATUS_REG_OFFSET   0x08

// Absolute addresses for SPI registers
#define SPI_CTRL_ADDR   (USER_SPI_BASE_ADDR + SPI_CTRL_REG_OFFSET)
#define SPI_TX_ADDR     (USER_SPI_BASE_ADDR + SPI_TX_REG_OFFSET)
#define SPI_STATUS_ADDR (USER_SPI_BASE_ADDR + SPI_STATUS_REG_OFFSET)

// --- Main Test Function ---
int main() {
    uart_init(); // setup the uart peripheral
    printf("--- Simplified SPI Register Test Starting ---\n");
    uart_write_flush();

    uint32_t status_val;
    int i;

    // 1. Initial Status Read
    // Use %lx for uint32_t if printf supports it, otherwise cast to unsigned int %x
    printf("1. Reading Initial Status Register (0x%x)...\n", (unsigned int)SPI_STATUS_ADDR);
    uart_write_flush();
    status_val = mmio_read32(SPI_STATUS_ADDR);
    printf("   Initial Status = 0x%08x (done=%d, busy=%d)\n",
           (unsigned int)status_val, (int)((status_val >> 1) & 0x1), (int)(status_val & 0x1));
    uart_write_flush();

    // 2. Write to TX Register
    uint8_t test_data = 0xAA;
    // Use %02x for uint8_t, %x for address
    printf("2. Writing 0x%02x to TX Register (0x%x)...\n", test_data, (unsigned int)SPI_TX_ADDR);
    uart_write_flush();
    mmio_write32(SPI_TX_ADDR, (uint32_t)test_data);
    printf("   Write to TX Register completed.\n");
    uart_write_flush();

    // 3. Write to CTRL Register (Trigger)
    printf("3. Writing 1 to CTRL Register (0x%x) to trigger SPI...\n", (unsigned int)SPI_CTRL_ADDR);
    uart_write_flush();
    mmio_write32(SPI_CTRL_ADDR, 1);
    printf("   Write to CTRL Register completed.\n");
    uart_write_flush();

    // 4. Poll Status Register until not busy (with verbose printing)
    printf("4. Polling Status Register (0x%x) until busy bit is 0...\n", (unsigned int)SPI_STATUS_ADDR);
    uart_write_flush();
    int timeout = 20; // Limit polling attempts for debugging
    i = 0;
    do {
        printf("   Polling attempt %d: Reading status...\n", i + 1);
        uart_write_flush();
        status_val = mmio_read32(SPI_STATUS_ADDR);
        printf("   Polling attempt %d: Status = 0x%08x (done=%d, busy=%d)\n",
               i + 1, (unsigned int)status_val, (int)((status_val >> 1) & 0x1), (int)(status_val & 0x1));
        uart_write_flush();
        timeout--;
        i++;
        // Add a small delay between polls if needed
        // for(volatile int d=0; d<100; d++);
    } while ((status_val & 0x1) && (timeout > 0)); // Loop while busy bit (bit 0) is set

    if (timeout == 0) {
        printf("   Polling TIMEOUT! Busy bit did not clear.\n");
    } else {
        printf("   Polling complete. Busy bit is 0.\n");
    }
    uart_write_flush();

    // 5. Final Status Read
    printf("5. Reading Final Status Register (0x%x)...\n", (unsigned int)SPI_STATUS_ADDR);
    uart_write_flush();
    status_val = mmio_read32(SPI_STATUS_ADDR);
    printf("   Final Status = 0x%08x (done=%d, busy=%d)\n",
           (unsigned int)status_val, (int)((status_val >> 1) & 0x1), (int)(status_val & 0x1));
    uart_write_flush();


    printf("--- Test Finished ---\n");
    uart_write_flush();

    return 1;
}


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
}

#include <stdint.h>

#include "uart.h"
#include "print.h"
#include "timer.h"
#include "gpio.h"
#include "util.h"

// --- Assumed Low-Level Access Functions ---
static inline void mmio_write32(uint32_t addr, uint32_t value) {
    volatile uint32_t *ptr = (volatile uint32_t *)addr;
    *ptr = value;
}
static inline uint32_t mmio_read32(uint32_t addr) {
    volatile uint32_t *ptr = (volatile uint32_t *)addr;
    return *ptr;
}

// --- Hardware Addresses ---
#define GPIO_CTRL_BASE_ADDR     0x03005000

#define USER_SPI_BASE_ADDR      0x20001000

#define SPI_CTRL_REG_OFFSET     0x00
#define SPI_TX_REG_OFFSET       0x04
#define SPI_STATUS_REG_OFFSET   0x08

#define SPI_CTRL_ADDR   (USER_SPI_BASE_ADDR + SPI_CTRL_REG_OFFSET)
#define SPI_TX_ADDR     (USER_SPI_BASE_ADDR + SPI_TX_REG_OFFSET)
#define SPI_STATUS_ADDR (USER_SPI_BASE_ADDR + SPI_STATUS_REG_OFFSET)

#define SSD1331_CS_PIN      2
#define ADXL345_CS_PIN      3
#define SSD1331_DC_PIN      4
#define ADXL345_INT_PIN     5

// --- GPIO Control Functions ---
static uint32_t gpio_output_shadow = 0x00000000;

void gpio_set_pin_direction(uint32_t pin, int is_output) {
    uint32_t mask = 1 << pin;
    if (is_output) {
        gpio_set_direction(mask, mask);
    } else {
        gpio_set_direction(mask, 0);
    }
    printf("GPIO: Set Pin %d Direction = %s\n", (int)pin, is_output ? "Output" : "Input");
}

void gpio_write_pin(uint32_t pin, int value) {
    uint32_t mask = 1 << pin;
    if (value) {
        gpio_output_shadow |= mask;
    } else {
        gpio_output_shadow &= ~mask;
    }
    gpio_write(gpio_output_shadow);
}

int gpio_read_pin(uint32_t pin) {
    return (gpio_read() >> pin) & 0x1;
}

// --- SPI Control Functions ---
void spi_wait_idle() {
    uint32_t status;
    int timeout = 10000;
    do {
        status = mmio_read32(SPI_STATUS_ADDR);
        printf("SPI Status raw: 0x%08x\n", status);
        printf("done = %d\n", (status >> 1) & 0x1);
        printf("busy = %d\n", status & 0x1);
        timeout--;
    } while ((status & 0x1) && (timeout > 0));

    if (timeout == 0) {
        printf("SPI: ERROR - Timeout waiting for idle! Status=0x%x\n", (unsigned int)status);
    }
}

void spi_send_byte_hw(uint8_t data) {
    spi_wait_idle();
    mmio_write32(SPI_TX_ADDR, (uint32_t)data);
    mmio_write32(SPI_CTRL_ADDR, 1);
    spi_wait_idle();
}

// --- Higher-Level Device Interaction ---
void set_cs(uint32_t pin, int active) {
    gpio_write_pin(pin, active ? 0 : 1);
    for (volatile int i = 0; i < 10; i++);
}

void set_dc(int is_data) {
    gpio_write_pin(SSD1331_DC_PIN, is_data);
    for (volatile int i = 0; i < 10; i++);
}

void ssd1331_command(uint8_t cmd) {
    printf("SSD1331: Sending Command 0x%02x\n", cmd);
    set_cs(ADXL345_CS_PIN, 0);
    set_cs(SSD1331_CS_PIN, 1);
    set_dc(0);
    spi_send_byte_hw(cmd);
    set_cs(SSD1331_CS_PIN, 0);
    printf("SSD1331: Command 0x%02x Sent.\n", cmd);
}

void ssd1331_data(uint8_t data) {
    set_cs(ADXL345_CS_PIN, 0);
    set_cs(SSD1331_CS_PIN, 1);
    set_dc(1);
    spi_send_byte_hw(data);
    set_cs(SSD1331_CS_PIN, 0);
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
    uart_init();
    printf("Hello World! Starting SPI/GPIO Test...\n");
    uart_write_flush();

    printf("Configuring GPIOs...\n");
    gpio_set_pin_direction(SSD1331_CS_PIN, 1);
    gpio_set_pin_direction(ADXL345_CS_PIN, 1);
    gpio_set_pin_direction(SSD1331_DC_PIN, 1);
    gpio_set_pin_direction(ADXL345_INT_PIN, 0);
    uart_write_flush();

    gpio_output_shadow = 0;
    gpio_output_shadow |= (1 << SSD1331_CS_PIN);
    gpio_output_shadow |= (1 << ADXL345_CS_PIN);
    gpio_write(gpio_output_shadow);

    printf("Sending Display ON command (0xAF)...\n");
    uart_write_flush();
    ssd1331_command(0xAF);
    uart_write_flush();

    printf("Sending dummy data byte (0xAA)...\n");
    uart_write_flush();
    ssd1331_data(0xAA);
    uart_write_flush();

    printf("Polling ADXL345 INT pin (GPIO %d)...\n", ADXL345_INT_PIN);
    uart_write_flush();
    int int_status = gpio_read_pin(ADXL345_INT_PIN);
    printf("ADXL345 INT pin status = %d\n", int_status);
    uart_write_flush();

    printf("--- Test Finished ---\n");
    uart_write_flush();

    return 1;
}
*/