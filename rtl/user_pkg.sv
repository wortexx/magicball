`timescale 1ns/1ps // Added timescale, common practice

// Includes from the example user_pkg.sv
`include "register_interface/typedef.svh" // Assuming this path is valid in your project
`include "obi/typedef.svh"               // Assuming this path is valid in your project

import croc_pkg::*; // For croc_pkg::UserBaseAddr and croc_pkg::addr_map_rule_t

package user_pkg;

  ////////////////////////////////
  // User Manager Address maps // (Not used in your current simplified user_domain)
  ///////////////////////////////
  // localparam int unsigned NumUserMgr = 0;
  // typedef enum int {
  //   // No manager interfaces defined by user_domain
  // } user_mux_inputs_e;


  /////////////////////////////////////
  // User Subordinate Address maps ////
  /////////////////////////////////////

  // Define only the primary active peripheral for this focused test
  localparam int unsigned NumUserDomainSubordinates = 1; // Only the OBI SPI Engine

  // Define address for the OBI SPI Engine
  // Using slot 1 (after potential error slave at slot 0)
  localparam bit [31:0] UserSpiAddrOffset = croc_pkg::UserBaseAddr + 1 * 32'h0000_1000; // Example: 0x20001000
  localparam bit [31:0] UserSpiAddrRange  = 32'h0000_1000;        // 4KB for the peripheral

  // Define demux parameters
  localparam int unsigned NumDemuxSbrRules = NumUserDomainSubordinates;      // Number of explicit rules = 1 (for UserSpi)
  localparam int unsigned NumDemuxSbr      = NumDemuxSbrRules + 1;           // Total demux ports = Rules + 1 (for UserError) = 2

  // Enum for demux output indices
  // UserError is typically index 0 (often the default_idx_i in addr_decode)
  // UserSpi will be index 1
  typedef enum int {
    UserError = 0,
    UserSpi   = 1  // For your obi_spi_peripheral
  } user_demux_outputs_e;

  // Address rules given to address decoder
  // user_addr_map will be an array of 1 rule.
  // The `addr_decode` module's `default_idx_i` will handle UserError.
  localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = '{
    // Rule for the OBI SPI Engine
    '{ idx: UserSpi, start_addr: UserSpiAddrOffset, end_addr: UserSpiAddrOffset + UserSpiAddrRange }
  };

endpackage





// `timescale 1ns/1ps

// import croc_pkg::*;

// package user_pkg;

//   // This package is simplified to support a user_domain.sv that only
//   // instantiates the obi_spi_peripheral and an obi_err_sbr.

//   // 1. Define only the active peripherals being instantiated in the simplified user_domain.sv
//   localparam int unsigned NumUserDomainActivePeripherals = 1; // Only OBI SPI Engine

//   // 2. Define base addresses and range
//   localparam bit [31:0] UserDomainBaseAddr    = croc_pkg::UserBaseAddr; // Typically 0x20000000
//   localparam bit [31:0] UserPeriphRange       = 32'h0000_1000;        // 4KB for each peripheral (can be adjusted)

//   // 3. Assign base address for the OBI SPI Engine
//   //    This should match the slot it's intended for. If it was previously UserSpi=1,
//   //    it would be UserDomainBaseAddr + 1 * UserPeriphRange.
//   localparam bit [31:0] UserSpiAddrOffset     = UserDomainBaseAddr + 1 * UserPeriphRange; // e.g., 0x20001000

//   // 4. Define demux outputs enum
//   //    UserError will be index 0 (by addr_decode default_idx_i).
//   //    UserSpi will be index 1 (as per the single rule in user_addr_map).
//   typedef enum int {
//     UserError     = 0, // Default for unmapped accesses, typically assigned by addr_decode
//     UserSpi       = 1  // For obi_spi_peripheral
//     // Other peripherals (UserSpiCtrl, UserFontRom, UserPrng) are removed for this focused test
//   } user_demux_outputs_e;

//   // 5. Define address map rules
//   //    Only one active rule: for the OBI SPI Engine.
//   localparam int unsigned NumDemuxSbrRules  = NumUserDomainActivePeripherals; // This will be 1

//   function automatic croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] init_user_addr_map();
//     croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] map_rules;
//     // Rule for the OBI SPI Engine, its index should match UserSpi in the enum (e.g., 1)
//     map_rules[0] = '{ idx: UserSpi,     start_addr: UserSpiAddrOffset,     end_addr: UserSpiAddrOffset + UserPeriphRange };
//     return map_rules;
//   endfunction

//   localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = init_user_addr_map();

//   // 6. Define total number of OBI Demultiplexer manager ports
//   //    This includes all active peripherals PLUS the error slave.
//   //    If UserError is index 0 and UserSpi is index 1, we need 2 manager ports for the demux.
//   localparam int unsigned NumDemuxSbr       = NumDemuxSbrRules + 1;      // This will be 1 (UserSpi) + 1 (UserError) = 2

// endpackage

















////works with tb user domain 
// `timescale 1ns/1ps

// import croc_pkg::*;

// package user_pkg;

//   localparam int unsigned NumUserDomainSubordinates = 4; // SPI Eng, SPI Ctrl, Font ROM, PRNG

//   localparam bit [31:0] UserDomainBaseAddr    = croc_pkg::UserBaseAddr; // 0x20000000
//   localparam bit [31:0] UserPeriphRange       = 32'h0000_1000;        // 4KB for each

//   localparam bit [31:0] UserSpiAddrOffset     = UserDomainBaseAddr + 1 * UserPeriphRange; // 0x20001000
//   localparam bit [31:0] UserSpiCtrlAddrOffset = UserDomainBaseAddr + 2 * UserPeriphRange; // 0x20002000
//   localparam bit [31:0] UserFontRomAddrOffset = UserDomainBaseAddr + 3 * UserPeriphRange; // 0x20003000
//   localparam bit [31:0] UserPrngAddrOffset    = UserDomainBaseAddr + 4 * UserPeriphRange; // 0x20004000 

//   localparam int unsigned NumDemuxSbrRules  = NumUserDomainSubordinates; // 4 rules
//   localparam int unsigned NumDemuxSbr       = NumDemuxSbrRules + 1;      // 5 demux ports (4 + Error)

//   typedef enum int {
//     UserError     = 0,
//     UserSpi       = 1,
//     UserSpiCtrl   = 2,
//     UserFontRom   = 3,
//     UserPrng      = 4
//   } user_demux_outputs_e;

//   function automatic croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] init_user_addr_map();
//     croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] map_rules;
//     map_rules[0] = '{ idx: UserSpi,     start_addr: UserSpiAddrOffset,     end_addr: UserSpiAddrOffset + UserPeriphRange };
//     map_rules[1] = '{ idx: UserSpiCtrl, start_addr: UserSpiCtrlAddrOffset, end_addr: UserSpiCtrlAddrOffset + UserPeriphRange };
//     map_rules[2] = '{ idx: UserFontRom, start_addr: UserFontRomAddrOffset, end_addr: UserFontRomAddrOffset + UserPeriphRange };
//     map_rules[3] = '{ idx: UserPrng,    start_addr: UserPrngAddrOffset,    end_addr: UserPrngAddrOffset + UserPeriphRange };
//     return map_rules;
//   endfunction

//   localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = init_user_addr_map();

// endpackage



// `timescale 1ns/1ps

// // `include "register_interface/typedef.svh" // Assuming not strictly needed for this minimal version
// // `include "obi/typedef.svh"               // Assuming not strictly needed for this minimal version

// package user_pkg;

//   import croc_pkg::*; // For sbr_obi_req_t, sbr_obi_rsp_t, SbrObiCfg, addr_map_rule_t

//   // --- User Subordinate Address maps ---
//   localparam int unsigned NUM_ACTIVE_USER_PERIPHERALS = 2; // 1: SPI Engine, 2: SPI Ctrl

//   // Address Definitions
//   localparam bit [31:0] UserDomainBaseAddr    = croc_pkg::UserBaseAddr; // e.g., 0x20000000
//   localparam bit [31:0] UserPeriphRange       = 32'h0000_1000;        // 4KB range for each

//   localparam bit [31:0] UserSpiAddrOffset     = UserDomainBaseAddr + 1 * UserPeriphRange; // 0x20001000
//   localparam bit [31:0] UserSpiCtrlAddrOffset = UserDomainBaseAddr + 2 * UserPeriphRange; // 0x20002000
//   // Font ROM and PRNG addresses are omitted for this simplified version

//   // Demux Configuration
//   localparam int unsigned NumDemuxSbrRules  = NUM_ACTIVE_USER_PERIPHERALS; // Number of active rules
//   localparam int unsigned NumDemuxSbr       = NumDemuxSbrRules + 1;        // Rules + 1 for Error slave

//   // Enum for bus indices for the demux inside user_domain
//   typedef enum int {
//     UserError     = 0, // Default/Error slave
//     UserSpi       = 1, // SPI Engine peripheral
//     UserSpiCtrl   = 2  // SPI GPIO Control registers
//     // UserFontRom and UserPrng omitted
//   } user_demux_outputs_e;

//   // Function to initialize the user address map
//   function automatic croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] init_user_addr_map();
//     croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] map_rules;

//     map_rules[0] = '{ idx:        UserSpi,
//                       start_addr: UserSpiAddrOffset,                  
//                       end_addr:   UserSpiAddrOffset + UserPeriphRange 
//                     };
//     map_rules[1] = '{ idx:        UserSpiCtrl,
//                       start_addr: UserSpiCtrlAddrOffset,
//                       end_addr:   UserSpiCtrlAddrOffset + UserPeriphRange
//                     };
//     // Rules for Font ROM and PRNG omitted
//     return map_rules;
//   endfunction

//   localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = init_user_addr_map();

// endpackage


/*`include "register_interface/typedef.svh"
`include "obi/typedef.svh"

package user_pkg;

  import croc_pkg::*; // For addr_map_rule_t and UserBaseAddr

  // User Manager Address maps - None for this design
  // User Subordinate Address maps

  localparam int unsigned NumUserDomainSubordinates = 1; // Only the SPI Engine

  // Address Definitions
  localparam bit [31:0] UserDomainBaseAddr  = croc_pkg::UserBaseAddr; // e.g., 32'h2000_0000
  localparam bit [31:0] UserPeriphRange     = 32'h0000_1000;          // 4KB range

  // SPI Engine is placed after the conventional User ROM space
  localparam bit [31:0] UserSpiAddrOffset = UserDomainBaseAddr + 1 * UserPeriphRange; // e.g., 0x20001000

  // Demux Configuration
  localparam int unsigned NumDemuxSbrRules  = NumUserDomainSubordinates; // 1 rule
  localparam int unsigned NumDemuxSbr       = NumDemuxSbrRules + 1;      // 2 ports (Error + SPI Engine)

  // Enum for bus indices for the user_domain demux
  typedef enum int {
    UserError = 0, // Default/Error slave
    UserSpi   = 1  // SPI Engine
  } user_demux_outputs_e;

  // Register Offsets within obi_spi_peripheral (mirrored here for TB convenience)
  localparam logic [11:0] SPI_ENGINE_CTRL_REG_OFFSET   = 12'h000;
  localparam logic [11:0] SPI_ENGINE_TX_REG_OFFSET     = 12'h004;
  localparam logic [11:0] SPI_ENGINE_STATUS_REG_OFFSET = 12'h008;

  // Function to initialize the address map for user_domain
  function automatic croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] init_user_addr_map();
    croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] map_rules; // Array size [0:0]
    map_rules[0] = '{ idx:        UserSpi,
                      start_addr: UserSpiAddrOffset,
                      end_addr:   UserSpiAddrOffset + UserPeriphRange
                    };
    return map_rules;
  endfunction

  localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = init_user_addr_map();

endpackage
*/
/*

`include "register_interface/typedef.svh" // Assuming this defines register types if needed
`include "obi/typedef.svh"               // Assuming this defines OBI types if needed

package user_pkg;

  // Import necessary types from croc_pkg (assuming addr_map_rule_t is here)
  import croc_pkg::*;

  ////////////////////////////////
  // User Manager Address maps //
  ///////////////////////////////

  // None


  /////////////////////////////////////
  // User Subordinate Address maps ////
  /////////////////////////////////////

  // Setting number of actual user subordinates to 4
  localparam int unsigned NumUserDomainSubordinates = 4; // 1: SPI Engine, 2: SPI Ctrl, 3: Font ROM, 4: Xor

  // --- Address Definitions ---
  localparam bit [31:0] UserDomainBaseAddr  = croc_pkg::UserBaseAddr; // Example: 32'h2000_0000;
  localparam bit [31:0] UserPeriphRange     = 32'h0000_1000;          // Assign 4KB range for each peripheral

  // Place SPI Engine after the reserved ROM space (0x20000000)
  localparam bit [31:0] UserSpiAddrOffset = UserDomainBaseAddr + 1 * UserPeriphRange; // Start at 32'h2000_1000
  // Place SPI GPIO Control registers after the SPI Engine
  localparam bit [31:0] UserSpiCtrlAddrOffset = UserDomainBaseAddr + 2 * UserPeriphRange; // Start at 32'h2000_2000
  // Place Font ROM after the SPI Control
  localparam bit [31:0] UserFontRomAddrOffset = UserDomainBaseAddr + 3 * UserPeriphRange; // Start at 32'h2000_3000
  //Xorshift
  localparam bit [31:0] UserPrngAddrOffset    = UserDomainBaseAddr + 4 * UserPeriphRange; // Start at 32'h2000_4000 

  // --- Demux Configuration ---
  // Number of rules = number of actual subordinates
  localparam int unsigned NumDemuxSbrRules  = NumUserDomainSubordinates; //  
  localparam int unsigned NumDemuxSbr       = NumDemuxSbrRules + 1; //  

  // Enum for bus indices
  typedef enum int {
    UserError     = 0, // Default/Error slave remains at index 0
    UserSpi       = 1, // SPI Engine peripheral assigned to index 1
    UserSpiCtrl   = 2, // SPI GPIO Control registers assigned to index 2
    UserFontRom   = 3,
    UserPrng      = 4
      // Font ROM assigned to index 3
  } user_demux_outputs_e;

  // Function to initialize the address map
  function automatic croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] init_user_addr_map();
    // Declare a variable of the return type
    croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] map_rules; // Array size is [3:0]
    // Assign the rule(s) using struct literals
    // Rule for SPI Peripheral (maps to index UserSpi = 1)
    map_rules[0] = '{ idx:        UserSpi,
                      start_addr: UserSpiAddrOffset,                  
                      end_addr:   UserSpiAddrOffset + UserPeriphRange 
                    };
        // Rule for SPI Control Registers (maps to index UserSpiCtrl = 2)
    map_rules[1] = '{ idx:        UserSpiCtrl,
                      start_addr: UserSpiCtrlAddrOffset,
                      end_addr:   UserSpiCtrlAddrOffset + UserPeriphRange
                    };
    // Rule for Font ROM (maps to index UserFontRom = 3)
    map_rules[2] = '{ idx:        UserFontRom,
                      start_addr: UserFontRomAddrOffset,
                      end_addr:   UserFontRomAddrOffset + UserPeriphRange
                    };
    // Rule for Font ROM (maps to index UserPrng = 4)    
    map_rules[3] = '{ idx:        UserPrng,    
                      start_addr: UserPrngAddrOffset,
                      end_addr:   UserPrngAddrOffset + UserPeriphRange
                    };
    return map_rules;
  endfunction

  // Initialize localparam by calling the function
  localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = init_user_addr_map();

endpackage
*/