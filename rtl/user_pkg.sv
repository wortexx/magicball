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

  // Setting number of actual user subordinates to 3
  localparam int unsigned NumUserDomainSubordinates = 3; // 1: SPI Engine, 2: SPI Ctrl, 3: Font ROM

  // --- Address Definitions ---
  localparam bit [31:0] UserDomainBaseAddr  = croc_pkg::UserBaseAddr; // Example: 32'h2000_0000;
  localparam bit [31:0] UserPeriphRange     = 32'h0000_1000;          // Assign 4KB range for each peripheral

  // Place SPI Engine after the reserved ROM space (0x20000000)
  localparam bit [31:0] UserSpiAddrOffset = UserDomainBaseAddr + 1 * UserPeriphRange; // Start at 32'h2000_1000
  // Place SPI GPIO Control registers after the SPI Engine
  localparam bit [31:0] UserSpiCtrlAddrOffset = UserDomainBaseAddr + 2 * UserPeriphRange; // Start at 32'h2000_2000
  // Place Font ROM after the SPI Control
  localparam bit [31:0] UserFontRomAddrOffset = UserDomainBaseAddr + 3 * UserPeriphRange; // Start at 32'h2000_3000

  // --- Demux Configuration ---
  // Number of rules = number of actual subordinates
  localparam int unsigned NumDemuxSbrRules  = NumUserDomainSubordinates; //  3
  localparam int unsigned NumDemuxSbr       = NumDemuxSbrRules + 1; //  3 + 1 = 4 ports

  // Enum for bus indices
  typedef enum int {
    UserError     = 0, // Default/Error slave remains at index 0
    UserSpi       = 1, // SPI Engine peripheral assigned to index 1
    UserSpiCtrl   = 2, // SPI GPIO Control registers assigned to index 2
    UserFontRom   = 3  // Font ROM assigned to index 3
  } user_demux_outputs_e;

  // Function to initialize the address map
  function automatic croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] init_user_addr_map();
    // Declare a variable of the return type
    croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] map_rules; // Array size is [2:0]
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
    return map_rules;
  endfunction

  // Initialize localparam by calling the function
  localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = init_user_addr_map();

endpackage