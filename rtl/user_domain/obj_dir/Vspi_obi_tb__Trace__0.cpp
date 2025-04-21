// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_obi_tb__Syms.h"


void Vspi_obi_tb___024root__trace_chg_0_sub_0(Vspi_obi_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vspi_obi_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root__trace_chg_0\n"); );
    // Init
    Vspi_obi_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_obi_tb___024root*>(voidSelf);
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vspi_obi_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vspi_obi_tb___024root__trace_chg_0_sub_0(Vspi_obi_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.spi_obi_tb__DOT__rst_ni));
        bufp->chgBit(oldp+1,(vlSelfRef.spi_obi_tb__DOT__req));
        bufp->chgIData(oldp+2,(vlSelfRef.spi_obi_tb__DOT__addr),32);
        bufp->chgIData(oldp+3,(vlSelfRef.spi_obi_tb__DOT__wdata),32);
        bufp->chgCData(oldp+4,(vlSelfRef.spi_obi_tb__DOT__be),4);
        bufp->chgBit(oldp+5,(vlSelfRef.spi_obi_tb__DOT__we));
        bufp->chgBit(oldp+6,(((~ (IData)(vlSelfRef.spi_obi_tb__DOT__we)) 
                              & (8U == vlSelfRef.spi_obi_tb__DOT__addr))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+7,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__rvalid_q));
        bufp->chgIData(oldp+8,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__rdata_q),32);
        bufp->chgBit(oldp+9,(vlSelfRef.spi_obi_tb__DOT__sck));
        bufp->chgBit(oldp+10,(vlSelfRef.spi_obi_tb__DOT__mosi));
        bufp->chgBit(oldp+11,(vlSelfRef.spi_obi_tb__DOT__cs));
        bufp->chgCData(oldp+12,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q),2);
        bufp->chgCData(oldp+13,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_d),2);
        bufp->chgBit(oldp+14,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_q));
        bufp->chgCData(oldp+15,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__tx_data_q),8);
        bufp->chgCData(oldp+16,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_q),3);
        bufp->chgCData(oldp+17,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q),3);
        bufp->chgBit(oldp+18,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_d));
        bufp->chgCData(oldp+19,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_d),3);
        bufp->chgCData(oldp+20,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_d),3);
        bufp->chgBit(oldp+21,((4U <= (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q))));
        bufp->chgCData(oldp+22,((((3U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                                  << 1U) | ((0U != (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                                            & (3U != (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q))))),2);
        bufp->chgBit(oldp+23,(((0U != (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                               & (3U != (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)))));
        bufp->chgBit(oldp+24,((3U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q))));
        bufp->chgCData(oldp+25,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__unnamedblk1__DOT__next_bit_idx_calc),4);
    }
    bufp->chgBit(oldp+26,(vlSelfRef.spi_obi_tb__DOT__clk));
    bufp->chgBit(oldp+27,(vlSelfRef.spi_obi_tb__DOT__gnt));
    bufp->chgBit(oldp+28,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__status_read_req));
    bufp->chgBit(oldp+29,(((IData)(vlSelfRef.spi_obi_tb__DOT__we) 
                           & ((0U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                              & ((4U == vlSelfRef.spi_obi_tb__DOT__addr) 
                                 | (0U == vlSelfRef.spi_obi_tb__DOT__addr))))));
}

void Vspi_obi_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root__trace_cleanup\n"); );
    // Init
    Vspi_obi_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_obi_tb___024root*>(voidSelf);
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
