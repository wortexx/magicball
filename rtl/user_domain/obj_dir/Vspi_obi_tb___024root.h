// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_obi_tb.h for the primary calling header

#ifndef VERILATED_VSPI_OBI_TB___024ROOT_H_
#define VERILATED_VSPI_OBI_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vspi_obi_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspi_obi_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ spi_obi_tb__DOT__clk;
    CData/*0:0*/ spi_obi_tb__DOT__rst_ni;
    CData/*0:0*/ spi_obi_tb__DOT__sck;
    CData/*0:0*/ spi_obi_tb__DOT__req;
    CData/*3:0*/ spi_obi_tb__DOT__be;
    CData/*0:0*/ spi_obi_tb__DOT__we;
    CData/*0:0*/ spi_obi_tb__DOT__gnt;
    CData/*0:0*/ spi_obi_tb__DOT__mosi;
    CData/*0:0*/ spi_obi_tb__DOT__cs;
    CData/*1:0*/ spi_obi_tb__DOT__dut__DOT__state_q;
    CData/*1:0*/ spi_obi_tb__DOT__dut__DOT__state_d;
    CData/*0:0*/ spi_obi_tb__DOT__dut__DOT__start_flag_q;
    CData/*7:0*/ spi_obi_tb__DOT__dut__DOT__tx_data_q;
    CData/*2:0*/ spi_obi_tb__DOT__dut__DOT__bit_cnt_q;
    CData/*2:0*/ spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q;
    CData/*0:0*/ spi_obi_tb__DOT__dut__DOT__rvalid_q;
    CData/*0:0*/ spi_obi_tb__DOT__dut__DOT__start_flag_d;
    CData/*7:0*/ spi_obi_tb__DOT__dut__DOT__tx_data_d;
    CData/*2:0*/ spi_obi_tb__DOT__dut__DOT__bit_cnt_d;
    CData/*2:0*/ spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_d;
    CData/*0:0*/ spi_obi_tb__DOT__dut__DOT__status_read_req;
    CData/*3:0*/ spi_obi_tb__DOT__dut__DOT__unnamedblk1__DOT__next_bit_idx_calc;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_obi_tb__DOT__sck__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_obi_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_obi_tb__DOT__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ spi_obi_tb__DOT__addr;
    IData/*31:0*/ spi_obi_tb__DOT__wdata;
    IData/*31:0*/ spi_obi_tb__DOT__dut__DOT__rdata_q;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4919987f__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vspi_obi_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vspi_obi_tb___024root(Vspi_obi_tb__Syms* symsp, const char* v__name);
    ~Vspi_obi_tb___024root();
    VL_UNCOPYABLE(Vspi_obi_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
