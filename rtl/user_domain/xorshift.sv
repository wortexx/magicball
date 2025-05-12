`timescale 1ns/1ps

import croc_pkg::*; // For sbr_obi_req_t, sbr_obi_rsp_t, SbrObiCfg

module xorshift#(
  parameter int unsigned PRNG_WIDTH = 32,
  parameter int unsigned PRNG_SEED  = 32'hDEADBEEF
) (
  input  logic        clk_i,
  input  logic        rst_ni,

  // OBI Slave Interface
  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o,

  // Output for user_domain to see the generated number (optional, mainly for debug)
  output logic [PRNG_WIDTH-1:0] current_prn_o
);

  //-------------------------------------------------
  // Parameters & Local Types for OBI Interface
  //-------------------------------------------------
  localparam int ADDR_LSB_WIDTH = 2; // To decode 4-byte aligned registers
  localparam int REG_ADDR_WIDTH = 3; // e.g., bits [4:2] for local offset

  localparam logic [REG_ADDR_WIDTH-1:0] PRNG_CTRL_OFFSET_VAL  = 3'h0; // Offset 0x00 for Control
  localparam logic [REG_ADDR_WIDTH-1:0] PRNG_RDATA_OFFSET_VAL = 3'h1; // Offset 0x04 for Read Data

  //-------------------------------------------------
  // Internal PRNG Core Logic (Embedded Xorshift)
  //-------------------------------------------------
  logic [PRNG_WIDTH-1:0] prng_state_q;      // Current state of the PRNG
  logic [PRNG_WIDTH-1:0] prng_state_d;      // Next state of the PRNG
  logic                  trigger_prng_update; // Single cycle pulse to update prng_state_q

  // Xorshift+ variant shifts (common for 32-bit)
  localparam int SHIFT_A = 13;
  localparam int SHIFT_B = 17;
  localparam int SHIFT_C = 5;

  // Combinational logic for next PRNG state calculation
  logic [PRNG_WIDTH-1:0] t1, t2;
  assign t1 = prng_state_q ^ (prng_state_q << SHIFT_A);
  assign t2 = t1 ^ (t1 >> SHIFT_B);
  assign prng_state_d = t2 ^ (t2 << SHIFT_C);

  // Sequential logic for PRNG state update
  always_ff @(posedge clk_i or negedge rst_ni) begin
      if (!rst_ni) begin
          prng_state_q <= PRNG_SEED; // Initialize PRNG state on reset
      end else if (trigger_prng_update) begin
          prng_state_q <= prng_state_d; // Update PRNG state when enabled
      end
  end

  assign current_prn_o = prng_state_q; // Output the current PRNG state

  //-------------------------------------------------
  // OBI Slave Logic
  //-------------------------------------------------
  logic                       rvalid_q;
  logic [SbrObiCfg.DataWidth-1:0] rdata_q;
  logic                       read_granted_this_cycle;
  logic                       is_ctrl_write;
  logic                       is_rdata_read;
  logic                       write_req;
  logic                       read_req;
  logic [REG_ADDR_WIDTH-1:0]  addr_offset_local;

  assign addr_offset_local = obi_req_i.a.addr[REG_ADDR_WIDTH+ADDR_LSB_WIDTH-1 : ADDR_LSB_WIDTH];

  assign write_req = obi_req_i.req &&  obi_req_i.a.we;
  assign read_req  = obi_req_i.req && !obi_req_i.a.we;

  assign is_ctrl_write = write_req && (addr_offset_local == PRNG_CTRL_OFFSET_VAL);
  assign is_rdata_read = read_req  && (addr_offset_local == PRNG_RDATA_OFFSET_VAL);

  // Grant Logic: Grant if it's a valid control write or data read
  assign obi_rsp_o.gnt = is_ctrl_write || is_rdata_read;

  // Generate single cycle enable pulse for PRNG core update
  // trigger_prng_update is high for one cycle when a write to PRNG_CTRL_OFFSET occurs and is granted.
  assign trigger_prng_update = is_ctrl_write && obi_rsp_o.gnt;

  // OBI Read Path and Response Logic
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      rvalid_q  <= 1'b0;
      rdata_q   <= '0;
    end else begin
      // OBI Read Data Latching
      if (read_granted_this_cycle) begin
        if (is_rdata_read) begin
          rdata_q <= prng_state_q; // Latch current PRN value for output
          $display("%t [PRNG_OBI_READ_LATCH] Read granted for RDATA_REG. Latching rdata_q=0x%h. rvalid_q becomes 1 NEXT cycle.",
                   $time, prng_state_q);
        end else begin
          rdata_q <= '0; // Reading an invalid/unsupported register (should ideally not be granted)
           $display("%t [PRNG_OBI_READ_LATCH] Read granted for UNKNOWN REG (should not happen if gnt is correct). Latching rdata_q=0. rvalid_q becomes 1 NEXT cycle.", $time);
        end
      end else if (!rvalid_q) begin
        rdata_q <= '0; // Default rdata_q if not actively driving
      end
      // Else: rdata_q holds its value while rvalid_q is high

      rvalid_q <= read_granted_this_cycle; // rvalid becomes high one cycle AFTER read was granted

      // Debug for write to control register
      if (trigger_prng_update) begin
        $display("%t [PRNG_OBI_CTRL_WRITE] Write to CTRL_REG granted. trigger_prng_update asserted. Next PRNG state will be 0x%h.", $time, prng_state_d);
      end

      // Debug for read valid
      if (rvalid_q) begin // This means obi_rsp_o.rvalid will be high THIS cycle
          $display("%t [PRNG_OBI_RVALID_HIGH] rvalid_o is HIGH. rdata_o is 0x%h", $time, rdata_q);
      end
    end
  end

  // Combinational assignment for read_granted_this_cycle
  assign read_granted_this_cycle = read_req && obi_rsp_o.gnt;

  // OBI Response outputs
  assign obi_rsp_o.rvalid  = rvalid_q;
  assign obi_rsp_o.r.rdata = rdata_q;
  assign obi_rsp_o.r.rid   = obi_req_i.a.aid; // Echo request ID
  // Error if a request is made to an unmapped offset within the granted range,
  // or if a write is attempted to the read-only data register, etc.
  // More precisely, error if the request was active but not granted by the conditions above.
  assign obi_rsp_o.r.err   = (obi_req_i.req && !obi_rsp_o.gnt);

endmodule