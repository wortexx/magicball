// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_obi_spi_peripheral.h for the primary calling header

#ifndef VERILATED_VTB_OBI_SPI_PERIPHERAL___024ROOT_H_
#define VERILATED_VTB_OBI_SPI_PERIPHERAL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_obi_spi_peripheral___024unit;


class Vtb_obi_spi_peripheral__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_obi_spi_peripheral___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_obi_spi_peripheral___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__clk_i;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__rst_ni;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__req_i;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__we_i;
    CData/*3:0*/ tb_obi_spi_peripheral__DOT__be_i;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__gnt_o;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__sck_o;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__mosi_o;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__cs_no;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__req_ongoing;
    CData/*1:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__state_q;
    CData/*1:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__state_d;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_q;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_d;
    CData/*7:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_q;
    CData/*7:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_d;
    CData/*2:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q;
    CData/*2:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_d;
    CData/*1:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q;
    CData/*1:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_d;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle;
    CData/*1:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__status_bits;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__done_q;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__read_to_status_reg_granted_this_cycle;
    CData/*0:0*/ tb_obi_spi_peripheral__DOT__dut__DOT____VdfgRegularize_h62409202_0_3;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_obi_spi_peripheral__DOT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_obi_spi_peripheral__DOT__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_obi_spi_peripheral__DOT__addr_i;
    IData/*31:0*/ tb_obi_spi_peripheral__DOT__wdata_i;
    IData/*31:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal;
    IData/*31:0*/ tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2b702792__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_obi_spi_peripheral__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_obi_spi_peripheral___024root(Vtb_obi_spi_peripheral__Syms* symsp, const char* v__name);
    ~Vtb_obi_spi_peripheral___024root();
    VL_UNCOPYABLE(Vtb_obi_spi_peripheral___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
