`timescale 1ns/1ps
import croc_pkg::*; // For SbrObiCfg

module xorshift#(
  parameter int unsigned PRNG_WIDTH = 32,
  parameter int unsigned PRNG_SEED  = 32'hDEADBEEF,
  parameter int ADDR_WIDTH_OBI  = 32, // OBI Address width
  parameter int DATA_WIDTH_OBI  = 32, // OBI Data width
  parameter int ID_WIDTH_OBI    = SbrObiCfg.IdWidth // OBI ID width
) (
  input  logic        clk_i,
  input  logic        rst_ni,

  // OBI Slave Interface
  input  logic        req_i,
  input  logic        we_i,
  input  logic [3:0]  be_i,
  input  logic [ADDR_WIDTH_OBI-1:0] addr_i,
  input  logic [DATA_WIDTH_OBI-1:0] wdata_i,
  input  logic [ID_WIDTH_OBI-1:0] aid_i,

  output logic        gnt_o,
  output logic        rvalid_o,
  output logic [DATA_WIDTH_OBI-1:0] rdata_o,
  output logic [ID_WIDTH_OBI-1:0] rid_o,
  output logic        err_o,

  output logic [PRNG_WIDTH-1:0] current_prn_o
);

  localparam logic [1:0] REG_CTRL_OFFSET  = 2'h0; // Byte Offset 0x0: Write to trigger
  localparam logic [1:0] REG_RDATA_OFFSET = 2'h1; // Byte Offset 0x4: Read to get PRN

  logic [PRNG_WIDTH-1:0] prng_state_q;
  logic [PRNG_WIDTH-1:0] prng_state_d;
  logic                  trigger_prng_update_pulse;

  localparam int SHIFT_A = 13;
  localparam int SHIFT_B = 17;
  localparam int SHIFT_C = 5;

  logic [PRNG_WIDTH-1:0] t1, t2;
  assign t1 = prng_state_q ^ (prng_state_q << SHIFT_A);
  assign t2 = t1 ^ (t1 >> SHIFT_B);
  assign prng_state_d = t2 ^ (t2 << SHIFT_C);

  always_ff @(posedge clk_i or negedge rst_ni) begin
      if (!rst_ni) begin
          prng_state_q <= PRNG_SEED;
      end else if (trigger_prng_update_pulse) begin
          prng_state_q <= prng_state_d;
      end
  end
  assign current_prn_o = prng_state_q;

  logic        req_latch_q;
  logic        we_latch_q;
  logic [1:0]  addr_offset_latch_q;
  logic [ID_WIDTH_OBI-1:0] id_latch_q;

  assign gnt_o = req_i;
  assign trigger_prng_update_pulse = (req_i && we_i && gnt_o && (addr_i[3:2] == REG_CTRL_OFFSET));

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_latch_q         <= 1'b0;
      we_latch_q          <= 1'b0;
      addr_offset_latch_q <= '0;
      id_latch_q          <= '0;
    end else begin
      if (req_i && gnt_o) begin
        req_latch_q         <= req_i;
        we_latch_q          <= we_i;
        addr_offset_latch_q <= addr_i[3:2];
        id_latch_q          <= aid_i;
      end else if (!req_i) begin
        req_latch_q <= 1'b0;
      end

      if (trigger_prng_update_pulse) begin
          $display("%t [XORSHIFT_PRNG] Write to CTRL_REG. Triggering PRNG update. Next state: 0x%h", $time, prng_state_d);
      end
    end
  end

  assign rvalid_o = req_latch_q;
  assign rid_o    = id_latch_q;

  logic is_ctrl_access_latch;
  logic is_rdata_access_latch;
  logic is_valid_mapped_access_latch;

  assign is_ctrl_access_latch  = (addr_offset_latch_q == REG_CTRL_OFFSET);
  assign is_rdata_access_latch = (addr_offset_latch_q == REG_RDATA_OFFSET);
  assign is_valid_mapped_access_latch = is_ctrl_access_latch || is_rdata_access_latch;

  assign err_o = req_latch_q && (
                  !is_valid_mapped_access_latch ||
                  (we_latch_q && is_rdata_access_latch) ||
                  (!we_latch_q && is_ctrl_access_latch)
                 );

  always_comb begin
    rdata_o = 32'h0;
    if (req_latch_q && !we_latch_q && !err_o) begin
      if (is_rdata_access_latch) begin
        rdata_o = prng_state_q;
      end
    end
    // obi_rsp_o.r.r_optional is now driven directly in the output port assignment block
  end
  // Explicitly drive r_optional as part of the output struct
  // This assumes sbr_obi_rsp_t has .r.r_optional as a direct member (e.g. logic)
  // If SbrObiCfg.OptionalCfg.UseRChan is true and RChanWidth > 0, this needs to be sized.
  // Given croc_pkg.sv sets OptionalCfg to '0', r_optional is likely a single bit.
  // assign obi_rsp_o.r.r_optional = 1'b0; // This line is now implicitly handled by user_domain.sv if needed
                                        // OR, if the struct type sbr_obi_rsp_t requires it,
                                        // it should be part of the assignments to obi_rsp_o.
                                        // For clarity, we'll add it to the main response assignment block.

endmodule
