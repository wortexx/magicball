`timescale 1ns/1ps
import croc_pkg::*;

package user_pkg;

  // Define the number of custom subordinates we are integrating
  localparam int unsigned NumUserDomainSubordinates = 4; // OBI_SPI_Peripheral, User_SPI_Ctrl, Xorshift_PRNG, User_Font_Rom

  // Define base addresses and ranges for each peripheral
  localparam bit [31:0] UserDomainBaseAddr    = croc_pkg::UserBaseAddr; // e.g., 0x20000000
  localparam bit [31:0] UserPeriphRange       = 32'h0000_1000;        // 4KB for each peripheral

  // Assign addresses sequentially for simplicity
  localparam bit [31:0] UserObiSpiAddrOffset  = UserDomainBaseAddr + 0 * UserPeriphRange; // 0x20000000
  localparam bit [31:0] UserSpiCtrlAddrOffset = UserDomainBaseAddr + 1 * UserPeriphRange; // 0x20001000
  localparam bit [31:0] UserPrngAddrOffset    = UserDomainBaseAddr + 2 * UserPeriphRange; // 0x20002000
  localparam bit [31:0] UserFontRomAddrOffset = UserDomainBaseAddr + 3 * UserPeriphRange; // 0x20003000

  // Demux parameters
  localparam int unsigned NumDemuxSbrRules = NumUserDomainSubordinates; // Number of explicit rules
  localparam int unsigned NumDemuxSbr      = NumDemuxSbrRules + 1;      // Total demux ports (Custom Peripherals + Error Slave)

  // Enum for OBI demultiplexer output port indices
  typedef enum int {
    UserError       = 0, // Index for the OBI error slave
    UserObiSpi      = 1, // Index for obi_spi_peripheral
    UserSpiCtrl     = 2, // Index for user_spi_ctrl
    UserPrng        = 3, // Index for user_xorshift PRNG
    UserFontRom     = 4  // Index for user_font_rom
  } user_demux_outputs_e;

  // Address map rules for the addr_decode module
  function automatic croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] init_user_addr_map();
    croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] map_rules;
    map_rules[0] = '{ idx: UserObiSpi,  start_addr: UserObiSpiAddrOffset,  end_addr: UserObiSpiAddrOffset  + UserPeriphRange };
    map_rules[1] = '{ idx: UserSpiCtrl, start_addr: UserSpiCtrlAddrOffset, end_addr: UserSpiCtrlAddrOffset + UserPeriphRange };
    map_rules[2] = '{ idx: UserPrng,    start_addr: UserPrngAddrOffset,    end_addr: UserPrngAddrOffset    + UserPeriphRange };
    map_rules[3] = '{ idx: UserFontRom, start_addr: UserFontRomAddrOffset, end_addr: UserFontRomAddrOffset + UserPeriphRange };
    return map_rules;
  endfunction

  localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = init_user_addr_map();

endpackage
