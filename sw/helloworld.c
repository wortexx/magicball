#include <stdint.h> // For standard integer types like uint32_t, uint8_t

// Include necessary headers from your Croc environment
#include "uart.h"
#include "print.h" // Use this for printf/putchar
#include "timer.h"
#include "gpio.h"  // Provides gpio_set_direction, gpio_write, gpio_read
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

// --- Hardware Addresses (CRITICAL: Verify these!) ---

// Standard GPIO Controller (for ADXL345 interrupt pin)
#define GPIO_CTRL_BASE_ADDR     0x03005000 // From croc_pkg.sv

// User Domain Peripherals (from user_pkg.sv)
#define USER_SPI_ENGINE_BASE_ADDR 0x20001000 // For obi_spi_peripheral
#define USER_SPI_CTRL_BASE_ADDR 0x20002000 // For user_spi_ctrl (CS/DC/PRNG)
#define USER_FONT_ROM_BASE_ADDR 0x20003000 // For user_font_rom

// Offsets within SPI Engine (obi_spi_peripheral)
#define SPI_ENGINE_CTRL_REG_OFFSET   0x00
#define SPI_ENGINE_TX_REG_OFFSET     0x04
#define SPI_ENGINE_STATUS_REG_OFFSET 0x08

// Absolute addresses for SPI Engine registers
#define SPI_ENGINE_CTRL_ADDR   (USER_SPI_ENGINE_BASE_ADDR + SPI_ENGINE_CTRL_REG_OFFSET)
#define SPI_ENGINE_TX_ADDR     (USER_SPI_ENGINE_BASE_ADDR + SPI_ENGINE_TX_REG_OFFSET)
#define SPI_ENGINE_STATUS_ADDR (USER_SPI_ENGINE_BASE_ADDR + SPI_ENGINE_STATUS_REG_OFFSET)

// Offsets within SPI Control (user_spi_ctrl)
#define SPI_HWCTRL_GPIO_OFFSET    0x000 // CS1_N, CS2_N, DC control (Write)
#define SPI_HWCTRL_PRNG_CTRL_OFFSET 0x004 // PRNG Trigger (Write)
#define SPI_HWCTRL_PRNG_READ_OFFSET 0x008 // Read PRNG output (Read)

// Bit positions in SPI_HWCTRL_GPIO_OFFSET Register
#define HWCTRL_CS1_N_BIT 0
#define HWCTRL_CS2_N_BIT 1
#define HWCTRL_DC_BIT    2
// Bit position in SPI_HWCTRL_PRNG_CTRL_OFFSET Register
#define HWCTRL_PRNG_EN_BIT 0

// GPIO Pin for ADXL345 Interrupt
#define ADXL345_INT_PIN     5  // Example: Use GPIO pin 5 for Accelerometer Interrupt Input

// Font ROM parameters
#define FONT_CHAR_WIDTH_BYTES 1 // Assuming 8 pixels wide, 1 byte per row
#define FONT_CHAR_HEIGHT_ROWS 12
#define FONT_BYTES_PER_CHAR (FONT_CHAR_WIDTH_BYTES * FONT_CHAR_HEIGHT_ROWS) // 12 bytes for 12x6 font
#define FONT_ASCII_START    ' ' // ASCII value of the first character in the font ROM

// --- Helper Functions ---

// Waits for the hardware SPI engine to be idle
void spi_engine_wait_idle() {
    uint32_t status;
    int timeout = 10000;
    do {
        status = mmio_read32(SPI_ENGINE_STATUS_ADDR);
        timeout--;
    } while ((status & 0x1) && (timeout > 0)); // Loop while busy bit (bit 0) is set
    if (timeout == 0) {
        printf("SPI_ENGINE: ERROR - Timeout waiting for idle! Status=0x%08x\n", (unsigned int)status);
    }
}

// Sends one byte using the hardware SPI engine
void spi_engine_send_byte(uint8_t data) {
    spi_engine_wait_idle();
    mmio_write32(SPI_ENGINE_TX_ADDR, (uint32_t)data);
    mmio_write32(SPI_ENGINE_CTRL_ADDR, 1); // Trigger
    spi_engine_wait_idle();
}

// Sets CS and DC lines via the user_spi_ctrl hardware block
// cs1_active: 1 to assert CS1_N (LOW), 0 to deassert (HIGH)
// cs2_active: 1 to assert CS2_N (LOW), 0 to deassert (HIGH)
// dc_is_data: 1 for D/C HIGH (data), 0 for D/C LOW (command)
void set_cs_dc_hw(int cs1_active, int cs2_active, int dc_is_data) {
    uint32_t ctrl_val = 0;
    if (!cs1_active) ctrl_val |= (1 << HWCTRL_CS1_N_BIT); // Active low, so write 0 to assert
    if (!cs2_active) ctrl_val |= (1 << HWCTRL_CS2_N_BIT); // Active low
    if (dc_is_data)  ctrl_val |= (1 << HWCTRL_DC_BIT);

    mmio_write32(USER_SPI_CTRL_BASE_ADDR + SPI_HWCTRL_GPIO_OFFSET, ctrl_val);
    for(volatile int i=0; i<10; i++); // Small delay for signals to settle
}

// Triggers the PRNG for one cycle
void trigger_prng() {
    printf("PRNG: Triggering...\n");
    mmio_write32(USER_SPI_CTRL_BASE_ADDR + SPI_HWCTRL_PRNG_CTRL_OFFSET, (1 << HWCTRL_PRNG_EN_BIT));
}

// Reads the PRNG output
uint32_t read_prng() {
    uint32_t val = mmio_read32(USER_SPI_CTRL_BASE_ADDR + SPI_HWCTRL_PRNG_READ_OFFSET);
    printf("PRNG: Read value 0x%08x\n", (unsigned int)val);
    return val;
}

// Reads a byte from the Font ROM
uint8_t read_font_byte(uint32_t rom_offset) {
    uint32_t data32 = mmio_read32(USER_FONT_ROM_BASE_ADDR + rom_offset);
    return (uint8_t)(data32 & 0xFF);
}

// --- Device Specific Functions (using new hardware control) ---

void ssd1331_command_hw(uint8_t cmd) {
    printf("SSD1331_HW: Sending Command 0x%02x\n", cmd);
    set_cs_dc_hw(1 /*cs1 active*/, 0 /*cs2 inactive*/, 0 /*DC command*/);
    spi_engine_send_byte(cmd);
    set_cs_dc_hw(0 /*cs1 inactive*/, 0 /*cs2 inactive*/, 0 /*DC command (don't care)*/);
    printf("SSD1331_HW: Command 0x%02x Sent.\n", cmd);
}

void ssd1331_data_hw(uint8_t data_byte) {
    set_cs_dc_hw(1 /*cs1 active*/, 0 /*cs2 inactive*/, 1 /*DC data*/);
    spi_engine_send_byte(data_byte);
    set_cs_dc_hw(0 /*cs1 inactive*/, 0 /*cs2 inactive*/, 1 /*DC data (don't care)*/);
}

void adxl345_write_reg_hw(uint8_t reg_addr, uint8_t value) {
    printf("ADXL345_HW: Writing 0x%02x to Reg 0x%02x\n", value, reg_addr);
    set_cs_dc_hw(0 /*cs1 inactive*/, 1 /*cs2 active*/, 0 /*DC don't care*/);
    spi_engine_send_byte(reg_addr & 0x7F); // MSB=0 for write
    spi_engine_send_byte(value);
    set_cs_dc_hw(0 /*cs1 inactive*/, 0 /*cs2 inactive*/, 0 /*DC don't care*/);
    printf("ADXL345_HW: Write to Reg 0x%02x Done.\n", reg_addr);
}

// --- Initialization Sequences ---
void ssd1331_init_hw() {
    printf("Initializing SSD1331 (HW Control)...\n");
    ssd1331_command_hw(0xAE); // Display OFF
    // Add full SSD1331 init sequence here using ssd1331_command_hw()
    ssd1331_command_hw(0xAF); // Display ON
    printf("SSD1331 Initialized (HW Control).\n");
}

void adxl345_init_hw() {
    printf("Initializing ADXL345 (HW Control)...\n");
    adxl345_write_reg_hw(0x2D, 0x08); // POWER_CTL -> Measurement Mode
    printf("ADXL345 Initialized (HW Control).\n");
}

// --- 8-Ball Phrases ---
const char* phrases[] = {
    "YES", "NO", "MAYBE", "ASK AGAIN", "CERTAINLY", "NO DOUBT", "VERY LIKELY", "CANNOT SAY"
};
const int num_phrases = sizeof(phrases) / sizeof(char*);

// --- Display Character Function ---
void display_char_hw(char c) {
    if (c < FONT_ASCII_START || c > (FONT_ASCII_START + 95 -1) ) {
        c = '?'; // Default for unknown characters
    }
    uint32_t char_rom_base = (uint32_t)(c - FONT_ASCII_START) * FONT_BYTES_PER_CHAR;

    for (int i = 0; i < FONT_BYTES_PER_CHAR; i++) {
        uint8_t font_byte = read_font_byte(char_rom_base + i);
        ssd1331_data_hw(font_byte);
    }
}

void display_string_hw(const char* str) {
    printf("Displaying string: \"%s\"\n", str);
    while (*str) {
        display_char_hw(*str++);
    }
}

// --- Main Function ---
int main() {
    uart_init();
    printf("--- Croc 8-Ball Test (Hardware CS/DC/ROM/PRNG) ---\n");
    uart_write_flush();

    // 1. Configure GPIO for ADXL345 Interrupt Pin
    printf("Configuring GPIO for ADXL INT pin (Pin %d)...\n", ADXL345_INT_PIN);
    // Assuming gpio_set_direction(pin_mask_to_change, direction_mask_for_those_pins)
    // To set only ADXL345_INT_PIN as input (0), affecting only that pin:
    gpio_set_direction((1 << ADXL345_INT_PIN), 0);
    printf("GPIO: Set Pin %d Direction = Input\n", ADXL345_INT_PIN);
    uart_write_flush();

    // Initialize CS lines inactive (high) and DC low (command) via user_spi_ctrl
    set_cs_dc_hw(0 /*CS1 inactive*/, 0 /*CS2 inactive*/, 0 /*DC command*/);

    // 2. Initialize Peripherals using hardware control
    adxl345_init_hw();
    uart_write_flush();
    ssd1331_init_hw();
    uart_write_flush();

    printf("--- Initialization Complete. Waiting for simulated interrupt... ---\n");
    uart_write_flush();

    // 3. Simulate waiting for and handling ADXL345 Interrupt
    int adxl_int_occurred = 0;
    for(int i=0; i<100; i++) { // Poll a few times
        // Inlined gpio_read_pin logic
        if (((gpio_read() >> ADXL345_INT_PIN) & 0x1) == 1) { // Assuming active high interrupt
            adxl_int_occurred = 1;
            break;
        }
        for(volatile int d=0; d<1000; d++); // Small delay between polls
    }

    if (adxl_int_occurred) {
        printf("ADXL345 Interrupt Detected (polled)!\n");
    } else {
        printf("ADXL345 Interrupt NOT detected (using PRNG anyway for test).\n");
    }
    uart_write_flush();

    // 4. Trigger PRNG and get a random phrase
    trigger_prng();
    for(volatile int d=0; d<10; d++); // Small delay for PRNG to update if needed
    uint32_t random_val = read_prng();
    int phrase_index = random_val % num_phrases;

    printf("Selected phrase index: %d (\"%s\")\n", phrase_index, phrases[phrase_index]);
    uart_write_flush();

    // 5. Display the selected phrase
    display_string_hw(phrases[phrase_index]);
    uart_write_flush();

    printf("--- Test Finished ---\n");
    uart_write_flush();

    return 1; // Return 1 to signal $finish in testbench
}

