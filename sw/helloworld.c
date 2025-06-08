#include "uart.h"   // For uart_init, printf, uart_write_flush
#include "print.h"  // For printf
#include "config.h" // For peripheral base addresses

// -- User Domain Peripheral Base Addresses --
#ifndef USER_OBI_SPI_BASE_ADDR
#define USER_OBI_SPI_BASE_ADDR 0x20000000
#endif
#ifndef USER_SPI_CTRL_BASE_ADDR
#define USER_SPI_CTRL_BASE_ADDR    0x20001000
#endif
#ifndef USER_PRNG_BASE_ADDR
#define USER_PRNG_BASE_ADDR        0x20002000
#endif
#ifndef USER_FONT_ROM_BASE_ADDR
#define USER_FONT_ROM_BASE_ADDR    0x20003000
#endif

// -- Standard Croc SoC Peripheral Base Addresses (if needed by other includes) --
#ifndef GPIO_BASE_ADDR
#define GPIO_BASE_ADDR             0x03005000
#endif
#ifndef UART_BASE_ADDR
#define UART_BASE_ADDR             0x03002000
#endif

// -- User OBI SPI Peripheral (Engine) Register Offsets --
#define SPI_ENGINE_REG_CTRL     0x00
#define SPI_ENGINE_REG_STATUS   0x04
#define SPI_ENGINE_REG_DATA_TX  0x08
#define SPI_ENGINE_REG_CLK_DIV  0x0C

// Engine Control Register Bits
#define SPI_ENGINE_CTRL_ENABLE      (1 << 0)
#define SPI_ENGINE_CTRL_START_XFER  (1 << 1)
#define SPI_ENGINE_CTRL_CPOL        (1 << 2)
#define SPI_ENGINE_CTRL_CPHA        (1 << 3)

// Engine Status Register Bits
#define SPI_ENGINE_STATUS_BUSY      (1 << 0)

// -- User SPI Ctrl (CS/DC outputs) Register Offset & Bits --
#define SPI_CTRL_GPIO_REG_OFFSET 0x000
#define SPI_CTRL_GPIO_CS1_N_VAL (1 << 0) 
#define SPI_CTRL_GPIO_CS2_N_VAL (1 << 1) 
#define SPI_CTRL_GPIO_DC_VAL    (1 << 2) 

// -- Xorshift PRNG Register Offsets --
#define PRNG_TRIGGER_BYTE_OFFSET  0x000 
#define PRNG_READ_BYTE_OFFSET     0x004 

// -- Volatile Pointers to Peripherals --
volatile uint32_t* spi_engine_ptr    = (volatile uint32_t*)USER_OBI_SPI_BASE_ADDR;
volatile uint32_t* spi_ctrl_gpio_ptr = (volatile uint32_t*)USER_SPI_CTRL_BASE_ADDR;
volatile uint32_t* prng_ptr          = (volatile uint32_t*)USER_PRNG_BASE_ADDR;
volatile uint8_t* font_rom_ptr      = (volatile uint8_t*)USER_FONT_ROM_BASE_ADDR;

void delay(int count) {
    for (volatile int i = 0; i < count; i++);
}

int main() {
    uart_init();
    printf("Comprehensive Test (Seed-PRNG) Started...\n"); // Shortened
    uart_write_flush();

    uint32_t ctrl_engine_val, data_to_send;
    uint32_t ctrl_gpio_val;
    uint32_t read_val_32;
    uint8_t  read_val_8;

    // --- Test User Font ROM --- 
    printf("--- Font ROM Test ---\n"); // Shortened
    uart_write_flush(); 
    int offset_A = (65 - 32) * 12; // Test only one character to save space
    // printf("Font ROM Data (12 bytes for 'A' at offset 0x%x):\n", offset_A); 
    // uart_write_flush(); 
    for (int i = 0; i < 2; i++) { // Read only a few bytes
        read_val_8 = font_rom_ptr[offset_A + i];  
        printf("FR A+%d:0x%x\n", i, read_val_8); // Shortened
        uart_write_flush(); 
        delay(50); 
    }
    // --- END Font ROM Test ---

    printf("All Tests Done.\n"); // Shortened
    uart_write_flush();
    return 1;
}