// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspi_hello_tb.h for the primary calling header

#ifndef VERILATED_VSPI_HELLO_TB___024ROOT_H_
#define VERILATED_VSPI_HELLO_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vspi_hello_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspi_hello_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ spi_hello_tb__DOT__clk;
    CData/*0:0*/ spi_hello_tb__DOT__rst_n;
    CData/*0:0*/ spi_hello_tb__DOT__req;
    CData/*0:0*/ spi_hello_tb__DOT__we;
    CData/*0:0*/ spi_hello_tb__DOT__sck;
    CData/*0:0*/ spi_hello_tb__DOT__cs;
    CData/*7:0*/ spi_hello_tb__DOT__dut__DOT__tx_reg;
    CData/*2:0*/ spi_hello_tb__DOT__dut__DOT__bit_cnt_q;
    CData/*2:0*/ spi_hello_tb__DOT__dut__DOT__bit_cnt_d;
    CData/*0:0*/ spi_hello_tb__DOT__dut__DOT__start_flag;
    CData/*0:0*/ spi_hello_tb__DOT__dut__DOT__busy;
    CData/*0:0*/ spi_hello_tb__DOT__dut__DOT__done;
    CData/*1:0*/ spi_hello_tb__DOT__dut__DOT__state_q;
    CData/*1:0*/ spi_hello_tb__DOT__dut__DOT__state_d;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_hello_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__spi_hello_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ spi_hello_tb__DOT__addr;
    IData/*31:0*/ spi_hello_tb__DOT__wdata;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vspi_hello_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vspi_hello_tb___024root(Vspi_hello_tb__Syms* symsp, const char* v__name);
    ~Vspi_hello_tb___024root();
    VL_UNCOPYABLE(Vspi_hello_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
