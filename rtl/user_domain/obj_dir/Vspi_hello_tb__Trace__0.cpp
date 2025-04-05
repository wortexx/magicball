// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_hello_tb__Syms.h"


void Vspi_hello_tb___024root__trace_chg_0_sub_0(Vspi_hello_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vspi_hello_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root__trace_chg_0\n"); );
    // Init
    Vspi_hello_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_hello_tb___024root*>(voidSelf);
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vspi_hello_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vspi_hello_tb___024root__trace_chg_0_sub_0(Vspi_hello_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.spi_hello_tb__DOT__rst_n));
        bufp->chgBit(oldp+1,(vlSelfRef.spi_hello_tb__DOT__req));
        bufp->chgIData(oldp+2,(vlSelfRef.spi_hello_tb__DOT__addr),32);
        bufp->chgIData(oldp+3,(vlSelfRef.spi_hello_tb__DOT__wdata),32);
        bufp->chgBit(oldp+4,(vlSelfRef.spi_hello_tb__DOT__we));
        bufp->chgBit(oldp+5,(((8U == vlSelfRef.spi_hello_tb__DOT__addr) 
                              & ((~ (IData)(vlSelfRef.spi_hello_tb__DOT__we)) 
                                 & (IData)(vlSelfRef.spi_hello_tb__DOT__req)))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+6,((((IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__done) 
                                 << 1U) | (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__busy))),32);
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__tx_reg) 
                                    >> (7U & ((IData)(7U) 
                                              - (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_q)))))));
        bufp->chgBit(oldp+8,(vlSelfRef.spi_hello_tb__DOT__cs));
        bufp->chgCData(oldp+9,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__tx_reg),8);
        bufp->chgCData(oldp+10,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_q),3);
        bufp->chgCData(oldp+11,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_d),3);
        bufp->chgBit(oldp+12,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__start_flag));
        bufp->chgBit(oldp+13,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__busy));
        bufp->chgBit(oldp+14,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__done));
        bufp->chgCData(oldp+15,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q),2);
        bufp->chgCData(oldp+16,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_d),2);
    }
    bufp->chgBit(oldp+17,(vlSelfRef.spi_hello_tb__DOT__clk));
    bufp->chgBit(oldp+18,(vlSelfRef.spi_hello_tb__DOT__sck));
}

void Vspi_hello_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root__trace_cleanup\n"); );
    // Init
    Vspi_hello_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_hello_tb___024root*>(voidSelf);
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
