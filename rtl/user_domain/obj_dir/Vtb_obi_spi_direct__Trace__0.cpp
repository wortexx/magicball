// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_obi_spi_direct__Syms.h"


void Vtb_obi_spi_direct___024root__trace_chg_0_sub_0(Vtb_obi_spi_direct___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_obi_spi_direct___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root__trace_chg_0\n"); );
    // Init
    Vtb_obi_spi_direct___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_obi_spi_direct___024root*>(voidSelf);
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_obi_spi_direct___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_obi_spi_direct___024root__trace_chg_0_sub_0(Vtb_obi_spi_direct___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_obi_spi_direct__DOT__rst_ni));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_obi_spi_direct__DOT__req));
        bufp->chgIData(oldp+2,(vlSelfRef.tb_obi_spi_direct__DOT__addr),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_obi_spi_direct__DOT__wdata),32);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_obi_spi_direct__DOT__be),4);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_obi_spi_direct__DOT__we));
        bufp->chgBit(oldp+6,(vlSelfRef.tb_obi_spi_direct__DOT__req_ongoing));
        bufp->chgBit(oldp+7,(((~ (IData)(vlSelfRef.tb_obi_spi_direct__DOT__we)) 
                              & (8U == vlSelfRef.tb_obi_spi_direct__DOT__addr))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+8,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rvalid_q));
        bufp->chgIData(oldp+9,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__rdata_q),32);
        bufp->chgBit(oldp+10,(vlSelfRef.tb_obi_spi_direct__DOT__sck_o));
        bufp->chgBit(oldp+11,(vlSelfRef.tb_obi_spi_direct__DOT__mosi_o));
        bufp->chgBit(oldp+12,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__cs_o));
        bufp->chgCData(oldp+13,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q),2);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_d),2);
        bufp->chgBit(oldp+15,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_q));
        bufp->chgCData(oldp+16,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__tx_data_q),8);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_q),3);
        bufp->chgCData(oldp+18,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q),3);
        bufp->chgBit(oldp+19,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__start_flag_d));
        bufp->chgCData(oldp+20,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__bit_cnt_d),3);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_d),3);
        bufp->chgBit(oldp+22,((4U <= (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__spi_clk_cnt_q))));
        bufp->chgCData(oldp+23,((((3U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)) 
                                  << 1U) | ((0U != (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)) 
                                            & (3U != (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q))))),2);
        bufp->chgBit(oldp+24,(((0U != (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)) 
                               & (3U != (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)))));
        bufp->chgBit(oldp+25,((3U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q))));
        bufp->chgCData(oldp+26,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__unnamedblk1__DOT__next_bit_idx_calc),4);
    }
    bufp->chgBit(oldp+27,(vlSelfRef.tb_obi_spi_direct__DOT__clk));
    bufp->chgBit(oldp+28,(vlSelfRef.tb_obi_spi_direct__DOT__gnt));
    bufp->chgBit(oldp+29,(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__status_read_req));
    bufp->chgBit(oldp+30,(((IData)(vlSelfRef.tb_obi_spi_direct__DOT__we) 
                           & ((0U == (IData)(vlSelfRef.tb_obi_spi_direct__DOT__dut__DOT__state_q)) 
                              & ((4U == vlSelfRef.tb_obi_spi_direct__DOT__addr) 
                                 | (0U == vlSelfRef.tb_obi_spi_direct__DOT__addr))))));
}

void Vtb_obi_spi_direct___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_direct___024root__trace_cleanup\n"); );
    // Init
    Vtb_obi_spi_direct___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_obi_spi_direct___024root*>(voidSelf);
    Vtb_obi_spi_direct__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
