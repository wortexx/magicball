#include "uart.h"   // For uart_init, printf, uart_write_flush
#include "print.h"  // For printf
#include "config.h" // For peripheral base addresses
#include "spi.h"    // For SPI 
#include "xorshift.h" // For PRNG


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
    printf("Comprehensive Test Started...\n");
    uart_write_flush();

    uint32_t ctrl_engine_val, data_to_send;
    uint32_t ctrl_gpio_val;
    uint32_t read_val_32;
    uint32_t rnd;
    uint8_t  read_val_8;

    // --- Test User Font ROM --- 
    printf("--- Font ROM Test ---\n");
    uart_write_flush(); 
    int offset_A = (65 - 32) * 12; // Test only one character to save space
    for (int i = 0; i < 2; i++) { // Read only a few bytes
        read_val_8 = font_rom_ptr[offset_A + i];  
        printf("FR A+%d:0x%x\n", i, read_val_8);
        uart_write_flush(); 
        delay(50); 
    }
    // --- END Font ROM Test ---

    // --- Test Xorshift PRNG (Seed from Address) ---
    printf("# PRNG Tests\n");
    uart_write_flush();
    
    delay(100);
    rnd = xorshift32(0x000);
    printf("[PRNG] seed 0x000 - %x\n", rnd);
    uart_write_flush();

    delay(100);
    rnd = xorshift32(0xAAA);
    printf("[PRNG] seed 0xAAA - %x\n", rnd);
    uart_write_flush();

    delay(100);
    rnd = xorshift32(0xFFF);
    printf("[PRNG] seed 0xFFF - %x\n", rnd);
    uart_write_flush();


    printf("# PRNG Test Done\n");
    uart_write_flush();
    // --- END PRNG Test ---

    // --- Test user_spi_ctrl --- 
    printf("--- User SPI Ctrl Test ---\n");
    uart_write_flush(); 
    ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; 
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    delay(100); 
    
    ctrl_gpio_val = SPI_CTRL_GPIO_DC_VAL | SPI_CTRL_GPIO_CS2_N_VAL; 
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    delay(100);
    
    ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL | SPI_CTRL_GPIO_DC_VAL; 
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    delay(100); 
    read_val_32 = spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4]; 
    printf("SPI_CTRL_RB:0x%x (E:0x7)\n", read_val_32 & 0x7);
    uart_write_flush(); 
    delay(100); 
    // --- END user_spi_ctrl Test ---

    // --- Test OBI SPI Peripheral (Engine) --- 
    printf("--- SPI Engine Test ---\n");
    uart_write_flush(); 
    spi_engine_ptr[SPI_ENGINE_REG_CLK_DIV / 4] = 1; 
    delay(100); 
    ctrl_engine_val = SPI_ENGINE_CTRL_ENABLE | SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA; 
    spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val; 
    delay(100); 
    read_val_32 = spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4]; 
    printf("SPI_ENG_CTRL:0x%x (E:0xD)\n", read_val_32 & 0xFF);
    uart_write_flush(); 

    data_to_send = 0xAD; 
    ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; 
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    delay(100); 

    spi_engine_ptr[SPI_ENGINE_REG_DATA_TX / 4] = data_to_send; 
    delay(100); 
      
    ctrl_engine_val = (spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] & ~(SPI_ENGINE_CTRL_START_XFER)) | SPI_ENGINE_CTRL_START_XFER;
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