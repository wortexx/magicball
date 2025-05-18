#include "uart.h"
#include "print.h"
#include "config.h" // For UART_BASE_ADDR

#define USER_SIMPLE_REGS_ADDR 0x20001000
#define GPIO_ADDR             0x03005000
#define UART_ADDR             0x03002000

volatile uint32_t* simple_regs = (uint32_t*)USER_SIMPLE_REGS_ADDR;
volatile uint32_t* gpio = (uint32_t*)GPIO_ADDR;
volatile uint32_t* uart = (uint32_t*)UART_ADDR;

int main() {
    // Attempt to write to UART first
  //  uart[0] = 'A';

    // Write to GPIO second — should succeed
    gpio[0] = 0xABCD1234;

    // Now try to write to simple_regs
    simple_regs[0] = 0xDEADBEEF;

    // Dummy read is now commented out
    // volatile uint32_t val = simple_regs[0];

    // Signal success or progress by writing 'B' to UART
   // uart[0] = 'B';
    gpio[0] = 0xABCD1235;

    // End of program
    return 0;
}
// #include "uart.h"
// #include "print.h"
// #include "timer.h"
// #include "gpio.h"
// #include "util.h" // For get_mcycle, sleep_ms

// // --- Define memory-mapped addresses for User Domain peripherals ---
// // These should match your user_pkg.sv

// // Base addresses (ensure these are the final values from your user_pkg.sv)
// #define USER_SPI_ENGINE_BASE_ADDR   0x20001000UL
// #define USER_SPI_CTRL_BASE_ADDR     0x20002000UL
// #define USER_FONT_ROM_BASE_ADDR     0x20003000UL
// #define USER_PRNG_BASE_ADDR         0x20004000UL

// // SPI Engine Register Offsets (ensure these match obi_spi_peripheral.sv)
// #define SPI_ENGINE_CTRL_REG_OFFSET   0x000
// #define SPI_ENGINE_TX_REG_OFFSET     0x004
// #define SPI_ENGINE_STATUS_REG_OFFSET 0x008

// // SPI Control Register Offset (ensure this matches user_spi_ctrl.sv)
// #define SPI_HWCTRL_GPIO_OFFSET       0x000

// // PRNG Register Offsets (ensure these match your OBI-enabled xorshift.sv)
// #define PRNG_CTRL_REG_OFFSET         0x000
// #define PRNG_RDATA_REG_OFFSET        0x004

// // Absolute Addresses
// #define SPI_ENGINE_CTRL_ADDR   (USER_SPI_ENGINE_BASE_ADDR + SPI_ENGINE_CTRL_REG_OFFSET)
// #define SPI_ENGINE_TX_ADDR     (USER_SPI_ENGINE_BASE_ADDR + SPI_ENGINE_TX_REG_OFFSET)
// #define SPI_ENGINE_STATUS_ADDR (USER_SPI_ENGINE_BASE_ADDR + SPI_ENGINE_STATUS_REG_OFFSET)

// #define SPI_HWCTRL_GPIO_ADDR   (USER_SPI_CTRL_BASE_ADDR + SPI_HWCTRL_GPIO_OFFSET)

// #define PRNG_CTRL_ADDR         (USER_PRNG_BASE_ADDR + PRNG_CTRL_REG_OFFSET)
// #define PRNG_RDATA_ADDR        (USER_PRNG_BASE_ADDR + PRNG_RDATA_REG_OFFSET)

// // Helper macros for memory-mapped register access
// #define REG32(addr) ((volatile uint32_t *)(addr))

// // --- Helper functions for custom peripherals ---

// void set_spi_cs_dc(int cs1_active, int cs2_active, int dc_is_data) {
//     uint32_t ctrl_val = 0;
//     // CS1_N is bit 0, CS2_N is bit 1, DC is bit 2 in user_spi_ctrl.sv
//     // These are active LOW.
//     if (cs1_active) { ctrl_val &= ~(1 << 0); } else { ctrl_val |= (1 << 0); }
//     if (cs2_active) { ctrl_val &= ~(1 << 1); } else { ctrl_val |= (1 << 1); }
//     if (dc_is_data) { ctrl_val |= (1 << 2);  } else { ctrl_val &= ~(1 << 2); }
    
//     *REG32(SPI_HWCTRL_GPIO_ADDR) = ctrl_val;
//     (void)*REG32(SPI_HWCTRL_GPIO_ADDR); // Dummy read
// }

// void spi_engine_write_tx_data(uint8_t data) {
//     *REG32(SPI_ENGINE_TX_ADDR) = (uint32_t)data; 
// }

// void spi_engine_start_transfer() {
//     *REG32(SPI_ENGINE_CTRL_ADDR) = 0x1; 
// }

// uint32_t spi_engine_read_status() {
//     return *REG32(SPI_ENGINE_STATUS_ADDR);
// }

// void wait_spi_engine_idle() {
//     uint32_t status;
//     int timeout = 0;
//     do {
//         status = spi_engine_read_status();
//         if (timeout++ > 2000000) { // Increased timeout further
//             printf("SPI_ENG: Timeout waiting for idle! Status=0x%x\n", status);
//             uart_write_flush();
//             return; // Exit if timeout
//         }
//     } while ((status & 0x1) != 0); // while busy bit (LSB) is set
// }

// void send_spi_byte_user_domain(int cs_idx, int is_data, uint8_t byte_val) {
//     printf("SPI_SEND: CS%d, DC=%s, Data=0x%x\n", cs_idx, is_data ? "Data" : "Cmd", byte_val);
//     uart_write_flush();

//     if (cs_idx == 1) { set_spi_cs_dc(1, 0, is_data); } 
//     else if (cs_idx == 2) { set_spi_cs_dc(0, 1, is_data); } 
//     else { /* ... error handling ... */ return; }

//     wait_spi_engine_idle();
//     spi_engine_write_tx_data(byte_val);
//     spi_engine_start_transfer();
//     wait_spi_engine_idle();

//     set_spi_cs_dc(0, 0, 0); 
//     printf("SPI_SEND: Done.\n"); uart_write_flush();
// }

// uint8_t read_font_rom_byte(uint32_t offset) {
//     uint32_t addr = USER_FONT_ROM_BASE_ADDR + offset;
//     uint8_t data = (uint8_t)(*REG32(addr) & 0xFF); 
//     printf("FONT_ROM: Read 0x%x from offset 0x%x (addr 0x%x)\n", data, offset, addr);
//     uart_write_flush();
//     return data;
// }

// void trigger_prng() {
//     *REG32(PRNG_CTRL_ADDR) = 0x1; 
// }

// uint32_t read_prng_value() {
//     return *REG32(PRNG_RDATA_ADDR);
// }

// uint32_t isqrt(uint32_t n) { /* ... (original isqrt code) ... */ 
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
//     uart_init();
//     printf("Hello World! Starting User Domain & SoC Tests (with 'Attempt 10' OBI Demux logic)...\n");
//     uart_write_flush();

//     printf("\n--- Testing SPI Peripherals ---\n");
//     printf("Sending cmd 0xAE to SSD1331 (CS1)...\n");
//     send_spi_byte_user_domain(1, 0, 0xAE); 
//     sleep_ms(1); 
//     printf("Sending cmd 0xAF to SSD1331 (CS1)...\n");
//     send_spi_byte_user_domain(1, 0, 0xAF); 
//     sleep_ms(1); 

//     printf("Sending cmd 0x2D to ADXL345 (CS2)...\n");
//     send_spi_byte_user_domain(2, 0, 0x2D); 
//     sleep_ms(1);
//     printf("Sending data 0x08 to ADXL345 (CS2)...\n");
//     send_spi_byte_user_domain(2, 0, 0x08); 
//     uart_write_flush();

//     printf("\n--- Testing Font ROM ---\n");
//     uint8_t font_byte1 = read_font_rom_byte(0x00); 
//     uint8_t font_byte2 = read_font_rom_byte(0x0C); 
//     uint8_t font_byte3 = read_font_rom_byte(0x473); 
//     printf("Font ROM check done. font_byte3=0x%x\n", font_byte3); // Print one for verification
//     uart_write_flush();

//     printf("\n--- Testing PRNG ---\n");
//     uint32_t prn_val1, prn_val2, prn_val3;
//     prn_val1 = read_prng_value(); 
//     trigger_prng();
//     sleep_ms(1); 
//     prn_val2 = read_prng_value();
//     trigger_prng();
//     sleep_ms(1);
//     prn_val3 = read_prng_value();
//     printf("PRNG sequence: 0x%x -> 0x%x -> 0x%x\n", prn_val1, prn_val2, prn_val3);
//     if (prn_val1 == prn_val2 && prn_val2 == prn_val3 && prn_val1 != 0 && prn_val1 != 0xFFFFFFFF) {
//         printf("WARNING: PRNG value seems stuck!\n");
//     }
//     uart_write_flush();

//     printf("\n--- Running Original helloworld.c GPIO/Compute/Timer Tests ---\n");
//     gpio_set_direction(0x0000FFFF, 0x000F); 
//     gpio_write(0x0A);  
//     gpio_enable(0x0F); 
//     for (volatile int i = 0; i < 100; ++i) { asm volatile ("nop"); }
//     printf("GPIO (expect 0xA0): 0x%x\n", gpio_read() & 0xFF ); // Mask to see lower 8 bits
//     gpio_toggle(0x000F); 
//     for (volatile int i = 0; i < 100; ++i) { asm volatile ("nop"); }
//     printf("GPIO (expect 0x50): 0x%x\n", gpio_read() & 0xFF ); // Mask to see lower 8 bits
//     uart_write_flush();

//     uint32_t start_cycle = get_mcycle();
//     uint32_t res_isqrt   = isqrt(1234567890UL);
//     uint32_t end_cycle   = get_mcycle();
//     printf("Result: 0x%x, Cycles: 0x%x\n", res_isqrt, end_cycle - start_cycle);
//     uart_write_flush();

//     printf("Tick\n");
//     sleep_ms(10);
//     printf("Tock\n");
//     uart_write_flush();

//     printf("\nAll Tests Complete.\n");
//     uart_write_flush();
//     return 0; 
// }




// ///* original code

// #include "uart.h"
// #include "print.h"
// #include "timer.h"
// #include "gpio.h"
// #include "util.h"

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
//*/