// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "register_interface/typedef.svh"
`include "obi/typedef.svh"

package user_pkg;

  ////////////////////////////////
  // User Manager Address maps //
  ///////////////////////////////
  
  // None


  /////////////////////////////////////
  // User Subordinate Address maps ////
  /////////////////////////////////////

  localparam int unsigned NumUserDomainSubordinates = 1;

  localparam bit [31:0] UserRomAddrOffset   = croc_pkg::UserBaseAddr; // 32'h2000_0000;
  localparam bit [31:0] UserSpiAddrRange    = 32'h0000_1000;          // every subordinate has at least 4KB
  
  //Define address for the single SPI peripheral
  localparam bit [31:0] UserSpiAddrOffset = croc_pkg::UserBaseAddr + 0 * UserSpiAddrRange; // Example: 32'h2000_0000


  localparam int unsigned NumDemuxSbrRules  = NumUserDomainSubordinates; // number of address rules in the decoder
  localparam int unsigned NumDemuxSbr       = NumDemuxSbrRules + 1; // additional OBI error, used for signal arrays

  // Enum for bus indices
  typedef enum int {
    UserError = 0,
    UserSpi   = 1  // SPI peripheral assigned to index 1
  } user_demux_outputs_e;

  // Address rules given to address decoder
  localparam croc_pkg::addr_map_rule_t [NumDemuxSbrRules-1:0] user_addr_map = {
    // Rule for SPI Peripheral (maps to index UserSpi = 1)
    '{ addr_base: UserSpiAddrOffset,
       addr_mask: ~(UserSpiAddrRange - 1), // Mask for 4KB range: 32'hFFFF_F000 
       index:     UserSpi
     }
    // Add more rules here if NumUserDomainSubordinates increases, separated by commas
  };

endpackage
