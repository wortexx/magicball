#include "uart.h"
#include "print.h"
#include "config.h"

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

// -- Volatile Pointers to Peripherals --
volatile uint32_t* spi_engine_ptr    = (volatile uint32_t*)USER_OBI_SPI_BASE_ADDR;
volatile uint32_t* spi_ctrl_gpio_ptr = (volatile uint32_t*)USER_SPI_CTRL_BASE_ADDR;
volatile uint8_t* prng_ptr          = (volatile uint8_t*)USER_PRNG_BASE_ADDR; // Byte pointer for new PRNG
volatile uint8_t* font_rom_ptr      = (volatile uint8_t*)USER_FONT_ROM_BASE_ADDR;

void delay(int count) {
    for (volatile int i = 0; i < count; i++) {
      asm volatile ("nop");
    }
}

int main() {
    uart_init();
    printf("Full Peripheral Test Started...\n");
    uart_write_flush();

    uint32_t ctrl_engine_val, data_to_send;
    uint32_t ctrl_gpio_val;
    uint32_t read_val_32;
    uint8_t  read_val_8;

     // --- Test User Font ROM --- 
    printf("--- Font ROM Test ---\n");
    uart_write_flush(); 
    int offset_A = (65 - 32) * 12; // Character 'A'
    int offset_B = (66 - 32) * 12; // Character 'B'

    // Read a few bytes from character 'A'
    printf("Reading from char 'A'...\n");
    uart_write_flush();
    for (int i = 0; i < 4; i++) { 
        read_val_8 = font_rom_ptr[offset_A + i];
        // Using separate printf calls to work around limited printf implementations
        printf("FR A+%d -> ", i);
        printf("0x%x\n", read_val_8);
        uart_write_flush(); 
        delay(10); 
    }

    // Read a few bytes from character 'B'
    printf("Reading from char 'B'...\n");
    uart_write_flush();
    for (int i = 0; i < 4; i++) {
        read_val_8 = font_rom_ptr[offset_B + i];  
        // Using separate printf calls
        printf("FR B+%d -> ", i);
        printf("0x%x\n", read_val_8);
        uart_write_flush(); 
        delay(10);
    }
    // --- END Font ROM Test ---

    // --- Test Byte-Addressable PRNG ---
    printf("--- PRNG Test ---\n");
    uart_write_flush();
    uint8_t byte0, byte1, byte2, byte3;
    uint32_t base_offset = 0xABC;
    byte0 = prng_ptr[base_offset + 0];
    delay(10);
    byte1 = prng_ptr[base_offset + 1];
    delay(10);
    byte2 = prng_ptr[base_offset + 2];
    delay(10);
    byte3 = prng_ptr[base_offset + 3];
    read_val_32 = (uint32_t)(byte3 << 24) | (uint32_t)(byte2 << 16) | (uint32_t)(byte1 << 8) | (uint32_t)byte0;
    printf("PRNG(0x%x):0x%x\n", base_offset, read_val_32);
    uart_write_flush();
    // --- END PRNG Test ---

    // --- Test user_spi_ctrl --- 
    printf("--- User SPI Ctrl Test ---\n");
    uart_write_flush(); 
    ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL | SPI_CTRL_GPIO_DC_VAL; 
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    delay(10); 
    read_val_32 = spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4]; 
    printf("SPI_CTRL_RB:0x%x (E:0x7)\n", read_val_32 & 0x7);
    uart_write_flush(); 
    // --- END user_spi_ctrl Test ---

    // --- Test OBI SPI Peripheral (Engine) --- 
    printf("--- SPI Engine Test ---\n");
    uart_write_flush(); 
    spi_engine_ptr[SPI_ENGINE_REG_CLK_DIV / 4] = 1; 
    delay(10); 
    ctrl_engine_val = SPI_ENGINE_CTRL_ENABLE | SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA; 
    spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val; 
    delay(10); 
    read_val_32 = spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4]; 
    printf("SPI_ENG_CTRL:0x%x(E:0xD)\n", read_val_32 & 0xFF);
    uart_write_flush(); 

    data_to_send = 0xAD; 
    ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; 
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    delay(10); 

    spi_engine_ptr[SPI_ENGINE_REG_DATA_TX / 4] = data_to_send; 
    delay(10); 
      
    ctrl_engine_val = (spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4]) | SPI_ENGINE_CTRL_START_XFER;
    spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val;  

    int timeout = 0; 
    while ((spi_engine_ptr[SPI_ENGINE_REG_STATUS / 4] & SPI_ENGINE_STATUS_BUSY) && (timeout < 20000)) {  
        delay(1);  
        timeout++; 
    } 

    if (timeout >= 20000) {  
        printf("TIMEOUT: BUSY!\n");
    } else {  
        printf("BUSY clear.\n");
    } 
    uart_write_flush(); 

    ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL | SPI_CTRL_GPIO_DC_VAL;  
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    // --- END OBI SPI Peripheral Test ---

    printf("All Tests Done.\n");
    uart_write_flush();
    return 1;
}