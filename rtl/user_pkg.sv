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

  // Setting number of actual user subordinates to 1
  localparam int unsigned NumUserDomainSubordinates = 1; // We are adding 1 peripheral (SPI)

  // --- Address Definitions ---
  // Define a range for the SPI peripheral (e.g., 4KB)
  localparam bit [31:0] UserSpiAddrRange  = 32'h0000_1000;
  // Define the SPI offset relative to the UserBaseAddr from croc_pkg
  // Place it after the reserved ROM space (0x2000_0000 to 0x2000_1000)
  localparam bit [31:0] UserSpiAddrOffset = croc_pkg::UserBaseAddr + UserSpiAddrRange; // Start at 32'h2000_1000

  // --- Demux Configuration ---
  // Number of rules = number of actual subordinates
  localparam int unsigned NumDemuxSbrRules  = NumUserDomainSubordinates; // Now 1 rule
  // Total ports = rules + 1 (for error slave)
  localparam int unsigned NumDemuxSbr       = NumDemuxSbrRules + 1; // Now 1 + 1 = 2 ports

  // Enum for bus indices
  typedef enum int {
    UserError = 0, // Default/Error slave remains at index 0
    UserSpi   = 1  // SPI peripheral assigned to index 1
  } user_demux_outputs_e;

  // Function to initialize the address map
  function automatic croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] init_user_addr_map();
    // Declare a variable of the return type
    croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] map_rules;
    // Assign the rule(s) using struct literals
    // Rule for SPI Peripheral (maps to index UserSpi = 1)
    // Note: Array index is 0 because NumDemuxSbrRules is 1, so array is [0:0]
    map_rules[0] = '{ idx:        UserSpi,
                      start_addr: UserSpiAddrOffset,                  // Use correct start address
                      end_addr:   UserSpiAddrOffset + UserSpiAddrRange // Use correct end address (exclusive)
                    };
    return map_rules;
  endfunction

  // Initialize localparam by calling the function
  localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = init_user_addr_map();

endpackage