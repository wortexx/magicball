// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_user_spi_ctrl__Syms.h"


void Vtb_user_spi_ctrl___024root__trace_chg_0_sub_0(Vtb_user_spi_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_user_spi_ctrl___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root__trace_chg_0\n"); );
    // Init
    Vtb_user_spi_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_user_spi_ctrl___024root*>(voidSelf);
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_user_spi_ctrl___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_user_spi_ctrl___024root__trace_chg_0_sub_0(Vtb_user_spi_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_user_spi_ctrl__DOT__rst_ni));
        bufp->chgIData(oldp+1,(((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] 
                                 << 0x16U) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] 
                                              >> 0xaU))),32);
        bufp->chgBit(oldp+2,((1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] 
                                    >> 9U))));
        bufp->chgCData(oldp+3,((0xfU & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] 
                                        >> 5U))),4);
        bufp->chgIData(oldp+4,(((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] 
                                 << 0x1bU) | (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] 
                                              >> 5U))),32);
        bufp->chgCData(oldp+5,((7U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] 
                                      >> 2U))),3);
        bufp->chgBit(oldp+6,((1U & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] 
                                    >> 1U))));
        bufp->chgBit(oldp+7,((1U & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U])));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing));
        bufp->chgIData(oldp+9,(vlSelfRef.tb_user_spi_ctrl__DOT__prng_val1),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb_user_spi_ctrl__DOT__prng_val2),32);
        bufp->chgSData(oldp+11,((0xfffU & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] 
                                           >> 0xaU))),12);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        bufp->chgIData(oldp+12,((IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                         >> 7U))),32);
        bufp->chgCData(oldp+13,((7U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                               >> 4U)))),3);
        bufp->chgBit(oldp+14,((1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                             >> 3U)))));
        bufp->chgBit(oldp+15,((1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                             >> 2U)))));
        bufp->chgBit(oldp+16,((1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                             >> 1U)))));
        bufp->chgBit(oldp+17,((1U & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp))));
        bufp->chgBit(oldp+18,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_d));
        bufp->chgBit(oldp+19,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_d));
        bufp->chgBit(oldp+20,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_d));
        bufp->chgIData(oldp+21,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__reg_rdata),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+22,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q));
        bufp->chgBit(oldp+23,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q));
        bufp->chgIData(oldp+25,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__prng_out_q),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__state_q),32);
        bufp->chgBit(oldp+27,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rvalid_q));
        bufp->chgIData(oldp+28,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__rdata_q),32);
        bufp->chgBit(oldp+29,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req_accepted));
        bufp->chgIData(oldp+30,((vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__t2 
                                 ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__t2, 5U))),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__t1),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__i_xorshift__DOT__t2),32);
    }
    bufp->chgBit(oldp+33,(vlSelfRef.tb_user_spi_ctrl__DOT__clk_i));
    bufp->chgBit(oldp+34,(((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT____VdfgRegularize_h3a782e5c_0_4) 
                           & ((vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] 
                               >> 5U) & (0x1000U == 
                                         (0x3ffc00U 
                                          & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U]))))));
    bufp->chgBit(oldp+35,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__write_req));
    bufp->chgBit(oldp+36,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__read_req));
    bufp->chgBit(oldp+37,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_w));
    bufp->chgBit(oldp+38,(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__grant_r));
}

void Vtb_user_spi_ctrl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root__trace_cleanup\n"); );
    // Init
    Vtb_user_spi_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_user_spi_ctrl___024root*>(voidSelf);
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
