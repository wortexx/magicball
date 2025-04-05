// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_hello_tb.h for the primary calling header

#include "Vspi_hello_tb__pch.h"
#include "Vspi_hello_tb__Syms.h"
#include "Vspi_hello_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vspi_hello_tb___024root___eval_initial__TOP__Vtiming__0(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_spi_hello_tb__DOT__write_spi_byte__0__data_in;
    __Vtask_spi_hello_tb__DOT__write_spi_byte__0__data_in = 0;
    CData/*7:0*/ __Vtask_spi_hello_tb__DOT__write_spi_byte__1__data_in;
    __Vtask_spi_hello_tb__DOT__write_spi_byte__1__data_in = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x656c6c6fU;
    __Vtemp_1[2U] = 0x70695f68U;
    __Vtemp_1[3U] = 0x73U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.spi_hello_tb__DOT__rst_n = 0U;
    vlSelfRef.spi_hello_tb__DOT__req = 0U;
    vlSelfRef.spi_hello_tb__DOT__we = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "spi_hello_tb.sv", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.spi_hello_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "spi_hello_tb.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_spi_hello_tb__DOT__write_spi_byte__0__data_in = 0U;
    vlSelfRef.spi_hello_tb__DOT__addr = 4U;
    vlSelfRef.spi_hello_tb__DOT__wdata = __Vtask_spi_hello_tb__DOT__write_spi_byte__0__data_in;
    vlSelfRef.spi_hello_tb__DOT__we = 1U;
    vlSelfRef.spi_hello_tb__DOT__req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "spi_hello_tb.sv", 
                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.spi_hello_tb__DOT__req = 0U;
    vlSelfRef.spi_hello_tb__DOT__addr = 0U;
    vlSelfRef.spi_hello_tb__DOT__wdata = 1U;
    vlSelfRef.spi_hello_tb__DOT__we = 1U;
    vlSelfRef.spi_hello_tb__DOT__req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "spi_hello_tb.sv", 
                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.spi_hello_tb__DOT__req = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "spi_hello_tb.sv", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "spi_hello_tb.sv", 
                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_spi_hello_tb__DOT__write_spi_byte__1__data_in = 0xafU;
    vlSelfRef.spi_hello_tb__DOT__addr = 4U;
    vlSelfRef.spi_hello_tb__DOT__wdata = __Vtask_spi_hello_tb__DOT__write_spi_byte__1__data_in;
    vlSelfRef.spi_hello_tb__DOT__we = 1U;
    vlSelfRef.spi_hello_tb__DOT__req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "spi_hello_tb.sv", 
                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.spi_hello_tb__DOT__req = 0U;
    vlSelfRef.spi_hello_tb__DOT__addr = 0U;
    vlSelfRef.spi_hello_tb__DOT__wdata = 1U;
    vlSelfRef.spi_hello_tb__DOT__we = 1U;
    vlSelfRef.spi_hello_tb__DOT__req = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "spi_hello_tb.sv", 
                                         83);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.spi_hello_tb__DOT__req = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "spi_hello_tb.sv", 
                                         87);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4c4b40ULL, 
                                         nullptr, "spi_hello_tb.sv", 
                                         62);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("spi_hello_tb.sv", 64, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspi_hello_tb___024root___dump_triggers__act(Vspi_hello_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vspi_hello_tb___024root___eval_triggers__act(Vspi_hello_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.spi_hello_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__spi_hello_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.spi_hello_tb__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__spi_hello_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__spi_hello_tb__DOT__clk__0 
        = vlSelfRef.spi_hello_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__spi_hello_tb__DOT__rst_n__0 
        = vlSelfRef.spi_hello_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspi_hello_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
