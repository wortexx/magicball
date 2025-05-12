// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_xorshift.h for the primary calling header

#ifndef VERILATED_VTB_XORSHIFT___024ROOT_H_
#define VERILATED_VTB_XORSHIFT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_xorshift_soc_ctrl_reg_pkg;


class Vtb_xorshift__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_xorshift___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_xorshift_soc_ctrl_reg_pkg* __PVT__soc_ctrl_reg_pkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_xorshift__DOT__clk_i;
    CData/*0:0*/ tb_xorshift__DOT__rst_ni;
    CData/*0:0*/ tb_xorshift__DOT__req_ongoing;
    CData/*0:0*/ tb_xorshift__DOT__unnamedblk1__DOT__read_error;
    CData/*0:0*/ tb_xorshift__DOT__dut__DOT__trigger_prng_update;
    CData/*0:0*/ tb_xorshift__DOT__dut__DOT__rvalid_q;
    CData/*0:0*/ tb_xorshift__DOT__dut__DOT__read_granted_this_cycle;
    CData/*0:0*/ tb_xorshift__DOT__dut__DOT__is_ctrl_write;
    CData/*0:0*/ tb_xorshift__DOT__dut__DOT__is_rdata_read;
    CData/*0:0*/ tb_xorshift__DOT__dut__DOT__read_req;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_xorshift__DOT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_xorshift__DOT__rst_ni__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_xorshift__DOT__unnamedblk1__DOT__prn_val;
    IData/*31:0*/ tb_xorshift__DOT__unnamedblk1__DOT__prev_prn_val;
    IData/*31:0*/ tb_xorshift__DOT__unnamedblk1__DOT__invalid_addr;
    IData/*31:0*/ tb_xorshift__DOT__dut__DOT__prng_state_q;
    IData/*31:0*/ tb_xorshift__DOT__dut__DOT__prng_state_d;
    IData/*31:0*/ tb_xorshift__DOT__dut__DOT__t1;
    IData/*31:0*/ tb_xorshift__DOT__dut__DOT__t2;
    IData/*31:0*/ tb_xorshift__DOT__dut__DOT__rdata_q;
    IData/*31:0*/ __VactIterCount;
    VlWide<3>/*73:0*/ tb_xorshift__DOT__obi_req_i_to_dut;
    QData/*38:0*/ tb_xorshift__DOT__obi_rsp_o_from_dut;
    QData/*38:0*/ __Vtrigprevexpr___TOP__tb_xorshift__DOT__obi_rsp_o_from_dut__0;
    QData/*38:0*/ __Vtrigprevexpr___TOP__tb_xorshift__DOT__obi_rsp_o_from_dut__1;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he90bc7e9__0;
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

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
