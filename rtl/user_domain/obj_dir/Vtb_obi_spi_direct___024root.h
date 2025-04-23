// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_obi_spi_direct.h for the primary calling header

#ifndef VERILATED_VTB_OBI_SPI_DIRECT___024ROOT_H_
#define VERILATED_VTB_OBI_SPI_DIRECT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_obi_spi_direct__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_obi_spi_direct___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_obi_spi_direct__DOT__clk;
    CData/*0:0*/ tb_obi_spi_direct__DOT__rst_ni;
    CData/*0:0*/ tb_obi_spi_direct__DOT__req;
    CData/*3:0*/ tb_obi_spi_direct__DOT__be;
    CData/*0:0*/ tb_obi_spi_direct__DOT__we;
    CData/*0:0*/ tb_obi_spi_direct__DOT__gnt;
    CData/*0:0*/ tb_obi_spi_direct__DOT__sck_o;
    CData/*0:0*/ tb_obi_spi_direct__DOT__mosi_o;
    CData/*0:0*/ tb_obi_spi_direct__DOT__cs_no;
    CData/*0:0*/ tb_obi_spi_direct__DOT__req_ongoing;
    CData/*0:0*/ tb_obi_spi_direct__DOT__dut__DOT__cs_o;
    CData/*1:0*/ tb_obi_spi_direct__DOT__dut__DOT__state_q;
    CData/*1:0*/ tb_obi_spi_direct__DOT__dut__DOT__state_d;
    CData/*0:0*/ tb_obi_spi_direct__DOT__dut__DOT__start_flag_q;
    CData/*7:0*/ tb_obi_spi_direct__DOT__dut__DOT__tx_data_q;
    CData/*2:0*/ tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q;
    CData/*2:0*/ tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q;
    CData/*0:0*/ tb_obi_spi_direct__DOT__dut__DOT__rvalid_q;
    CData/*0:0*/ tb_obi_spi_direct__DOT__dut__DOT__start_flag_d;
    CData/*7:0*/ tb_obi_spi_direct__DOT__dut__DOT__tx_data_d;
    CData/*2:0*/ tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_d;
    CData/*2:0*/ tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_d;
    CData/*0:0*/ tb_obi_spi_direct__DOT__dut__DOT__status_read_req;
    CData/*3:0*/ tb_obi_spi_direct__DOT__dut__DOT__unnamedblk1__DOT__next_bit_idx_calc;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_obi_spi_direct__DOT__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_obi_spi_direct__DOT__addr;
    IData/*31:0*/ tb_obi_spi_direct__DOT__wdata;
    IData/*31:0*/ tb_obi_spi_direct__DOT__dut__DOT__rdata_q;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hadee6d82__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_obi_spi_direct__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_obi_spi_direct___024root(Vtb_obi_spi_direct__Syms* symsp, const char* v__name);
    ~Vtb_obi_spi_direct___024root();
    VL_UNCOPYABLE(Vtb_obi_spi_direct___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
