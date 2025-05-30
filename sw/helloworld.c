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

    // --- Test Xorshift PRNG (Seed from Address) ---
    printf("--- PRNG Test (Seed Addr) ---\n"); // Shortened
    uart_write_flush();
    
    delay(100);
    read_val_32 = prng_ptr[PRNG_READ_BYTE_OFFSET / 4]; 
    printf("1.Init:0x%x\n", read_val_32); // Shortened
    uart_write_flush();

    // printf("2.Triggering (offset 0x%x)...\n", PRNG_TRIGGER_BYTE_OFFSET);
    // uart_write_flush();
    prng_ptr[PRNG_TRIGGER_BYTE_OFFSET / 4] = 0x1; 
    delay(100);
    read_val_32 = prng_ptr[PRNG_READ_BYTE_OFFSET / 4];
    printf("2.Trig1:0x%x\n", read_val_32); // Shortened
    uart_write_flush();

    uint32_t seed_byte_offset_1 = 0xABC; 
    // printf("3.Seeding (offset 0x%x -> seed 0x%x)...\n", seed_byte_offset_1, seed_byte_offset_1);
    // uart_write_flush();
    prng_ptr[seed_byte_offset_1 / 4] = 0x1; 
    delay(100);
    read_val_32 = prng_ptr[PRNG_READ_BYTE_OFFSET / 4];
    printf("3.Seed1:0x%x (E:0x%x)\n", read_val_32, seed_byte_offset_1); // Shortened
    uart_write_flush();

    // printf("5.Triggering (from seed 0x%x)...\n", seed_byte_offset_1);
    // uart_write_flush();
    prng_ptr[PRNG_TRIGGER_BYTE_OFFSET / 4] = 0x1; 
    delay(100);
    read_val_32 = prng_ptr[PRNG_READ_BYTE_OFFSET / 4];
    printf("4.Trig2:0x%x\n", read_val_32); // Shortened
    uart_write_flush();

    uint32_t seed_byte_offset_2 = 0xF00; 
    // printf("6.Seeding (offset 0x%x -> seed 0x%x)...\n", seed_byte_offset_2, seed_byte_offset_2);
    // uart_write_flush();
    prng_ptr[seed_byte_offset_2 / 4] = 0x1; 
    delay(100);
    read_val_32 = prng_ptr[PRNG_READ_BYTE_OFFSET / 4];
    printf("5.Seed2:0x%x (E:0x%x)\n", read_val_32, seed_byte_offset_2); // Shortened
    uart_write_flush();

    printf("--- PRNG Test Done ---\n"); // Shortened
    uart_write_flush();
    // --- END PRNG Test ---

    // --- Test user_spi_ctrl --- 
    printf("--- User SPI Ctrl Test ---\n");  // Shortened
    uart_write_flush(); 
    // printf("Action: Set user_oled_cs_n_pin_o LOW, user_accel_cs_n_pin_o HIGH, user_oled_dc_pin_o LOW.\n");
    // printf("        (Check corresponding dedicated pins in waveform viewer)\n");
    ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; 
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    // uart_write_flush(); // Reduce flushes
    delay(100); // Reduced delay 
    
    // printf("Action: Set user_oled_cs_n_pin_o LOW, user_accel_cs_n_pin_o HIGH, user_oled_dc_pin_o HIGH.\n");
    // printf("        (Check corresponding dedicated pins in waveform viewer)\n");
    ctrl_gpio_val = SPI_CTRL_GPIO_DC_VAL | SPI_CTRL_GPIO_CS2_N_VAL; 
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    // uart_write_flush(); 
    delay(100); // Reduced delay
    
    // printf("Action: Set user_oled_cs_n_pin_o HIGH, user_accel_cs_n_pin_o HIGH, user_oled_dc_pin_o HIGH.\n");
    // printf("        (Check corresponding dedicated pins in waveform viewer)\n");
    ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL | SPI_CTRL_GPIO_DC_VAL; 
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    delay(100); 
    read_val_32 = spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4]; 
    printf("SPI_CTRL_RB:0x%x (E:0x7)\n", read_val_32 & 0x7); // Shortened
    uart_write_flush(); 
    delay(100); // Reduced delay
    // --- END user_spi_ctrl Test ---

    // --- Test OBI SPI Peripheral (Engine) --- 
    printf("--- SPI Engine Test ---\n"); // Shortened
    uart_write_flush(); 
    // printf("Configuring SPI Engine (CPOL=1, CPHA=1, CLK_DIV=1 for 5MHz with 20MHz sysclk)...\n");
    spi_engine_ptr[SPI_ENGINE_REG_CLK_DIV / 4] = 1; 
    delay(100); 
    ctrl_engine_val = SPI_ENGINE_CTRL_ENABLE | SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA; 
    spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val; 
    delay(100); 
    read_val_32 = spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4]; 
    printf("SPI_ENG_CTRL:0x%x (E:0xD)\n", read_val_32 & 0xFF); // Shortened
    uart_write_flush(); 

    data_to_send = 0xAD; 
    // printf("Preparing to send 0x%x via SPI Engine...\n", data_to_send); 
    // uart_write_flush(); 

    // printf("Action: Asserting user_oled_cs_n_pin_o LOW (for SPI transaction).\n");
    ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; 
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    delay(100); 

    spi_engine_ptr[SPI_ENGINE_REG_DATA_TX / 4] = data_to_send; 
    delay(100); 
      
    // printf("Triggering SPI transfer. Polling BUSY. Check dedicated SCK/MOSI pins in waveforms.\n");
    // uart_write_flush(); 
    ctrl_engine_val = (spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] & ~(SPI_ENGINE_CTRL_START_XFER)) | SPI_ENGINE_CTRL_START_XFER;
    spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val;  

    // delay(10000); // Reduced delay for waveform observation if still needed

    int timeout = 0; 
    while ((spi_engine_ptr[SPI_ENGINE_REG_STATUS / 4] & SPI_ENGINE_STATUS_BUSY) && (timeout < 20000)) {  
        delay(1);  
        timeout++; 
    } 

    if (timeout >= 20000) {  
        printf("TIMEOUT: BUSY!\n");  // Shortened
    } else {  
        printf("BUSY clear.\n");  // Shortened
    } 
    uart_write_flush(); 

    // printf("Action: De-asserting user_oled_cs_n_pin_o HIGH.\n");
    ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL | SPI_CTRL_GPIO_DC_VAL;  
    spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
    // printf("SPI Deactivated (CS high).\n"); 
    // uart_write_flush(); 
    // --- END OBI SPI Peripheral Test ---

    printf("\nAll Tests Done.\n"); // Shortened
    uart_write_flush();
    return 0;
}


//     // 1. Enable the GPIO pin
//     current_gpio_en_val = gpio_ptr[REAL_STD_GPIO_EN_WORD_OFFSET];
//     gpio_ptr[REAL_STD_GPIO_EN_WORD_OFFSET] = current_gpio_en_val | (1 << PIN_ACCEL_INT); // Enable pin 5
//     delay(100);

//     // 2. Set direction to input
//     current_gpio_dir_val = gpio_ptr[REAL_STD_GPIO_DIR_WORD_OFFSET]; 
//     gpio_ptr[REAL_STD_GPIO_DIR_WORD_OFFSET] = current_gpio_dir_val & ~(1 << PIN_ACCEL_INT); 
//     delay(100); 

//     printf("Reading Pin (hex) %x. Force gpio_i[%x] LOW in testbench if not already.\n", PIN_ACCEL_INT, PIN_ACCEL_INT);
//     uart_write_flush();
//     pin5_read_value = (gpio_ptr[REAL_STD_GPIO_IN_WORD_OFFSET] >> PIN_ACCEL_INT) & 0x1;
//     printf("Debug values: PIN_ACCEL_INT = %x, pin5_read_value = %x\n", PIN_ACCEL_INT, pin5_read_value);
//     uart_write_flush();
//     printf("Readback for Pin %x (ADXL_INT): %x\n", PIN_ACCEL_INT, pin5_read_value); 
//     uart_write_flush();
//     delay(20000); 

//     printf("Reading Pin (hex) %x again. Force gpio_i[%x] HIGH in testbench now.\n", PIN_ACCEL_INT, PIN_ACCEL_INT);
//     uart_write_flush();
//     pin5_read_value = (gpio_ptr[REAL_STD_GPIO_IN_WORD_OFFSET] >> PIN_ACCEL_INT) & 0x1;
//     printf("Debug values: PIN_ACCEL_INT = %x, pin5_read_value = %x\n", PIN_ACCEL_INT, pin5_read_value);
//     uart_write_flush();
//     printf("Readback for Pin %x (ADXL_INT): %x\n", PIN_ACCEL_INT, pin5_read_value); 
//     uart_write_flush();
//     delay(20000); 

//     // Optional: Restore original enable/direction values if needed for other tests
//     // gpio_ptr[REAL_STD_GPIO_EN_WORD_OFFSET] = current_gpio_en_val;
//     // gpio_ptr[REAL_STD_GPIO_DIR_WORD_OFFSET] = current_gpio_dir_val;

//     printf("--- ADXL Interrupt Pin Test Finished ---\n");
//     uart_write_flush();


// // // --- Test User Font ROM --- 
// printf("Testing User Font ROM at 0x%x...\n", (uint32_t)font_rom_ptr); 
// uart_write_flush(); 

// // --- Correctly read data for character '9' (ASCII 57) --- 
// int offset_9 = (57 - 32) * 12; // Should be 300 
// printf("Font ROM Data (12 bytes for '9' at offset 0x%x):\n", offset_9); 
// uart_write_flush(); 

// for (int i = 0; i < 12; i++) { 
//     read_val_8 = font_rom_ptr[offset_9 + i];  
//     printf("Byte 0x%x: 0x%x\n", offset_9 + i, read_val_8); 
//     uart_write_flush(); 
//     delay(50); 
// } 

// //--- Correctly read data for character 'A' (ASCII 65) --- 
// int offset_A = (65 - 32) * 12; // Should be 396 
// printf("Font ROM Data (12 bytes for 'A' at offset 0x%x):\n", offset_A); 
// uart_write_flush(); 

// for (int i = 0; i < 12; i++) { 
//     read_val_8 = font_rom_ptr[offset_A + i]; 
//     printf("Byte 0x%x: 0x%x\n", offset_A + i, read_val_8); 
//     uart_write_flush(); 
//     delay(50); 
// }
//    // --- Test Xorshift PRNG (Simple Reverted Version) --- 
//     printf("Testing Xorshift PRNG...\n"); 
//     uart_write_flush(); 
//     prng_ptr[PRNG_CTRL_OFFSET / 4] = 0x1; // Trigger 
//     delay(100); 
//     read_val_32 = prng_ptr[PRNG_RDATA_OFFSET / 4]; 
//     printf("PRNG Read 1: 0x%x\n", read_val_32); 
//     uart_write_flush(); 
//     // --- END PRNG Test ---

//       // --- Test user_spi_ctrl --- 
//     // (This section is from your stable helloworld.c)
//     // It commands the dedicated pins. Waveform check is needed for actual pin state.
//     printf("Testing User SPI Ctrl...\n"); 
//     uart_write_flush(); 

//     // Example: Assert OLED CS low (active), set D/C high (data) 
//     // Assuming CS1 is OLED_CS (pin 2) and DC is pin 3 
//     printf("Action: Set user_oled_cs_n_pin_o LOW, user_accel_cs_n_pin_o HIGH, user_oled_dc_pin_o LOW.\n");
//     printf("        (Check corresponding pins in waveform viewer)\n");
//     ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; // CS1_N=0 (OLED_CS active), CS2_N=1, DC=0
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
//     uart_write_flush(); 
//     delay(20000); 

//     printf("Action: Set user_oled_cs_n_pin_o LOW, user_accel_cs_n_pin_o HIGH, user_oled_dc_pin_o HIGH.\n");
//     printf("        (Check corresponding pins in waveform viewer)\n");
//     ctrl_gpio_val = SPI_CTRL_GPIO_DC_VAL | SPI_CTRL_GPIO_CS2_N_VAL; // CS1_N=0, CS2_N=1, DC=1
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
//     uart_write_flush(); 
//     delay(20000); 

//     printf("Action: Set user_oled_cs_n_pin_o HIGH, user_accel_cs_n_pin_o HIGH, user_oled_dc_pin_o HIGH.\n");
//     printf("        (Check corresponding pins in waveform viewer)\n");
//     ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL | SPI_CTRL_GPIO_DC_VAL; // All high 
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
//     delay(100); // Short delay before readback
//     read_val_32 = spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4]; // Read back the register value
//     printf("SPI_CTRL_REG Readback: 0x%x (Expected: 0x7 for lower 3 bits)\n", read_val_32 & 0x7);
//     uart_write_flush(); 
//     delay(20000); 
//     // --- END user_spi_ctrl Test ---

//     // --- Test OBI SPI Peripheral (Engine) --- 
//     // (This section is from your stable helloworld.c)
//     printf("Configuring SPI Engine...\n"); 
//     uart_write_flush(); 
//     spi_engine_ptr[SPI_ENGINE_REG_CLK_DIV / 4] = 0x01; 
//     delay(100); 
//     // Enable engine, set CPOL=1, CPHA=1 (example, adjust as needed for OLED/ADXL)
//     ctrl_engine_val = SPI_ENGINE_CTRL_ENABLE | SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA; 
//     spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val; 
//     delay(100); 
//     read_val_32 = spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4]; 
//     printf("Engine Initial CTRL_REG: 0x%x\n", read_val_32 & 0xFF); 
//     uart_write_flush(); 

//     data_to_send = 0xAD; 
//     printf("Preparing to send 0x%x via SPI Engine...\n", data_to_send); 
//     uart_write_flush(); 

//     // Assert a chip select (e.g., OLED CS) using user_spi_ctrl
//     // DC low (command) or high (data) depending on what 0xAD represents
//     printf("Action: Asserting user_oled_cs_n_pin_o LOW (for SPI transaction).\n");
//     ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; // OLED_CS_N (pin for user_oled_cs_n_o) low, DC can be low/high
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
//     delay(100); 

//     spi_engine_ptr[SPI_ENGINE_REG_DATA_TX / 4] = data_to_send; 
//     delay(100); // Ensure data is written before START_XFER
      
//     printf("Polling for SPI transfer completion (BUSY to clear)...\n");  
//     printf("        (Check dedicated user_spi_sck_pin_o and user_spi_mosi_pin_o in waveforms during this)\n");
//     uart_write_flush(); 

//     // Read control reg, OR in START_XFER, keep ENABLE, CPOL, CPHA
//     ctrl_engine_val = (spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] & ~(SPI_ENGINE_CTRL_START_XFER)) | SPI_ENGINE_CTRL_START_XFER;
//     spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val;  

//     // Optional: Add a specific delay here if you want to easily find the SPI transaction in waveforms
//     // delay(5000); 

//     int timeout = 0; 
//     while ((spi_engine_ptr[SPI_ENGINE_REG_STATUS / 4] & SPI_ENGINE_STATUS_BUSY) && (timeout < 20000)) {  
//         delay(1);  
//         timeout++; 
//     } 

//     if (timeout >= 20000) {  
//         printf("TIMEOUT: Engine BUSY did not clear for TX1!\n");  
//     } else {  
//         printf("Engine BUSY cleared for TX1.\n");  
//     } 
//     uart_write_flush(); 

//     // De-assert CS1 (OLED_CS_N)
//     printf("Action: De-asserting user_oled_cs_n_pin_o HIGH.\n");
//     ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL | SPI_CTRL_GPIO_DC_VAL;  
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val; 
//     // Optionally clear START_XFER and disable engine if done with it for now
//     // ctrl_engine_val = SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA; // Keep CPOL/CPHA, remove ENABLE & START
//     // spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val; 
//     printf("SPI Deactivated (CS high).\n"); 
//     uart_write_flush(); 
//     // --- END OBI SPI Peripheral Test ---

//     printf("All Peripheral Tests Finished.\n");
//     uart_write_flush();
//     return 1;
// }



// #include "uart.h"   // For uart_init, printf, uart_write_flush
// #include "print.h"  // For printf
// #include "config.h" // For peripheral base addresses

// #ifndef USER_OBI_SPI_BASE_ADDR // For obi_spi_peripheral (engine)
// #define USER_OBI_SPI_BASE_ADDR 0x20000000
// #endif
// #ifndef USER_SPI_CTRL_BASE_ADDR // For user_spi_ctrl
// #define USER_SPI_CTRL_BASE_ADDR    0x20001000
// #endif
// #ifndef USER_PRNG_BASE_ADDR // For xorshift
// #define USER_PRNG_BASE_ADDR        0x20002000
// #endif
// #ifndef USER_FONT_ROM_BASE_ADDR // For user_font_rom
// #define USER_FONT_ROM_BASE_ADDR    0x20003000
// #endif


// #ifndef GPIO_BASE_ADDR
// #define GPIO_BASE_ADDR             0x03005000 // From croc_pkg.sv
// #endif
// #ifndef UART_BASE_ADDR
// #define UART_BASE_ADDR             0x03002000 // From croc_pkg.sv
// #endif

// // OBI SPI Peripheral (Engine) Register Offsets
// #define SPI_ENGINE_REG_CTRL     0x00
// #define SPI_ENGINE_REG_STATUS   0x04
// #define SPI_ENGINE_REG_DATA_TX  0x08
// #define SPI_ENGINE_REG_CLK_DIV  0x0C

// // Engine Control Register Bits
// #define SPI_ENGINE_CTRL_ENABLE      (1 << 0)
// #define SPI_ENGINE_CTRL_START_XFER  (1 << 1)
// #define SPI_ENGINE_CTRL_CPOL        (1 << 2)
// #define SPI_ENGINE_CTRL_CPHA        (1 << 3)

// // Engine Status Register Bits
// #define SPI_ENGINE_STATUS_BUSY      (1 << 0)

// // User SPI Ctrl Register Offset
// #define SPI_CTRL_GPIO_REG_OFFSET 0x000
// // User SPI Ctrl Register Bits
// #define SPI_CTRL_GPIO_CS1_N_VAL (1 << 0)
// #define SPI_CTRL_GPIO_CS2_N_VAL (1 << 1)
// #define SPI_CTRL_GPIO_DC_VAL    (1 << 2)

// // Xorshift PRNG Register Offsets
// #define PRNG_CTRL_OFFSET  0x00 // Write to trigger
// #define PRNG_RDATA_OFFSET 0x04 // Read to get value

// volatile uint32_t* spi_engine_ptr    = (volatile uint32_t*)USER_OBI_SPI_BASE_ADDR;
// volatile uint32_t* spi_ctrl_gpio_ptr = (volatile uint32_t*)USER_SPI_CTRL_BASE_ADDR;
// volatile uint32_t* prng_ptr          = (volatile uint32_t*)USER_PRNG_BASE_ADDR;
// volatile uint8_t* font_rom_ptr      = (volatile uint8_t*)USER_FONT_ROM_BASE_ADDR; // Byte pointer for ROM
// volatile uint32_t* gpio_ptr          = (volatile uint32_t*)GPIO_BASE_ADDR;

// void delay(int count) {
//     for (volatile int i = 0; i < count; i++);
// }

// int main() {
//     uart_init();
//     printf("Comprehensive Peripheral Test (v4 - incl. Font ROM) Started...\n");
//     uart_write_flush();

//     uint32_t ctrl_engine_val, status_engine_val, data_to_send;
//     uint32_t ctrl_gpio_val;
//     uint32_t read_val_32;
//     uint8_t  read_val_8;

//     // --- Test User Font ROM ---
//     printf("Testing User Font ROM at 0x%x...\n", (uint32_t)font_rom_ptr);
//     uart_write_flush();

//     // --- Correctly read data for character '9' (ASCII 57) ---
//     int offset_9 = (57 - 32) * 12; // Should be 300
//     printf("Font ROM Data (12 bytes for '9' at offset 0x%x):\n", offset_9);
//     uart_write_flush();

//     for (int i = 0; i < 12; i++) {
//         // Read from the calculated offset
//         read_val_8 = font_rom_ptr[offset_9 + i]; 
//         printf("Byte 0x%x: 0x%x\n", offset_9 + i, read_val_8);
//         uart_write_flush();
//         delay(50);
//     }

//     // --- Correctly read data for character 'A' (ASCII 65) ---
//     int offset_A = (65 - 32) * 12; // Should be 396
//     printf("Font ROM Data (12 bytes for 'A' at offset 0x%x):\n", offset_A);
//     uart_write_flush();

//     for (int i = 0; i < 12; i++) {
//         // Read from the calculated offset
//         read_val_8 = font_rom_ptr[offset_A + i];
//         printf("Byte 0x%x: 0x%x\n", offset_A + i, read_val_8);
//         uart_write_flush();
//         delay(50);
//     }
//     //--- Test user_spi_ctrl ---
//     printf("Testing User SPI Ctrl...\n");
//     uart_write_flush();
//     ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL | SPI_CTRL_GPIO_DC_VAL; // CS1=1, CS2=1, DC=1
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     delay(100);
//     read_val_32 = spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4];
//     printf("SPI_CTRL Read: 0x%x (Expected: 0x%x for lower 3 bits)\n", read_val_32 & 0x7, ctrl_gpio_val & 0x7);
//     uart_write_flush();

//     printf("Testing User SPI Ctrl...\n");
//     uart_write_flush();

//     // Example: Assert OLED CS low (active), set D/C high (data)
//     // Assuming CS1 is OLED_CS (pin 2) and DC is pin 3
//     ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; // CS1_N=0 (low), CS2_N=1 (high), DC=0 (command initially)
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     printf("Set OLED_CS low (pin 2), Accel_CS high (pin 4), D/C low (pin 3)\n");
//     uart_write_flush();
//     delay(20000); // << ADD A LONG DELAY HERE FOR OBSERVATION

//     // Now set D/C high
//     ctrl_gpio_val = SPI_CTRL_GPIO_DC_VAL | SPI_CTRL_GPIO_CS2_N_VAL; // CS1_N=0, CS2_N=1, DC=1 (data)
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     printf("Set OLED_CS low (pin 2), Accel_CS high (pin 4), D/C high (pin 3)\n");
//     uart_write_flush();
//     delay(20000); // << ADD A LONG DELAY HERE

//     // De-assert CS1
//     ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL | SPI_CTRL_GPIO_DC_VAL; // All high
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     printf("De-asserted all CS and D/C high\n");
//     uart_write_flush();
//     delay(20000); // << ADD A LONG DELAY HERE

// // --- Test Xorshift PRNG ---
//     printf("Testing Xorshift PRNG...\n");
//     uart_write_flush();
//     prng_ptr[PRNG_CTRL_OFFSET / 4] = 0x1; // Trigger
    
//     delay(100);

//     read_val_32 = prng_ptr[PRNG_RDATA_OFFSET / 4];
//     printf("PRNG Read 1: 0x%x\n", read_val_32);
//     uart_write_flush();

//     // --- Test OBI SPI Peripheral (Engine) ---
//     printf("Configuring SPI Engine...\n");
//     uart_write_flush();
//     spi_engine_ptr[SPI_ENGINE_REG_CLK_DIV / 4] = 0x01;
//     delay(100);
//     ctrl_engine_val = SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA;
//     spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val;
//     delay(100);
//     read_val_32 = spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4];
//     printf("Engine Initial CTRL_REG: 0x%x\n", read_val_32 & 0xFF);
//     uart_write_flush();

//     data_to_send = 0xAD;
//     printf("Preparing to send 0x%x via SPI Engine...\n", data_to_send);
//     uart_write_flush();

//     ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; // CS1_N=0, CS2_N=1, DC=0 (command)
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     delay(100);

//     spi_engine_ptr[SPI_ENGINE_REG_DATA_TX / 4] = data_to_send;
    
//     // Initiate transfer
//     printf("Polling for SPI transfer completion (BUSY to clear)...\n"); 
//     uart_write_flush();

//     ctrl_engine_val = SPI_ENGINE_CTRL_ENABLE | SPI_ENGINE_CTRL_START_XFER | SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA;
//     spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val; 

//     int timeout = 0;
//     while ((spi_engine_ptr[SPI_ENGINE_REG_STATUS / 4] & SPI_ENGINE_STATUS_BUSY) && (timeout < 20000)) { 
//         delay(1); 
//         timeout++;
//     }

//     if (timeout >= 20000) { 
//         printf("TIMEOUT: Engine BUSY did not clear for TX1!\n"); 
//     } else { 
//         printf("Engine BUSY cleared for TX1.\n"); 
//     }
//     uart_write_flush();

//     ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL; 
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     ctrl_engine_val = SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA; 
//     spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val;
//     printf("SPI Deactivated.\n");
//     uart_write_flush();

//     printf("All Peripheral Tests Finished.\n");
//     uart_write_flush();

//     return 1;
// }




//*******************************************************************************/

// #include "uart.h"   // For uart_init, printf, uart_write_flush
// #include "print.h"  // For printf
// #include "config.h" // For peripheral base addresses

// // -- User Domain Peripheral Base Addresses --
// #ifndef USER_OBI_SPI_BASE_ADDR
// #define USER_OBI_SPI_BASE_ADDR 0x20000000
// #endif
// #ifndef USER_SPI_CTRL_BASE_ADDR
// #define USER_SPI_CTRL_BASE_ADDR    0x20001000
// #endif
// #ifndef USER_PRNG_BASE_ADDR
// #define USER_PRNG_BASE_ADDR        0x20002000
// #endif
// #ifndef USER_FONT_ROM_BASE_ADDR
// #define USER_FONT_ROM_BASE_ADDR    0x20003000
// #endif

// // -- Standard Croc SoC Peripheral Base Addresses --
// #ifndef GPIO_BASE_ADDR // Standard GPIO Controller in croc_domain
// #define GPIO_BASE_ADDR             0x03005000
// #endif
// #ifndef UART_BASE_ADDR
// #define UART_BASE_ADDR             0x03002000
// #endif

// // -- User OBI SPI Peripheral (Engine) Register Offsets --
// #define SPI_ENGINE_REG_CTRL     0x00
// #define SPI_ENGINE_REG_STATUS   0x04
// #define SPI_ENGINE_REG_DATA_TX  0x08
// #define SPI_ENGINE_REG_CLK_DIV  0x0C

// // Engine Control Register Bits
// #define SPI_ENGINE_CTRL_ENABLE      (1 << 0)
// #define SPI_ENGINE_CTRL_START_XFER  (1 << 1)
// #define SPI_ENGINE_CTRL_CPOL        (1 << 2)
// #define SPI_ENGINE_CTRL_CPHA        (1 << 3)

// // Engine Status Register Bits
// #define SPI_ENGINE_STATUS_BUSY      (1 << 0)

// // -- User SPI Ctrl (CS/DC outputs) Register Offset & Bits --
// #define SPI_CTRL_GPIO_REG_OFFSET 0x000
// #define SPI_CTRL_GPIO_CS1_N_VAL (1 << 0) // User Pin 2 (OLED CS)
// #define SPI_CTRL_GPIO_CS2_N_VAL (1 << 1) // User Pin 4 (ACCEL CS)
// #define SPI_CTRL_GPIO_DC_VAL    (1 << 2) // User Pin 3 (OLED D/C)

// // Pin numbers driven/monitored by user_domain (as assigned in Verilog)
// #define PIN_SPI_SCK       0
// #define PIN_SPI_MOSI      1
// #define PIN_OLED_CS_N     2
// #define PIN_OLED_DC       3
// #define PIN_ACCEL_CS_N    4
// #define PIN_ACCEL_INT     5 // Input to user_domain

// // -- Xorshift PRNG Register Offsets (simple reverted version) --
// #define PRNG_CTRL_OFFSET  0x00 // Write to trigger
// #define PRNG_RDATA_OFFSET 0x04 // Read to get value

// // -- Standard GPIO Controller Register Offsets (from your gpio_reg_pkg.sv) --
// // These are BYTE offsets.
// #define STD_GPIO_DIR_BYTE_OFFSET   0x000
// #define STD_GPIO_IN_BYTE_OFFSET    0x100
// // Add others if needed from your gpio_reg_pkg.sv, e.g.:
// // #define STD_GPIO_EN_BYTE_OFFSET    0x080
// // #define STD_GPIO_OUT_BYTE_OFFSET   0x180

// // Convert to WORD offsets for use with the (volatile uint32_t*) std_gpio_ptr
// #define STD_GPIO_DIR_WORD_OFFSET   (STD_GPIO_DIR_BYTE_OFFSET / 4)   // Index 0
// #define STD_GPIO_IN_WORD_OFFSET    (STD_GPIO_IN_BYTE_OFFSET / 4)    // Index 0x40
// // #define STD_GPIO_EN_WORD_OFFSET    (STD_GPIO_EN_BYTE_OFFSET / 4)  // Index 0x20
// // #define STD_GPIO_OUT_WORD_OFFSET   (STD_GPIO_OUT_BYTE_OFFSET / 4) // Index 0x60


// // -- Volatile Pointers to Peripherals --
// volatile uint32_t* spi_engine_ptr    = (volatile uint32_t*)USER_OBI_SPI_BASE_ADDR;
// volatile uint32_t* spi_ctrl_gpio_ptr = (volatile uint32_t*)USER_SPI_CTRL_BASE_ADDR;
// volatile uint32_t* prng_ptr          = (volatile uint32_t*)USER_PRNG_BASE_ADDR;
// volatile uint8_t* font_rom_ptr      = (volatile uint8_t*)USER_FONT_ROM_BASE_ADDR;
// volatile uint32_t* std_gpio_ptr      = (volatile uint32_t*)GPIO_BASE_ADDR; // Standard GPIO

// void delay(int count) {
//     for (volatile int i = 0; i < count; i++);
// }

// // Helper function to read a specific GPIO pin via standard GPIO controller
// uint32_t read_std_gpio_pin_state(int pin_number) {
//     // To reliably read a pin that might be an output from user_domain,
//     // ensure the standard GPIO controller itself views this pin as an input.
//     // GPIO_DIR: 0 = input, 1 = output.
//     // We need to clear the bit for the pin we want to read to set it to input mode
//     // from the perspective of the standard GPIO controller.

//     uint32_t current_dir = std_gpio_ptr[STD_GPIO_DIR_WORD_OFFSET];
//     std_gpio_ptr[STD_GPIO_DIR_WORD_OFFSET] = current_dir & ~(1 << pin_number);
    
//     delay(10); // Small delay for change to propagate 

//     uint32_t gpio_values = std_gpio_ptr[STD_GPIO_IN_WORD_OFFSET];
    
//     // Optional: Restore original direction for the standard GPIO controller.
//     // For this test, it's generally okay to leave the standard GPIO's direction
//     // for these specific pins as "input" because user_domain is the primary driver for pins 0-4.
//     // std_gpio_ptr[STD_GPIO_DIR_WORD_OFFSET] = current_dir; 
    
//     return (gpio_values >> pin_number) & 0x1;
// }


// int main() {
//     uart_init();
//     printf("Comprehensive Peripheral & Pin Test (Full Version with Readback) Started...\n");
//     uart_write_flush();

//     uint32_t ctrl_engine_val, data_to_send;
//     uint32_t ctrl_gpio_val;
//     uint32_t read_val_32, read_pin_val;
//     uint8_t  read_val_8;

//     // --- Test User Font ROM (brief) ---
//     printf("\n--- Testing User Font ROM ---\n");
//     uart_write_flush();
//     int offset_val = (65 - 32) * 12; // Character 'A'
//     read_val_8 = font_rom_ptr[offset_val];
//     printf("Font ROM: First byte of 'A' (at 0x%x): 0x%x\n", offset_val, read_val_8);
//     uart_write_flush();

//     // --- Test Xorshift PRNG (simple reverted version) ---
//     printf("\n--- Testing Xorshift PRNG ---\n");
//     uart_write_flush();
//     prng_ptr[PRNG_CTRL_OFFSET / 4] = 0x1; 
//     delay(100);
//     read_val_32 = prng_ptr[PRNG_RDATA_OFFSET / 4];
//     printf("PRNG Read 1: 0x%x\n", read_val_32);
//     uart_write_flush();

//     // --- Test User SPI Ctrl & Pin Readback ---
//     printf("\n--- Testing User SPI Ctrl & Pin Readback ---\n");
//     uart_write_flush();

//     printf("Action: Set OLED_CS (pin %d) LOW, D/C (pin %d) LOW via user_spi_ctrl...\n", PIN_OLED_CS_N, PIN_OLED_DC);
//     ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; // CS1_N=0 (OLED_CS active), CS2_N=1, DC=0
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     delay(1000); 
//     read_pin_val = read_std_gpio_pin_state(PIN_OLED_CS_N);
//     printf("Readback Pin %d (OLED_CS_N): %d (Expected: 0)\n", PIN_OLED_CS_N, read_pin_val);
//     read_pin_val = read_std_gpio_pin_state(PIN_OLED_DC);
//     printf("Readback Pin %d (OLED_D/C):  %d (Expected: 0)\n", PIN_OLED_DC, read_pin_val);
//     uart_write_flush();

//     printf("Action: Set OLED_CS (pin %d) LOW, D/C (pin %d) HIGH via user_spi_ctrl...\n", PIN_OLED_CS_N, PIN_OLED_DC);
//     ctrl_gpio_val = SPI_CTRL_GPIO_DC_VAL | SPI_CTRL_GPIO_CS2_N_VAL; // CS1_N=0, CS2_N=1, DC=1
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     delay(1000);
//     read_pin_val = read_std_gpio_pin_state(PIN_OLED_CS_N);
//     printf("Readback Pin %d (OLED_CS_N): %d (Expected: 0)\n", PIN_OLED_CS_N, read_pin_val);
//     read_pin_val = read_std_gpio_pin_state(PIN_OLED_DC);
//     printf("Readback Pin %d (OLED_D/C):  %d (Expected: 1)\n", PIN_OLED_DC, read_pin_val);
//     uart_write_flush();

//     printf("Action: Set OLED_CS (pin %d) HIGH via user_spi_ctrl...\n", PIN_OLED_CS_N);
//     ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL | SPI_CTRL_GPIO_DC_VAL; // All CS/DC high
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     delay(1000);
//     read_pin_val = read_std_gpio_pin_state(PIN_OLED_CS_N);
//     printf("Readback Pin %d (OLED_CS_N): %d (Expected: 1)\n", PIN_OLED_CS_N, read_pin_val);
//     uart_write_flush();


//     // --- Test OBI SPI Peripheral (Engine) ---
//     printf("\n--- Testing OBI SPI Engine (BUSY flag primarily) ---\n");
//     uart_write_flush();
    
//     printf("Configuring SPI Engine (CPOL=1, CPHA=1, CLK_DIV=2)...\n");
//     spi_engine_ptr[SPI_ENGINE_REG_CLK_DIV / 4] = 0x02; 
//     delay(100);
//     ctrl_engine_val = SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA | SPI_ENGINE_CTRL_ENABLE;
//     spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val;
//     delay(100);
//     printf("Engine Initial CTRL_REG: 0x%x\n", (spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4]) & 0xFF);
//     uart_write_flush();

//     data_to_send = 0xAD; 
//     printf("Action: Send 0x%x via SPI. Asserting OLED_CS (pin %d). Check waveforms for SCK/MOSI (pins %d,%d).\n", 
//             data_to_send, PIN_OLED_CS_N, PIN_SPI_SCK, PIN_SPI_MOSI);
//     uart_write_flush();

//     ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; // OLED_CS_N (pin 2) low
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     delay(100);

//     spi_engine_ptr[SPI_ENGINE_REG_DATA_TX / 4] = data_to_send;
//     delay(100);
    
//     ctrl_engine_val = spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] | SPI_ENGINE_CTRL_START_XFER;
//     spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val; 
//     printf("Triggered SPI transfer. Pausing for waveform check if needed. Then polling BUSY.\n");
//     uart_write_flush();
//     delay(10000); // Pause for potential waveform observation of SCK/MOSI

//     int timeout = 0;
//     while ((spi_engine_ptr[SPI_ENGINE_REG_STATUS / 4] & SPI_ENGINE_STATUS_BUSY) && (timeout < 20000)) { 
//         delay(1); 
//         timeout++;
//     }

//     if (timeout >= 20000) { 
//         printf("TIMEOUT: Engine BUSY did not clear!\n"); 
//     } else { 
//         printf("Engine BUSY cleared. SPI transaction supposedly complete.\n"); 
//     }
//     uart_write_flush();

//     ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL | SPI_CTRL_GPIO_DC_VAL; 
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     delay(100);
//     printf("SPI Engine test section finished.\n");
//     uart_write_flush();

//     // --- Test ADXL345 Interrupt Pin (Pin 5) ---
//     printf("\n--- Testing ADXL345 Interrupt Pin (Pin %d) ---\n", PIN_ACCEL_INT);
//     uart_write_flush();
//     delay(1000); 
//     printf("Note: To see this test work, manually force chip input gpio_i[%d] in the simulation testbench.\n", PIN_ACCEL_INT);
//     read_pin_val = read_std_gpio_pin_state(PIN_ACCEL_INT);
//     printf("Readback for Pin %d (ADXL_INT): %d (Value depends on external force from testbench)\n", PIN_ACCEL_INT, read_pin_val);
//     uart_write_flush();
//     printf("Force pin %d high in simulation now if you want to see a change in next read.\n", PIN_ACCEL_INT);
//     delay(20000); 
//     read_pin_val = read_std_gpio_pin_state(PIN_ACCEL_INT);
//     printf("Readback for Pin %d (ADXL_INT): %d (Value depends on external force from testbench)\n", PIN_ACCEL_INT, read_pin_val);
//     uart_write_flush();


//     printf("\nAll Tests Finished.\n");
//     uart_write_flush();

//     return 0; // Indicate success (changed from 1 for typical C convention)
// }























//*****************




// #include "uart.h"   // For uart_init, printf, uart_write_flush
// #include "print.h"  // For printf
// #include "config.h" // For peripheral base addresses

// #ifndef USER_OBI_SPI_BASE_ADDR // For obi_spi_peripheral (engine)
// #define USER_OBI_SPI_BASE_ADDR 0x20000000
// #endif
// #ifndef USER_SPI_CTRL_BASE_ADDR // For user_spi_ctrl
// #define USER_SPI_CTRL_BASE_ADDR    0x20001000
// #endif
// #ifndef USER_PRNG_BASE_ADDR // For xorshift
// #define USER_PRNG_BASE_ADDR        0x20002000
// #endif

// #ifndef GPIO_BASE_ADDR
// #define GPIO_BASE_ADDR             0x03005000 // From croc_pkg.sv
// #endif
// #ifndef UART_BASE_ADDR
// #define UART_BASE_ADDR             0x03002000 // From croc_pkg.sv
// #endif

// // OBI SPI Peripheral (Engine) Register Offsets
// #define SPI_ENGINE_REG_CTRL     0x00
// #define SPI_ENGINE_REG_STATUS   0x04
// #define SPI_ENGINE_REG_DATA_TX  0x08
// #define SPI_ENGINE_REG_CLK_DIV  0x0C

// // Engine Control Register Bits
// #define SPI_ENGINE_CTRL_ENABLE      (1 << 0)
// #define SPI_ENGINE_CTRL_START_XFER  (1 << 1)
// #define SPI_ENGINE_CTRL_CPOL        (1 << 2)
// #define SPI_ENGINE_CTRL_CPHA        (1 << 3)

// // Engine Status Register Bits
// #define SPI_ENGINE_STATUS_BUSY      (1 << 0)

// // User SPI Ctrl Register Offset
// #define SPI_CTRL_GPIO_REG_OFFSET 0x000
// // User SPI Ctrl Register Bits
// #define SPI_CTRL_GPIO_CS1_N_VAL (1 << 0)
// #define SPI_CTRL_GPIO_CS2_N_VAL (1 << 1)
// #define SPI_CTRL_GPIO_DC_VAL    (1 << 2)

// volatile uint32_t* spi_engine_ptr    = (volatile uint32_t*)USER_OBI_SPI_BASE_ADDR;
// volatile uint32_t* spi_ctrl_gpio_ptr = (volatile uint32_t*)USER_SPI_CTRL_BASE_ADDR;
// volatile uint32_t* gpio_ptr          = (volatile uint32_t*)GPIO_BASE_ADDR;

// void delay(int count) {
//     for (volatile int i = 0; i < count; i++);
// }

// int main() {
//     uart_init();
//     printf("Refined 3-Wire SPI Test (CPOL=1, CPHA=1) Started...\n");
//     uart_write_flush();

//     uint32_t ctrl_engine_val, status_engine_val, data_to_send;
//     uint32_t ctrl_gpio_val;
//     uint32_t read_back;

//     printf("Configuring SPI Engine & CS/DC...\n");
//     uart_write_flush();

//     spi_engine_ptr[SPI_ENGINE_REG_CLK_DIV / 4] = 0x01;
//     delay(100);
//     read_back = spi_engine_ptr[SPI_ENGINE_REG_CLK_DIV / 4];
//     printf("Engine CLK_DIV read back: 0x%x (should be 0x01)\n", read_back & 0xFF);
//     uart_write_flush();

//     ctrl_engine_val = SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA;
//     spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val;
//     delay(100);
//     read_back = spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4];
//     printf("Engine Initial CTRL_REG: 0x%x (CPOL=1, CPHA=1, ENABLE=0)\n", read_back & 0xFF);
//     uart_write_flush();

//     data_to_send = 0xAD;
//     printf("Preparing to send 0x%x via SPI Engine...\n", data_to_send);
//     uart_write_flush();

//     printf("Sending first byte (e.g., command 0x%x)...\n", data_to_send);
//     ctrl_gpio_val = SPI_CTRL_GPIO_CS2_N_VAL; // CS1_N=0, CS2_N=1, DC=0 (command)
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;
//     printf("user_spi_ctrl set for command (CS1 active, DC low): 0x%x\n", ctrl_gpio_val & 0x7);
//     uart_write_flush();
//     delay(100);

//     spi_engine_ptr[SPI_ENGINE_REG_DATA_TX / 4] = data_to_send;
//     printf("Data 0x%x written to Engine TX_REG.\n", data_to_send);
//     uart_write_flush();

//     // Initiate transfer
//     printf("Polling Engine STATUS_REG for BUSY (transfer 1)...\n"); // Print before starting
//     uart_write_flush();

//     ctrl_engine_val = SPI_ENGINE_CTRL_ENABLE | SPI_ENGINE_CTRL_START_XFER | SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA;
//     spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val; // Actual OBI write to start
//     // NO uart_write_flush() here to ensure polling starts immediately

//     int timeout = 0;
//     // Poll for BUSY to go high (indicates FSM started)
//     while (!(spi_engine_ptr[SPI_ENGINE_REG_STATUS / 4] & SPI_ENGINE_STATUS_BUSY) && (timeout < 500)) {
//         delay(1); // Minimal delay for polling
//         timeout++;
//     }

//     if (timeout >= 500) {
//         printf("TIMEOUT: Engine BUSY never set for TX1!\n");
//         uart_write_flush();
//     } else {
//         printf("Engine BUSY set. Waiting for clear...\n");
//         uart_write_flush();
//         timeout = 0; // Reset timeout for waiting for clear
//         while ((spi_engine_ptr[SPI_ENGINE_REG_STATUS / 4] & SPI_ENGINE_STATUS_BUSY) && (timeout < 20000)) { // Increased timeout for BUSY clear
//             delay(1); // Minimal delay
//             timeout++;
//         }
//         if (timeout >= 20000) {
//             printf("TIMEOUT: Engine BUSY did not clear for TX1!\n");
//             uart_write_flush();
//         } else {
//             printf("\033[91mEngine BUSY cleared for TX1.\n\033[0m");
//             uart_write_flush();
//         }
//     }

//     printf("Deactivating CS via user_spi_ctrl and disabling SPI Engine...\n");
//     uart_write_flush();
//     ctrl_gpio_val = SPI_CTRL_GPIO_CS1_N_VAL | SPI_CTRL_GPIO_CS2_N_VAL; // Both CS high
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_gpio_val;

//     ctrl_engine_val = SPI_ENGINE_CTRL_CPOL | SPI_ENGINE_CTRL_CPHA; // SPI Disabled
//     spi_engine_ptr[SPI_ENGINE_REG_CTRL / 4] = ctrl_engine_val;
//     printf("SPI Engine Disabled.\n");
//     uart_write_flush();

//     printf("Refined 3-Wire SPI Test Finished.\n");
//     uart_write_flush();

//     return 1;
// }




// // Configured for CPOL=1, CPHA=1.

// #include "uart.h"   // For uart_init, printf, uart_write_flush
// #include "print.h"  // For printf
// #include "config.h" // For peripheral base addresses

// // Ensure these base addresses are correctly defined in config.h or here,
// // and match your Verilog packages.
// #ifndef USER_SPI_PERIPHERAL_BASE_ADDR // This now maps to obi_spi_peripheral
// #define USER_SPI_PERIPHERAL_BASE_ADDR 0x20000000 // From user_pkg_spi.sv (or user_pkg_refactored_all_usr.sv)
// #endif

// #ifndef USER_SPI_CTRL_BASE_ADDR // For user_spi_ctrl.sv
// #define USER_SPI_CTRL_BASE_ADDR    0x20001000
// #endif

// #ifndef USER_PRNG_BASE_ADDR // For xorshift.sv
// #define USER_PRNG_BASE_ADDR        0x20002000
// #endif


// #ifndef GPIO_BASE_ADDR
// #define GPIO_BASE_ADDR             0x03005000 // From croc_pkg.sv
// #endif

// #ifndef UART_BASE_ADDR
// #define UART_BASE_ADDR             0x03002000 // From croc_pkg.sv
// #endif

// // SPI Peripheral Register Offsets (Byte offsets from USER_SPI_PERIPHERAL_BASE_ADDR)
// #define SPI_REG_CTRL     0x00
// #define SPI_REG_STATUS   0x04
// #define SPI_REG_DATA_TX  0x08 // Now primarily a TX data register for 3-wire
// #define SPI_REG_CLK_DIV  0x0C

// // Control Register Bits for OBI SPI Peripheral (as defined in obi_spi_peripheral.sv)
// #define SPI_CTRL_ENABLE      (1 << 0)
// #define SPI_CTRL_START_XFER  (1 << 1)
// #define SPI_CTRL_CPOL        (1 << 2)
// #define SPI_CTRL_CPHA        (1 << 3)
// #define SPI_CTRL_CS_N_OBISP  (1 << 4) // CS_N bit within OBI SPI peripheral's ctrl reg
// #define SPI_CTRL_DC_VAL_OBISP (1 << 5) // D/C bit within OBI SPI peripheral's ctrl reg
// // #define SPI_CTRL_LOOPBACK    (1 << 6) // Loopback removed for 3-wire

// // Status Register Bits for OBI SPI Peripheral
// #define SPI_STATUS_BUSY      (1 << 0)
// // #define SPI_STATUS_RX_VALID  (1 << 1) // RX_VALID is now always 0 for 3-wire

// // Direct pointer access for peripherals
// volatile uint32_t* spi_engine_ptr = (volatile uint32_t*)USER_SPI_PERIPHERAL_BASE_ADDR; // For obi_spi_peripheral
// volatile uint32_t* spi_ctrl_gpio_ptr = (volatile uint32_t*)USER_SPI_CTRL_BASE_ADDR; // For user_spi_ctrl
// volatile uint32_t* gpio_ptr      = (volatile uint32_t*)GPIO_BASE_ADDR;

// // User SPI Ctrl Register Offset (from user_spi_ctrl.sv)
// #define SPI_CTRL_GPIO_REG_OFFSET 0x000
// // User SPI Ctrl Register Bits (for user_spi_ctrl.sv)
// #define SPI_CTRL_GPIO_CS1_N_BIT (1 << 0)
// #define SPI_CTRL_GPIO_CS2_N_BIT (1 << 1)
// #define SPI_CTRL_GPIO_DC_BIT    (1 << 2)


// // Simple delay function
// void delay(int count) {
//     for (volatile int i = 0; i < count; i++);
// }

// int main() {
//     uart_init();
//     printf("OBI SPI Peripheral (3-Wire) Test Started (CPOL=1, CPHA=1)...\n");
//     uart_write_flush();

//     uint32_t ctrl_val_engine, status_val_engine, data_to_send;
//     uint32_t ctrl_val_gpio;
//     uint32_t read_back;

//     // --- Configure SPI through OBI SPI Peripheral's registers ---
//     printf("Configuring OBI SPI Peripheral (Engine)...\n");
//     uart_write_flush();

//     // Set clock divider (e.g., for clk_i / 4 if clk_div_reg = 1 -> 5MHz from 20MHz)
//     spi_engine_ptr[SPI_REG_CLK_DIV / 4] = 0x01; // Divisor value
//     delay(100);
//     read_back = spi_engine_ptr[SPI_REG_CLK_DIV / 4];
//     printf("Engine CLK_DIV read back: 0x%x (should be 0x01)\n", read_back & 0xFF);
//     uart_write_flush();

//     // Initial control settings for OBI SPI Engine:
//     // SPI disabled, CPOL=1, CPHA=1. CS_N and D/C bits in this register also set.
//     // Let's set CS_N high (inactive) and D/C low (command) via engine's control reg
//     ctrl_val_engine = SPI_CTRL_CPOL | SPI_CTRL_CPHA | SPI_CTRL_CS_N_OBISP;
//     spi_engine_ptr[SPI_REG_CTRL / 4] = ctrl_val_engine;
//     delay(100);
//     read_back = spi_engine_ptr[SPI_REG_CTRL / 4];
//     printf("Engine Initial CTRL_REG: 0x%x\n", read_back & 0xFF);
//     uart_write_flush();

//     // --- Configure CS/DC via user_spi_ctrl ---
//     // Example: Select CS1 (low), set D/C to Data (high)
//     // Note: The OBI SPI Engine also has CS_N and D/C bits in its own control register.
//     // You need to decide which module has ultimate authority or how they coordinate.
//     // For this test, we'll assume user_spi_ctrl provides the main CS/DC to the pins.
//     printf("Configuring CS/DC via user_spi_ctrl...\n");
//     uart_write_flush();
//     ctrl_val_gpio = SPI_CTRL_GPIO_DC_BIT; // CS1_N=0 (active), CS2_N=1 (inactive), DC=1 (Data)
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_val_gpio;
//     delay(100);
//     read_back = spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4];
//     printf("user_spi_ctrl CTRL_REG read back: 0x%x (CS1 low, CS2 high, DC high)\n", read_back & 0x7);
//     uart_write_flush();


//     // --- Test SPI Transfer (using OBI SPI Engine) ---
//     data_to_send = 0xAD; // Data to send (ADXL345 example)
//     printf("Preparing to send 0x%x via SPI Engine...\n", data_to_send);
//     uart_write_flush();

//     // 1. Write data to Engine's TX register
//     spi_engine_ptr[SPI_REG_DATA_TX / 4] = data_to_send;
//     printf("Data 0x%x written to Engine TX_REG.\n", data_to_send);
//     uart_write_flush();

//     // 2. Configure Engine's control for transfer:
//     //    Enable SPI, CPOL=1, CPHA=1.
//     //    The CS_N and D/C bits in the *engine's* control register might also affect its internal FSM
//     //    or could be used if it were to directly drive CS/DC (which it does now).
//     //    Let's set engine's CS_N low and D/C high, then start.
//     ctrl_val_engine = SPI_CTRL_ENABLE | SPI_CTRL_START_XFER | SPI_CTRL_CPOL | SPI_CTRL_CPHA | SPI_CTRL_DC_VAL_OBISP;
//     // This makes CS_N (bit 4) = 0 (active), DC (bit 5) = 1 (Data) from engine's perspective.
//     printf("Setting Engine CTRL_REG to 0x%x to start transfer.\n", ctrl_val_engine & 0xFF);
//     uart_write_flush();
//     spi_engine_ptr[SPI_REG_CTRL / 4] = ctrl_val_engine;

//     // 3. Poll BUSY bit in Engine's Status Register
//     printf("Polling Engine STATUS_REG for BUSY bit to clear...\n");
//     uart_write_flush();
//     int timeout = 0;
//     // Wait for BUSY to be set first
//     while (!(spi_engine_ptr[SPI_REG_STATUS / 4] & SPI_STATUS_BUSY) && (timeout < 500)) {
//         delay(10); timeout++;
//     }
//     if (timeout >= 500) {
//          printf("TIMEOUT: Engine BUSY bit never set!\n");
//     } else {
//         printf("Engine BUSY bit is now set. Waiting for it to clear...\n");
//         timeout = 0; // Reset timeout
//         while ((spi_engine_ptr[SPI_REG_STATUS / 4] & SPI_STATUS_BUSY) && (timeout < 2000)) {
//             delay(10); timeout++;
//         }
//     }
//     uart_write_flush();

//     if (timeout >= 2000) {
//         printf("TIMEOUT: Engine BUSY bit did not clear!\n");
//     } else {
//         printf("Engine BUSY bit cleared.\n");
//         status_val_engine = spi_engine_ptr[SPI_REG_STATUS / 4];
//         printf("Engine Final STATUS_REG: 0x%x (BUSY=%d, RX_VALID=always 0 for 3-wire)\n",
//                status_val_engine & 0xFF, (status_val_engine & SPI_STATUS_BUSY));
//         // For 3-wire, reading data register just reads back TX register or undefined.
//         read_back = spi_engine_ptr[SPI_REG_DATA_TX / 4];
//         printf("Read from Engine DATA_TX_REG after transfer: 0x%x (originally sent 0x%x)\n", read_back & 0xFF, data_to_send);
//     }
//     uart_write_flush();

//     // 4. Deactivate CS (via user_spi_ctrl) and disable SPI Engine
//     printf("Deactivating CS via user_spi_ctrl and disabling SPI Engine...\n");
//     uart_write_flush();
//     ctrl_val_gpio = SPI_CTRL_GPIO_CS1_N_BIT | SPI_CTRL_GPIO_CS2_N_BIT; // Both CS high
//     spi_ctrl_gpio_ptr[SPI_CTRL_GPIO_REG_OFFSET / 4] = ctrl_val_gpio;

//     ctrl_val_engine = SPI_CTRL_CPOL | SPI_CTRL_CPHA | SPI_CTRL_CS_N_OBISP; // Engine CS_N high, SPI disabled
//     spi_engine_ptr[SPI_REG_CTRL / 4] = ctrl_val_engine;
//     printf("SPI Engine Disabled, CS_N High (via Engine CTRL).\n");
//     uart_write_flush();

//     printf("OBI SPI Peripheral (3-Wire) Test Finished.\n");
//     uart_write_flush();

//     return 1;
// }


// // Copyright (c) 2024 Your Name/Organization
// // Comprehensive test for user_simple_regs, user_spi_ctrl, and basic SoC functionality
// // Revised to align GPIO access with lab examples and ensure UART flushing.
// // Added tests for user_spi_ctrl.

// #include "uart.h"   // For uart_init, printf, uart_write_flush
// #include "print.h"  // For printf
// #include "config.h" // For peripheral base addresses
// #include "gpio.h"   // For GPIO register offsets like GPIO_DIR_REG_OFFSET, etc.
// #include "util.h"   // For reg8() macro

// // Ensure these base addresses are correctly defined in config.h or here,
// // and match your Verilog packages (croc_pkg.sv and user_pkg_refactored_all_usr.sv)

// #ifndef USER_SIMPLE_REGS_BASE_ADDR // This is now the OBI_SPI_ENGINE in user_pkg
// #define USER_SIMPLE_REGS_BASE_ADDR 0x20000000 // For obi_spi_peripheral (was user_simple_regs)
// #endif

// #ifndef USER_SPI_CTRL_BASE_ADDR
// #define USER_SPI_CTRL_BASE_ADDR    0x20001000 // From user_pkg_refactored_all_usr.sv
// #endif

// #ifndef USER_PRNG_BASE_ADDR
// #define USER_PRNG_BASE_ADDR        0x20002000 // From user_pkg_refactored_all_usr.sv
// #endif

// #ifndef GPIO_BASE_ADDR
// #define GPIO_BASE_ADDR             0x03005000 // From croc_pkg.sv
// #endif

// #ifndef UART_BASE_ADDR
// #define UART_BASE_ADDR             0x03002000 // From croc_pkg.sv
// #endif

// // Direct pointer access for peripherals
// volatile uint32_t* simple_regs_ptr = (volatile uint32_t*)USER_SIMPLE_REGS_BASE_ADDR; // Now points to obi_spi_peripheral
// volatile uint32_t* spi_ctrl_ptr    = (volatile uint32_t*)USER_SPI_CTRL_BASE_ADDR;
// volatile uint32_t* prng_ptr        = (volatile uint32_t*)USER_PRNG_BASE_ADDR;


// // Standard GPIO Register Offsets
// #ifndef GPIO_OUT_REG_OFFSET
// #define GPIO_OUT_REG_OFFSET 0x00
// #endif
// #ifndef GPIO_DIR_REG_OFFSET
// #define GPIO_DIR_REG_OFFSET 0x04
// #endif
// // ... (other GPIO offsets if needed) ...

// // User SPI Ctrl Register Offset (from user_spi_ctrl.sv)
// #define SPI_CTRL_REG_OFFSET 0x000
// // User SPI Ctrl Register Bits (within the LSB byte of the 32-bit word)
// #define SPI_CTRL_CS1_N_VAL (1 << 0) // Bit 0 for CS1_N output
// #define SPI_CTRL_CS2_N_VAL (1 << 1) // Bit 1 for CS2_N output
// #define SPI_CTRL_DC_VAL    (1 << 2) // Bit 2 for D/C output

// // Simple delay function
// void delay(int count) {
//     for (volatile int i = 0; i < count; i++);
// }

// int main() {
//     // Initialize UART for printing
//     uart_init();
//     printf("Comprehensive Test Started (v3 - with SPI Ctrl Test)...\n");
//     uart_write_flush();

//     // --- GPIO Test (aligned with lab's helloworld.c style) ---
//     printf("Testing GPIO...\n");
//     uart_write_flush();
//     *reg8(GPIO_BASE_ADDR, GPIO_DIR_REG_OFFSET) = 0x0F; // Set GPIO0-3 as output
//     printf("GPIO Direction set (0-3 out).\n");
//     uart_write_flush();
//     *reg8(GPIO_BASE_ADDR, GPIO_OUT_REG_OFFSET) = 0x0A; // Output 1010 to GPIO0-3
//     printf("GPIO Output set to 0x0A.\n");
//     uart_write_flush();
//     delay(200);


//     // --- User SPI Ctrl Test (D/C and CS pins) ---
//     printf("Testing User SPI Ctrl at 0x%x...\n", (uint32_t)spi_ctrl_ptr);
//     uart_write_flush();

//     uint32_t spi_ctrl_val_written;
//     uint32_t spi_ctrl_val_read;

//     // Test Case 1: CS1 active (low), CS2 inactive (high), D/C low (command)
//     spi_ctrl_val_written = SPI_CTRL_CS2_N_VAL; // CS1_N=0, CS2_N=1, D/C=0
//     printf("Writing 0x%x to spi_ctrl (CS1 active, CS2 inactive, D/C command)...\n", spi_ctrl_val_written & 0x7);
//     uart_write_flush();
//     spi_ctrl_ptr[SPI_CTRL_REG_OFFSET / 4] = spi_ctrl_val_written;
//     delay(100);
//     spi_ctrl_val_read = spi_ctrl_ptr[SPI_CTRL_REG_OFFSET / 4];
//     printf("Read back from spi_ctrl: 0x%x (expected 0x%x for lower 3 bits)\n", spi_ctrl_val_read & 0x7, spi_ctrl_val_written & 0x7);
//     uart_write_flush();
//     if ((spi_ctrl_val_read & 0x7) != (spi_ctrl_val_written & 0x7)) {
//         printf("ERROR: SPI Ctrl readback mismatch for Case 1!\n");
//         uart_write_flush();
//     }

//     // Test Case 2: CS1 inactive (high), CS2 active (low), D/C high (data)
//     spi_ctrl_val_written = SPI_CTRL_CS1_N_VAL | SPI_CTRL_DC_VAL; // CS1_N=1, CS2_N=0, D/C=1
//     printf("Writing 0x%x to spi_ctrl (CS1 inactive, CS2 active, D/C data)...\n", spi_ctrl_val_written & 0x7);
//     uart_write_flush();
//     spi_ctrl_ptr[SPI_CTRL_REG_OFFSET / 4] = spi_ctrl_val_written;
//     delay(100);
//     spi_ctrl_val_read = spi_ctrl_ptr[SPI_CTRL_REG_OFFSET / 4];
//     printf("Read back from spi_ctrl: 0x%x (expected 0x%x for lower 3 bits)\n", spi_ctrl_val_read & 0x7, spi_ctrl_val_written & 0x7);
//     uart_write_flush();
//     if ((spi_ctrl_val_read & 0x7) != (spi_ctrl_val_written & 0x7)) {
//         printf("ERROR: SPI Ctrl readback mismatch for Case 2!\n");
//         uart_write_flush();
//     }

//     // Test Case 3: Both CS inactive, D/C low
//     spi_ctrl_val_written = SPI_CTRL_CS1_N_VAL | SPI_CTRL_CS2_N_VAL; // CS1_N=1, CS2_N=1, D/C=0
//     printf("Writing 0x%x to spi_ctrl (Both CS inactive, D/C command)...\n", spi_ctrl_val_written & 0x7);
//     uart_write_flush();
//     spi_ctrl_ptr[SPI_CTRL_REG_OFFSET / 4] = spi_ctrl_val_written;
//     delay(100);
//     spi_ctrl_val_read = spi_ctrl_ptr[SPI_CTRL_REG_OFFSET / 4];
//     printf("Read back from spi_ctrl: 0x%x (expected 0x%x for lower 3 bits)\n", spi_ctrl_val_read & 0x7, spi_ctrl_val_written & 0x7);
//     uart_write_flush();
//     if ((spi_ctrl_val_read & 0x7) != (spi_ctrl_val_written & 0x7)) {
//         printf("ERROR: SPI Ctrl readback mismatch for Case 3!\n");
//         uart_write_flush();
//     }


//     // --- User Simple Registers Test (Now points to obi_spi_peripheral) ---
//     // Note: USER_SIMPLE_REGS_BASE_ADDR (0x20000000) now maps to obi_spi_peripheral
//     // We will test its registers.
//     printf("Testing OBI SPI Peripheral (Engine) Registers at 0x%x...\n", (uint32_t)simple_regs_ptr);
//     uart_write_flush();

//     uint32_t read_val;
//     uint32_t expected_val;

//     // Test 1: Write and Read TX_DATA register (offset 0x004 in obi_spi_peripheral)
//     expected_val = 0xAB; // Example data
//     printf("Writing 0x%x to OBI_SPI TX_DATA REG (offset 0x4)...\n", expected_val);
//     uart_write_flush();
//     simple_regs_ptr[0x004 / 4] = expected_val; // Assuming word access
//     delay(100);
//     read_val = simple_regs_ptr[0x004 / 4]; // Reads RX_DATA part of that register
//     printf("Read back from OBI_SPI DATA_REG (RX): 0x%x (TX was 0x%x)\n", read_val & 0xFF, expected_val & 0xFF);
//     uart_write_flush();
//     // Note: Read back might not be TX data unless loopback is enabled or FSM writes it back.
//     // For now, just confirm OBI access doesn't hang.

//     // Test 2: Write and Read CTRL register (offset 0x000 in obi_spi_peripheral)
//     expected_val = 0x10; // Example: CS_N high, SPI Enable
//     printf("Writing 0x%x to OBI_SPI CTRL_REG (offset 0x0)...\n", expected_val);
//     uart_write_flush();
//     simple_regs_ptr[0x000 / 4] = expected_val;
//     delay(100);
//     read_val = simple_regs_ptr[0x000 / 4];
//     printf("Read back from OBI_SPI CTRL_REG: 0x%x (expected 0x%x)\n", read_val & 0xFF, expected_val & 0xFF);
//     uart_write_flush();
//     if ((read_val & 0xFF) != (expected_val & 0xFF)) {
//         printf("ERROR: OBI_SPI CTRL_REG readback mismatch!\n");
//         uart_write_flush();
//     }


//     // --- Final GPIO Operation ---
//     printf("Performing final GPIO write (0xCAFEFEED)...\n");
//     uart_write_flush();
//     *reg8(GPIO_BASE_ADDR, GPIO_OUT_REG_OFFSET) = 0xED; // Write LSB of 0xCAFEFEED

//     printf("Comprehensive Test Finished Successfully!\n");
//     uart_write_flush();

//     return 1; // Indicate successful completion
// }




// #include "uart.h"
// #include "print.h"
// #include "config.h" // Should define base addresses

// // Ensure these match your user_pkg_refactored_all_usr.sv
// #ifndef USER_OBI_SPI_BASE_ADDR
// #define USER_OBI_SPI_BASE_ADDR  0x20000000
// #endif
// #ifndef USER_SPI_CTRL_BASE_ADDR
// #define USER_SPI_CTRL_BASE_ADDR 0x20001000
// #endif
// #ifndef USER_PRNG_BASE_ADDR
// #define USER_PRNG_BASE_ADDR     0x20002000
// #endif

// #ifndef GPIO_BASE_ADDR
// #define GPIO_BASE_ADDR          0x03005000
// #endif

// // OBI SPI Peripheral Register Offsets (from your obi_spi_peripheral.sv)
// #define OBI_SPI_CTRL_OFFSET   0x000
// #define OBI_SPI_TX_OFFSET     0x004
// #define OBI_SPI_STATUS_OFFSET 0x008

// // User SPI Ctrl Register Offset (from your user_spi_ctrl.sv)
// #define SPI_CTRL_GPIO_CTRL_OFFSET 0x000
// // User SPI Ctrl Register Bits
// #define SPI_CTRL_CS1_N_BIT (1 << 0)
// #define SPI_CTRL_CS2_N_BIT (1 << 1)
// #define SPI_CTRL_DC_BIT    (1 << 2)

// // Xorshift PRNG Register Offsets (from your xorshift.sv)
// #define PRNG_CTRL_OFFSET  0x00 // Write to trigger
// #define PRNG_RDATA_OFFSET 0x04 // Read to get value

// volatile uint32_t* obi_spi_ptr  = (volatile uint32_t*)USER_OBI_SPI_BASE_ADDR;
// volatile uint32_t* spi_ctrl_ptr = (volatile uint32_t*)USER_SPI_CTRL_BASE_ADDR;
// volatile uint32_t* prng_ptr     = (volatile uint32_t*)USER_PRNG_BASE_ADDR;
// volatile uint32_t* gpio_ptr     = (volatile uint32_t*)GPIO_BASE_ADDR;

// void delay(int count) {
//     for (volatile int i = 0; i < count; i++);
// }

// int main() {
//     uart_init();
//     printf("Testing Refactored User Peripherals...\n");
//     uart_write_flush();

//     uint32_t read_val;

//     // --- Test GPIO to ensure basic system is up ---
//     printf("Testing GPIO write...\n");
//     uart_write_flush();
//     gpio_ptr[0] = 0x12345678;
//     printf("GPIO write done (0x12345678).\n");
//     uart_write_flush();

//     // --- Test user_spi_ctrl ---
//     printf("Testing User SPI Ctrl...\n");
//     uart_write_flush();
//     // Set CS1 low, CS2 high, DC high (Data)
//     uint32_t spi_ctrl_val = SPI_CTRL_DC_BIT; // CS1=0 (active by default), CS2=1 (inactive by default), DC=1
//     spi_ctrl_ptr[SPI_CTRL_GPIO_CTRL_OFFSET / 4] = spi_ctrl_val;
//     printf("Wrote 0x%x to SPI_CTRL_GPIO_CTRL_OFFSET.\n", spi_ctrl_val);
//     uart_write_flush();
//     delay(100);
//     read_val = spi_ctrl_ptr[SPI_CTRL_GPIO_CTRL_OFFSET / 4];
//     printf("Read back from SPI_CTRL_GPIO_CTRL_OFFSET: 0x%x (expected 0x%x)\n", read_val & 0x7, spi_ctrl_val & 0x7);
//     uart_write_flush();

//     // --- Test obi_spi_peripheral ---
//     printf("Testing OBI SPI Peripheral (Engine)...\n");
//     uart_write_flush();
//     // Write to TX data register
//     obi_spi_ptr[OBI_SPI_TX_OFFSET / 4] = 0xAA;
//     printf("Wrote 0xAA to OBI_SPI_TX_OFFSET.\n");
//     uart_write_flush();
//     // Write to CTRL register (e.g., to trigger start - bit 0)
//     obi_spi_ptr[OBI_SPI_CTRL_OFFSET / 4] = 0x01; // Assuming bit 0 is START
//     printf("Wrote 0x01 to OBI_SPI_CTRL_OFFSET.\n");
//     uart_write_flush();
//     delay(100);
//     // Read STATUS register
//     read_val = obi_spi_ptr[OBI_SPI_STATUS_OFFSET / 4];
//     printf("Read from OBI_SPI_STATUS_OFFSET: 0x%x\n", read_val);
//     uart_write_flush();

//     // --- Test Xorshift PRNG ---
//     printf("Testing Xorshift PRNG...\n");
//     uart_write_flush();
//     // Trigger PRNG update (write anything to control offset)
//     prng_ptr[PRNG_CTRL_OFFSET / 4] = 0x1;
//     printf("Triggered PRNG update.\n");
//     uart_write_flush();
//     delay(100);
//     read_val = prng_ptr[PRNG_RDATA_OFFSET / 4];
//     printf("Read from PRNG_RDATA_OFFSET (1st): 0x%x\n", read_val);
//     uart_write_flush();
//     // Trigger again
//     prng_ptr[PRNG_CTRL_OFFSET / 4] = 0x1;
//     delay(100);
//     read_val = prng_ptr[PRNG_RDATA_OFFSET / 4];
//     printf("Read from PRNG_RDATA_OFFSET (2nd): 0x%x\n", read_val);
//     uart_write_flush();

//     printf("Refactored Peripherals Test Finished.\n");
//     uart_write_flush();

//     return 1;
// }





// // Copyright (c) 2024 Your Name/Organization
// // Basic test for obi_spi_peripheral registers

// #include "uart.h"   // For uart_init, printf, uart_write_flush
// #include "print.h"  // For printf
// #include "config.h" // For peripheral base addresses

// // Ensure these base addresses are correctly defined in config.h or here,
// // and match your Verilog packages.
// #ifndef USER_SPI_PERIPHERAL_BASE_ADDR
// #define USER_SPI_PERIPHERAL_BASE_ADDR 0x20000000 // From user_pkg_spi.sv
// #endif

// #ifndef GPIO_BASE_ADDR
// #define GPIO_BASE_ADDR             0x03005000 // From croc_pkg.sv
// #endif

// #ifndef UART_BASE_ADDR
// #define UART_BASE_ADDR             0x03002000 // From croc_pkg.sv
// #endif

// // SPI Register Offsets (Byte offsets)
// #define SPI_REG_CTRL     0x00
// #define SPI_REG_STATUS   0x04
// #define SPI_REG_DATA     0x08
// #define SPI_REG_CLK_DIV  0x0C

// // Direct pointer access for peripherals
// volatile uint32_t* spi_ptr  = (volatile uint32_t*)USER_SPI_PERIPHERAL_BASE_ADDR;
// volatile uint32_t* gpio_ptr = (volatile uint32_t*)GPIO_BASE_ADDR;

// int main() {
//     uart_init();
//     printf("OBI SPI Peripheral Register Test Started...\n");
//     uart_write_flush();

//     uint32_t ctrl_val, status_val, data_val, clk_div_val;
//     uint32_t read_back;

//     // --- Test GPIO to ensure basic system is up ---
//     printf("Testing GPIO write...\n");
//     uart_write_flush();
//     *gpio_ptr = 0x11223344; // Write to GPIO output register (offset 0)
//     printf("GPIO write done.\n");
//     uart_write_flush();

//     // --- Test SPI Clock Divider Register ---
//     clk_div_val = 0x03; // Example: for SysClk / (2*(3+1)) = SysClk/8
//     printf("Writing 0x%x to SPI CLK_DIV_REG (Offset 0x%x)...\n", clk_div_val, SPI_REG_CLK_DIV);
//     uart_write_flush();
//     spi_ptr[SPI_REG_CLK_DIV / 4] = clk_div_val; // Assuming word access

//     for (volatile int i = 0; i < 100; i++); // Delay

//     read_back = spi_ptr[SPI_REG_CLK_DIV / 4];
//     printf("Read back from SPI CLK_DIV_REG: 0x%x (expected 0x%x)\n", read_back & 0xFF, clk_div_val);
//     uart_write_flush();
//     if ((read_back & 0xFF) != clk_div_val) {
//         printf("ERROR: CLK_DIV_REG mismatch!\n");
//         uart_write_flush();
//     }

//     // --- Test SPI Control Register ---
//     // Enable, CPOL=0, CPHA=0, CS_N=1 (inactive)
//     ctrl_val = 0x01 | (1 << 4); // ENABLE bit 0, CS_N bit 4
//     printf("Writing 0x%x to SPI CTRL_REG (Offset 0x%x)...\n", ctrl_val, SPI_REG_CTRL);
//     uart_write_flush();
//     spi_ptr[SPI_REG_CTRL / 4] = ctrl_val;

//     for (volatile int i = 0; i < 100; i++);

//     read_back = spi_ptr[SPI_REG_CTRL / 4];
//     printf("Read back from SPI CTRL_REG: 0x%x (expected 0x%x)\n", read_back & 0xFF, ctrl_val);
//     uart_write_flush();
//     if ((read_back & 0xFF) != ctrl_val) {
//         printf("ERROR: CTRL_REG mismatch!\n");
//         uart_write_flush();
//     }

//     // --- Test SPI Data Register (Write TX, Read RX - RX will be dummy for now) ---
//     data_val = 0xA5;
//     printf("Writing 0x%x to SPI DATA_REG (Offset 0x%x)...\n", data_val, SPI_REG_DATA);
//     uart_write_flush();
//     spi_ptr[SPI_REG_DATA / 4] = data_val;

//     for (volatile int i = 0; i < 100; i++);

//     read_back = spi_ptr[SPI_REG_DATA / 4]; // Read RX data (will be 0 or garbage without SPI FSM)
//     printf("Read back from SPI DATA_REG (RX): 0x%x (TX was 0x%x)\n", read_back & 0xFF, data_val);
//     uart_write_flush();

//     // --- Read SPI Status Register ---
//     printf("Reading SPI STATUS_REG (Offset 0x%x)...\n", SPI_REG_STATUS);
//     uart_write_flush();
//     status_val = spi_ptr[SPI_REG_STATUS / 4];
//     printf("Read from SPI STATUS_REG: 0x%x (BUSY=%d, RX_VALID=%d)\n",
//            status_val & 0xFF,
//            (status_val & 0x01),      // BUSY bit
//            (status_val & 0x02) >> 1  // RX_VALID bit
//            );
//     uart_write_flush();

//     // --- Example: Initiate a dummy transfer (if SPI FSM were present) ---
//     // ctrl_val = (1 << 0) | (1 << 1) | (0 << 4) ; // ENABLE, START_XFER, CS_N=0
//     // printf("Writing 0x%x to SPI CTRL_REG (to start transfer)...\n", ctrl_val);
//     // uart_write_flush();
//     // spi_ptr[SPI_REG_CTRL / 4] = ctrl_val;
//     //
//     // // Poll status register (example, would need more robust polling)
//     // printf("Polling STATUS_REG for BUSY bit to clear...\n");
//     // uart_write_flush();
//     // while(spi_ptr[SPI_REG_STATUS / 4] & 0x01) {
//     //     // Loop while BUSY
//     //     for (volatile int i = 0; i < 50; i++);
//     // }
//     // printf("SPI transfer potentially complete (BUSY is clear).\n");
//     // uart_write_flush();
//     //
//     // status_val = spi_ptr[SPI_REG_STATUS / 4];
//     // if (status_val & 0x02) { // Check RX_VALID
//     //    read_back = spi_ptr[SPI_REG_DATA / 4];
//     //    printf("Data received after transfer: 0x%x\n", read_back & 0xFF);
//     //    uart_write_flush();
//     // } else {
//     //    printf("No new data in RX buffer after transfer (RX_VALID not set).\n");
//     //    uart_write_flush();
//     // }


//     printf("OBI SPI Peripheral Register Test Finished.\n");
//     uart_write_flush();

//     return 1;
// }



















// // Copyright (c) 2024 ETH Zurich and University of Bologna.
// // Licensed under the Apache License, Version 2.0, see LICENSE for details.
// // SPDX-License-Identifier: Apache-2.0/
// //
// // Authors:
// // - Philippe Sauter <phsauter@iis.ee.ethz.ch>

// #include "uart.h"
// #include "print.h"
// #include "timer.h"
// #include "gpio.h"
// #include "util.h"

// #define USER_SIMPLE_REGS_ADDR 0x20001000


// volatile uint32_t* simple_regs = (uint32_t*)USER_SIMPLE_REGS_ADDR;

// /// @brief Example integer square root
// /// @return integer square root of n
// uint32_t isqrt(uint32_t n) {
//     uint32_t res = 0;
//     uint32_t bit = (uint32_t)1 << 30;

//     while (bit > n) bit >>= 2;

//     while (bit) {
//         if (n >= res + bit) {
//             n -= res + bit;
//             res = (res >> 1) + bit;
//         } else {
//             res >>= 1;
//         }
//         bit >>= 2;
//     }
//     return res;
// }

// int main() {
//     uart_init(); // setup the uart peripheral

//     // simple printf support (only prints text and hex numbers)
//     printf("Hello World!\n");
//     // wait until uart has finished sending
//     uart_write_flush();

//         // Now try to write to simple_regs
//     //simple_regs[0] = 0xDEADBEEF;

//     // toggling some GPIOs
//     gpio_set_direction(0xFFFF, 0x000F); // lowest four as outputs
//     gpio_write(0x0A);  // ready output pattern
//     gpio_enable(0xFF); // enable lowest eight
//     // wait a few cycles to give GPIO signal time to propagate
//     asm volatile ("nop; nop; nop; nop; nop;");
//     printf("GPIO (expect 0xA0): 0x%x\n", gpio_read());

//     gpio_toggle(0x0F); // toggle lower 8 GPIOs
//     asm volatile ("nop; nop; nop; nop; nop;");
//     printf("GPIO (expect 0x50): 0x%x\n", gpio_read());
//     uart_write_flush();

//     // doing some compute
//     uint32_t start = get_mcycle();
//     uint32_t res   = isqrt(1234567890UL);
//     uint32_t end   = get_mcycle();
//     printf("Result: 0x%x, Cycles: 0x%x\n", res, end - start);
//     uart_write_flush();

//     // using the timer
//     printf("Tick\n");
//     sleep_ms(10);
//     printf("Tock\n");
//     uart_write_flush();
//     return 1;
// }

// Copyright (c) 2024 Your Name/Organization
// Comprehensive test for user_simple_regs and basic SoC functionality
// Revised to align GPIO access with lab examples and ensure UART flushing.

// #include "uart.h"   // For uart_init, printf, uart_write_flush
// #include "print.h"  // For printf
// #include "config.h" // For peripheral base addresses
// #include "gpio.h"   // For GPIO register offsets like GPIO_DIR_REG_OFFSET, etc.
// #include "util.h"   // For reg8() macro

// // Ensure these base addresses are correctly defined in config.h or here,
// // and match your Verilog packages (croc_pkg.sv and user_pkg_minimal_ex3.sv)
// #ifndef USER_SIMPLE_REGS_BASE_ADDR
// #define USER_SIMPLE_REGS_BASE_ADDR 0x20000000 // From user_pkg_minimal_ex3.sv
// #endif

// #ifndef GPIO_BASE_ADDR
// #define GPIO_BASE_ADDR             0x03005000 // From croc_pkg.sv
// #endif

// #ifndef UART_BASE_ADDR
// #define UART_BASE_ADDR             0x03002000 // From croc_pkg.sv
// #endif

// // Direct pointer access for simple_regs (which is a single 32-bit word array for this test)
// volatile uint32_t* simple_regs_ptr = (volatile uint32_t*)USER_SIMPLE_REGS_BASE_ADDR;

// // Standard GPIO Register Offsets (ensure these are defined, typically in gpio.h or similar)
// // These are common byte offsets.
// #ifndef GPIO_OUT_REG_OFFSET
// #define GPIO_OUT_REG_OFFSET 0x00
// #endif
// #ifndef GPIO_DIR_REG_OFFSET
// #define GPIO_DIR_REG_OFFSET 0x04
// #endif
// #ifndef GPIO_IN_REG_OFFSET
// #define GPIO_IN_REG_OFFSET  0x08
// #endif
// #ifndef GPIO_EN_REG_OFFSET // May not be standard, but was in lab example
// #define GPIO_EN_REG_OFFSET  0x0C // Example offset, adjust if different
// #endif
// #ifndef GPIO_TOGGLE_REG_OFFSET // May not be standard, but was in lab example
// #define GPIO_TOGGLE_REG_OFFSET 0x10 // Example offset, adjust if different
// #endif


// int main() {
//     // Initialize UART for printing
//     uart_init();
//     printf("Comprehensive Test Started (v2)...\n");
//     uart_write_flush();

//     // --- GPIO Test (aligned with lab's helloworld.c style) ---
//     printf("Testing GPIO...\n");
//     uart_write_flush();

//     // Set lowest four GPIOs as outputs, next four as inputs
//     *reg8(GPIO_BASE_ADDR, GPIO_DIR_REG_OFFSET) = 0x0F;
//     printf("GPIO Direction set (0-3 out, 4-7 in).\n");
//     uart_write_flush();

//     // Write a pattern to GPIO outputs
//     *reg8(GPIO_BASE_ADDR, GPIO_OUT_REG_OFFSET) = 0x0A; // Output 1010 to GPIO0-3
//     printf("GPIO Output set to 0x0A.\n");
//     uart_write_flush();

//     // Enable GPIOs (if an enable register exists and is used like in the lab example)
//     // *reg8(GPIO_BASE_ADDR, GPIO_EN_REG_OFFSET)  = 0xFF; // Enable lowest eight
//     // printf("GPIOs enabled.\n");
//     // uart_write_flush();

//     // Short delay for signals to propagate
//     for (volatile int i = 0; i < 200; i++); // Simple delay, slightly longer

//     // Read GPIO input (value depends on external connections or internal loopback if any)
//     // uint8_t gpio_in_val = *reg8(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET);
//     // printf("GPIO Input Value: 0x%x\n", gpio_in_val); // %x prints uint, cast if needed
//     // uart_write_flush();

//     // Toggle GPIOs (if a toggle register exists like in the lab example)
//     // *reg8(GPIO_BASE_ADDR, GPIO_TOGGLE_REG_OFFSET) = 0x0F; // Toggle lowest four
//     // printf("GPIOs toggled.\n");
//     // uart_write_flush();

//     // for (volatile int i = 0; i < 200; i++); // Simple delay

//     // gpio_in_val = *reg8(GPIO_BASE_ADDR, GPIO_IN_REG_OFFSET);
//     // printf("GPIO Input Value after toggle: 0x%x\n", gpio_in_val);
//     // uart_write_flush();


//     // --- User Simple Registers Test ---
//     printf("Testing User Simple Registers at 0x%x...\n", (uint32_t)simple_regs_ptr);
//     uart_write_flush();

//     uint32_t read_val;
//     uint32_t expected_val;

//     // Test 1: Write and Read
//     expected_val = 0xDEADBEEF;
//     printf("Writing 0x%x to simple_regs[0]...\n", expected_val);
//     uart_write_flush();
//     simple_regs_ptr[0] = expected_val;
//     // uart_write_flush(); // Flush after write, before read, to see if write completes

//     for (volatile int i = 0; i < 100; i++); // Short delay

//     read_val = simple_regs_ptr[0];
//     printf("Read back from simple_regs[0]: 0x%x (expected 0x%x)\n", read_val, expected_val);
//     uart_write_flush();
//     if (read_val != expected_val) {
//         printf("ERROR: Read value mismatch for 0x%x!\n", expected_val);
//         uart_write_flush();
//     }

//     // Test 2: Write another value and Read
//     expected_val = 0x12345678;
//     printf("Writing 0x%x to simple_regs[0]...\n", expected_val);
//     uart_write_flush();
//     simple_regs_ptr[0] = expected_val;
//     // uart_write_flush();

//     for (volatile int i = 0; i < 100; i++); // Short delay

//     read_val = simple_regs_ptr[0];
//     printf("Read back from simple_regs[0]: 0x%x (expected 0x%x)\n", read_val, expected_val);
//     uart_write_flush();
//     if (read_val != expected_val) {
//         printf("ERROR: Read value mismatch for 0x%x!\n", expected_val);
//         uart_write_flush();
//     }

//     // Test 3: Write zero and Read
//     expected_val = 0x00000000;
//     printf("Writing 0x%x to simple_regs[0]...\n", expected_val);
//     uart_write_flush();
//     simple_regs_ptr[0] = expected_val;
//     // uart_write_flush();

//     for (volatile int i = 0; i < 100; i++); // Short delay

//     read_val = simple_regs_ptr[0];
//     printf("Read back from simple_regs[0]: 0x%x (expected 0x%x)\n", read_val, expected_val);
//     uart_write_flush();
//     if (read_val != expected_val) {
//         printf("ERROR: Read value mismatch for 0x%x!\n", expected_val);
//         uart_write_flush();
//     }

//     // --- Final GPIO Operation ---
//     printf("Performing final GPIO write (0xCAFEFEED)...\n");
//     uart_write_flush();
//     *reg8(GPIO_BASE_ADDR, GPIO_OUT_REG_OFFSET) = 0xED; // Write LSB of 0xCAFEFEED
//     // For full 32-bit write if GPIO_OUT_REG_OFFSET is for word:
//     // *(volatile uint32_t*)(GPIO_BASE_ADDR + GPIO_OUT_REG_OFFSET) = 0xCAFEFEED;


//     printf("Comprehensive Test Finished Successfully!\n");
//     uart_write_flush();

//     return 1; // Indicate successful completion
// }
