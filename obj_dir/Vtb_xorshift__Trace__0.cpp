// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_xorshift__Syms.h"


void Vtb_xorshift___024root__trace_chg_0_sub_0(Vtb_xorshift___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_xorshift___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root__trace_chg_0\n"); );
    // Init
    Vtb_xorshift___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_xorshift___024root*>(voidSelf);
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_xorshift___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_xorshift___024root__trace_chg_0_sub_0(Vtb_xorshift___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_xorshift__DOT__dut__DOT__state_q),32);
        bufp->chgIData(oldp+1,((vlSelfRef.tb_xorshift__DOT__dut__DOT__t2 
                                ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_xorshift__DOT__dut__DOT__t2, 5U))),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_xorshift__DOT__dut__DOT__t1),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_xorshift__DOT__dut__DOT__t2),32);
    }
    bufp->chgBit(oldp+4,(vlSelfRef.tb_xorshift__DOT__clk_i));
    bufp->chgBit(oldp+5,(vlSelfRef.tb_xorshift__DOT__rst_ni));
    bufp->chgBit(oldp+6,(vlSelfRef.tb_xorshift__DOT__en_i));
}

void Vtb_xorshift___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root__trace_cleanup\n"); );
    // Init
    Vtb_xorshift___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_xorshift___024root*>(voidSelf);
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
