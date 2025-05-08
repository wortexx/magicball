/*
`timescale 1ns/1ps

// Make sure necessary packages are accessible (e.g., via includes in croc.f)
import obi_pkg::*;
import cf_math_pkg::*;

module obi_demux #(
  parameter obi_pkg::obi_cfg_t ObiCfg      = obi_pkg::ObiDefaultConfig,
  parameter type               obi_req_t   = logic,
  parameter type               obi_rsp_t   = logic,
  parameter int unsigned       NumMgrPorts = 32'd0,
  parameter int unsigned       NumMaxTrans = 32'd0,
  parameter type               select_t    = logic [$clog2(NumMgrPorts)-1:0]
) (
  input  logic                       clk_i,
  input  logic                       rst_ni,

  input  select_t                    sbr_port_select_i,
  input  obi_req_t                   sbr_port_req_i,
  output obi_rsp_t                   sbr_port_rsp_o,

  output obi_req_t [NumMgrPorts-1:0] mgr_ports_req_o,
  input  obi_rsp_t [NumMgrPorts-1:0] mgr_ports_rsp_i
);

  if (ObiCfg.Integrity) begin : gen_integrity_err
    $fatal(1, "obi_demux: Integrity mode unimplemented");
  end

  localparam int unsigned CounterWidth = cf_math_pkg::idx_width(NumMaxTrans);

  logic cnt_up, cnt_down, overflow;
  logic [CounterWidth-1:0] in_flight;
  logic sbr_port_rready;

  select_t select_d, select_q;

  logic is_same_target;
  logic no_flight;
  logic one_completing;
  logic forward_ok;
  logic forward_condition_met; // Debug signal

  always_comb begin : proc_req
    // Default assignments
    select_d = select_q;
    cnt_up = 1'b0;
    for (int i = 0; i < NumMgrPorts; i++) begin
      mgr_ports_req_o[i].req = 1'b0;
      mgr_ports_req_o[i].a   = '0;
    end
    forward_condition_met = 1'b0; // Default debug signal

    // Calculate original forwarding condition components for display
    is_same_target = (sbr_port_select_i == select_q);
    no_flight      = (in_flight == '0);
    one_completing = (in_flight == 1 && cnt_down);
    forward_ok     = is_same_target || no_flight || one_completing;

    // *** TEMPORARY DEBUG: Simplify forwarding condition ***
    // Always forward if not overflowing, ignoring complex state checks.
    // This might break strict ordering but helps debug connectivity.
    if (!overflow) begin
      // if (forward_ok) begin // Original condition
        mgr_ports_req_o[sbr_port_select_i].req = sbr_port_req_i.req;
        mgr_ports_req_o[sbr_port_select_i].a = sbr_port_req_i.a;
        forward_condition_met = sbr_port_req_i.req; // Mark condition met if req is high
      // end
    end

    // Calculate select_d and cnt_up based on forwarded request and grant
    if (mgr_ports_req_o[sbr_port_select_i].req && mgr_ports_rsp_i[sbr_port_select_i].gnt) begin
      select_d = sbr_port_select_i;
      cnt_up = 1'b1;
    end

    // Debug Display
    if (sbr_port_req_i.req) begin
        $display("%t [OBI_DEMUX] Input: req=%b, sel=%d | State: sel_q=%d, in_flight=%d, cnt_down=%b, overflow=%b | Condition: same=%b, no_flight=%b, one_comp=%b -> forward_ok=%b | Output: mgr_req[%d].req=%b, cnt_up=%b",
                 $time, sbr_port_req_i.req, sbr_port_select_i, select_q, in_flight, cnt_down, overflow,
                 is_same_target, no_flight, one_completing, forward_ok, // Display original condition result
                 sbr_port_select_i, mgr_ports_req_o[sbr_port_select_i].req, cnt_up); // Display actual output req
    end
  end

  // Response path
  assign sbr_port_rsp_o.gnt    = mgr_ports_rsp_i[sbr_port_select_i].gnt;
  //assign sbr_port_rsp_o.r      = mgr_ports_rsp_i[select_q].r;
  //assign sbr_port_rsp_o.rvalid = mgr_ports_rsp_i[select_q].rvalid;
  assign sbr_port_rsp_o.r      = mgr_ports_rsp_i[sbr_port_select_i].r; // Use current select
  assign sbr_port_rsp_o.rvalid = mgr_ports_rsp_i[sbr_port_select_i].rvalid; // Use current select

  // RReady logic
  if (ObiCfg.UseRReady) begin : gen_rready
     assign sbr_port_rready = sbr_port_req_i.rready;
     for (genvar i = 0; i < NumMgrPorts; i++) begin : gen_rready_assign
       assign mgr_ports_req_o[i].rready = sbr_port_req_i.rready;
     end
  end else begin : gen_no_rready
    assign sbr_port_rready = 1'b1;
  end

  // Calculate counter decrement signal
  assign cnt_down = mgr_ports_rsp_i[select_q].rvalid && sbr_port_rready;

  // Transaction counter
  delta_counter #(
    .WIDTH           ( CounterWidth ),
    .STICKY_OVERFLOW ( 1'b0         )
  ) i_counter (
    .clk_i, .rst_ni,
    .clear_i   ( 1'b0                           ),
    .en_i      ( cnt_up ^ cnt_down              ),
    .load_i    ( 1'b0                           ),
    .down_i    ( cnt_down                       ),
    .delta_i   ( {{CounterWidth-1{1'b0}}, 1'b1} ),
    .d_i       ( '0                             ),
    .q_o       ( in_flight                      ),
    .overflow_o( overflow                       )
  );

  // Register for select signal used in response path
  always_ff @(posedge clk_i or negedge rst_ni) begin : proc_select
    if(!rst_ni) begin
      select_q <= '0;
    end else begin
      select_q <= select_d;
    end
  end

endmodule
*/
///*


// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// Michael Rogenmoser <michaero@iis.ee.ethz.ch>

module obi_demux #(
  /// The OBI configuration for all ports.
  parameter obi_pkg::obi_cfg_t ObiCfg      = obi_pkg::ObiDefaultConfig,
  /// The request struct for all ports.
  parameter type               obi_req_t   = logic,
  /// The response struct for all ports.
  parameter type               obi_rsp_t   = logic,
  /// The number of manager ports.
  parameter int unsigned       NumMgrPorts = 32'd0,
  /// The maximum number of outstanding transactions.
  parameter int unsigned       NumMaxTrans = 32'd0,
  /// The type of the port select signal.
  parameter type               select_t    = logic [$clog2(NumMgrPorts)-1:0]
) (
  input  logic                       clk_i,
  input  logic                       rst_ni,

  input  select_t                    sbr_port_select_i,
  input  obi_req_t                   sbr_port_req_i,
  output obi_rsp_t                   sbr_port_rsp_o,

  output obi_req_t [NumMgrPorts-1:0] mgr_ports_req_o,
  input  obi_rsp_t [NumMgrPorts-1:0] mgr_ports_rsp_i
);

  if (ObiCfg.Integrity) begin : gen_integrity_err
    $fatal(1, "unimplemented");
  end

  // stall requests to ensure in-order behavior (could be handled differently with rready)
  localparam int unsigned CounterWidth = cf_math_pkg::idx_width(NumMaxTrans);

  logic cnt_up, cnt_down, overflow;
  logic [CounterWidth-1:0] in_flight;
  logic sbr_port_rready;

  select_t select_d, select_q;

  always_comb begin : proc_req
    select_d = select_q;
    cnt_up = 1'b0;
    for (int i = 0; i < NumMgrPorts; i++) begin
      mgr_ports_req_o[i].req = 1'b0;
      mgr_ports_req_o[i].a   = '0;
    end

    if (!overflow) begin
      if (sbr_port_select_i == select_q || in_flight == '0 || (in_flight == 1 && cnt_down)) begin
        mgr_ports_req_o[sbr_port_select_i].req = sbr_port_req_i.req;
        mgr_ports_req_o[sbr_port_select_i].a = sbr_port_req_i.a;
      end
    end

    if (mgr_ports_req_o[sbr_port_select_i].req && mgr_ports_rsp_i[sbr_port_select_i].gnt) begin
      select_d = sbr_port_select_i;
      cnt_up = 1'b1;
    end
  end

  assign sbr_port_rsp_o.gnt    = mgr_ports_rsp_i[sbr_port_select_i].gnt;
  assign sbr_port_rsp_o.r      = mgr_ports_rsp_i[select_q].r;
  assign sbr_port_rsp_o.rvalid = mgr_ports_rsp_i[select_q].rvalid;

  if (ObiCfg.UseRReady) begin : gen_rready
    assign sbr_port_rready = sbr_port_req_i.rready;
    for (genvar i = 0; i < NumMgrPorts; i++) begin : gen_rready
      assign mgr_ports_req_o[i].rready = sbr_port_req_i.rready;
    end
  end else begin : gen_no_rready
    assign sbr_port_rready = 1'b1;
  end

  assign cnt_down = mgr_ports_rsp_i[select_q].rvalid && sbr_port_rready;

  delta_counter #(
    .WIDTH           ( CounterWidth ),
    .STICKY_OVERFLOW ( 1'b0         )
  ) i_counter (
    .clk_i,
    .rst_ni,

    .clear_i   ( 1'b0                           ),
    .en_i      ( cnt_up ^ cnt_down              ),
    .load_i    ( 1'b0                           ),
    .down_i    ( cnt_down                       ),
    .delta_i   ( {{CounterWidth-1{1'b0}}, 1'b1} ),
    .d_i       ( '0                             ),
    .q_o       ( in_flight                      ),
    .overflow_o( overflow                       )
  );

  always_ff @(posedge clk_i or negedge rst_ni) begin : proc_select
    if(!rst_ni) begin
      select_q <= '0;
    end else begin
      select_q <= select_d;
    end
  end

endmodule

`include "obi/typedef.svh"
`include "obi/assign.svh"

module obi_demux_intf #(
  /// The OBI configuration for all ports.
  parameter obi_pkg::obi_cfg_t ObiCfg      = obi_pkg::ObiDefaultConfig,
  /// The number of manager ports.
  parameter int unsigned       NumMgrPorts = 32'd0,
  /// The maximum number of outstanding transactions.
  parameter int unsigned       NumMaxTrans = 32'd0,
  /// The type of the port select signal.
  parameter type               select_t    = logic [$clog2(NumMgrPorts)-1:0]
) (
  input logic         clk_i,
  input logic         rst_ni,

  input select_t      sbr_port_select_i,
  OBI_BUS.Subordinate sbr_port,

  OBI_BUS.Manager     mgr_ports [NumMgrPorts]
);

  `OBI_TYPEDEF_ALL(obi, ObiCfg)

  obi_req_t sbr_port_req;
  obi_rsp_t sbr_port_rsp;

  obi_req_t [NumMgrPorts-1:0] mgr_ports_req;
  obi_rsp_t [NumMgrPorts-1:0] mgr_ports_rsp;

  `OBI_ASSIGN_TO_REQ(sbr_port_req, sbr_port, ObiCfg)
  `OBI_ASSIGN_FROM_RSP(sbr_port, sbr_port_rsp, ObiCfg)

  for (genvar i = 0; i < NumMgrPorts; i++) begin : gen_mgr_ports_assign
    `OBI_ASSIGN_FROM_REQ(mgr_ports[i], mgr_ports_req[i], ObiCfg)
    `OBI_ASSIGN_TO_RSP(mgr_ports_rsp[i], mgr_ports[i], ObiCfg)
  end

  obi_demux #(
    .ObiCfg      ( ObiCfg      ),
    .obi_req_t   ( obi_req_t   ),
    .obi_rsp_t   ( obi_rsp_t   ),
    .NumMgrPorts ( NumMgrPorts ),
    .NumMaxTrans ( NumMaxTrans ),
    .select_t    ( select_t    )
  ) i_obi_demux (
    .clk_i,
    .rst_ni,
    .sbr_port_select_i,
    .sbr_port_req_i   ( sbr_port_req  ),
    .sbr_port_rsp_o   ( sbr_port_rsp  ),
    .mgr_ports_req_o  ( mgr_ports_req ),
    .mgr_ports_rsp_i  ( mgr_ports_rsp )
  );

endmodule

//*/