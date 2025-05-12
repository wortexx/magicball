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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_xorshift__DOT__rst_ni));
        bufp->chgIData(oldp+1,(((vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] 
                                 << 0x16U) | (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
                                              >> 0xaU))),32);
        bufp->chgBit(oldp+2,((1U & (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
                                    >> 9U))));
        bufp->chgCData(oldp+3,((0xfU & (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
                                        >> 5U))),4);
        bufp->chgIData(oldp+4,(((vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
                                 << 0x1bU) | (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
                                              >> 5U))),32);
        bufp->chgCData(oldp+5,((7U & (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
                                      >> 2U))),3);
        bufp->chgBit(oldp+6,((1U & (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
                                    >> 1U))));
        bufp->chgBit(oldp+7,((1U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U])));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_xorshift__DOT__req_ongoing));
        bufp->chgBit(oldp+9,((1U & (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
                                    & (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
                                       >> 9U)))));
        bufp->chgCData(oldp+10,((7U & (vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
                                       >> 0xcU))),3);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val),32);
        bufp->chgBit(oldp+12,(vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__read_error));
        bufp->chgIData(oldp+13,(vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prev_prn_val),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__invalid_addr),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+15,(vlSelfRef.tb_xorshift__DOT__dut__DOT__is_ctrl_write));
        bufp->chgBit(oldp+16,(vlSelfRef.tb_xorshift__DOT__dut__DOT__is_rdata_read));
        bufp->chgBit(oldp+17,(vlSelfRef.tb_xorshift__DOT__dut__DOT__read_req));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+18,(vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_d),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_xorshift__DOT__dut__DOT__t1),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_xorshift__DOT__dut__DOT__t2),32);
        bufp->chgBit(oldp+22,(vlSelfRef.tb_xorshift__DOT__dut__DOT__rvalid_q));
        bufp->chgIData(oldp+23,(vlSelfRef.tb_xorshift__DOT__dut__DOT__rdata_q),32);
    }
    bufp->chgBit(oldp+24,(vlSelfRef.tb_xorshift__DOT__clk_i));
    bufp->chgIData(oldp+25,((IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                     >> 7U))),32);
    bufp->chgCData(oldp+26,((7U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                           >> 4U)))),3);
    bufp->chgBit(oldp+27,((1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                         >> 3U)))));
    bufp->chgBit(oldp+28,((1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                         >> 2U)))));
    bufp->chgBit(oldp+29,((1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                         >> 1U)))));
    bufp->chgBit(oldp+30,((1U & (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut))));
    bufp->chgBit(oldp+31,(vlSelfRef.tb_xorshift__DOT__dut__DOT__trigger_prng_update));
    bufp->chgBit(oldp+32,(vlSelfRef.tb_xorshift__DOT__dut__DOT__read_granted_this_cycle));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
