// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_xorshift.h for the primary calling header

#ifndef VERILATED_VTB_XORSHIFT___024ROOT_H_
#define VERILATED_VTB_XORSHIFT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_xorshift__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_xorshift___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_xorshift__DOT__clk_i;
    CData/*0:0*/ tb_xorshift__DOT__rst_ni;
    CData/*0:0*/ tb_xorshift__DOT__en_i;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_xorshift__DOT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_xorshift__DOT__rst_ni__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_xorshift__DOT__dut__DOT__state_q;
    IData/*31:0*/ tb_xorshift__DOT__dut__DOT__t1;
    IData/*31:0*/ tb_xorshift__DOT__dut__DOT__t2;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he90bc7e9__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_xorshift__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_xorshift___024root(Vtb_xorshift__Syms* symsp, const char* v__name);
    ~Vtb_xorshift___024root();
    VL_UNCOPYABLE(Vtb_xorshift___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
