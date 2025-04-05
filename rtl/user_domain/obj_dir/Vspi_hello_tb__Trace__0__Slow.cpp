// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_hello_tb__Syms.h"


VL_ATTR_COLD void Vspi_hello_tb___024root__trace_init_sub__TOP__0(Vspi_hello_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("spi_hello_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"sck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"mosi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"cs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"SPI_CTRL_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+21,0,"SPI_TX_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+22,0,"SPI_STATUS_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+10,0,"tx_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"bit_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+12,0,"bit_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+13,0,"start_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_hello_tb___024root__trace_init_top(Vspi_hello_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vspi_hello_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vspi_hello_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vspi_hello_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_hello_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_hello_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vspi_hello_tb___024root__trace_register(Vspi_hello_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vspi_hello_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vspi_hello_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vspi_hello_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vspi_hello_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vspi_hello_tb___024root__trace_const_0_sub_0(Vspi_hello_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_hello_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root__trace_const_0\n"); );
    // Init
    Vspi_hello_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_hello_tb___024root*>(voidSelf);
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_hello_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_hello_tb___024root__trace_const_0_sub_0(Vspi_hello_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+20,(0U),32);
    bufp->fullIData(oldp+21,(4U),32);
    bufp->fullIData(oldp+22,(8U),32);
}

VL_ATTR_COLD void Vspi_hello_tb___024root__trace_full_0_sub_0(Vspi_hello_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_hello_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root__trace_full_0\n"); );
    // Init
    Vspi_hello_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_hello_tb___024root*>(voidSelf);
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_hello_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_hello_tb___024root__trace_full_0_sub_0(Vspi_hello_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_hello_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_hello_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.spi_hello_tb__DOT__rst_n));
    bufp->fullBit(oldp+2,(vlSelfRef.spi_hello_tb__DOT__req));
    bufp->fullIData(oldp+3,(vlSelfRef.spi_hello_tb__DOT__addr),32);
    bufp->fullIData(oldp+4,(vlSelfRef.spi_hello_tb__DOT__wdata),32);
    bufp->fullBit(oldp+5,(vlSelfRef.spi_hello_tb__DOT__we));
    bufp->fullBit(oldp+6,(((8U == vlSelfRef.spi_hello_tb__DOT__addr) 
                           & ((~ (IData)(vlSelfRef.spi_hello_tb__DOT__we)) 
                              & (IData)(vlSelfRef.spi_hello_tb__DOT__req)))));
    bufp->fullIData(oldp+7,((((IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__done) 
                              << 1U) | (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__busy))),32);
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__tx_reg) 
                                 >> (7U & ((IData)(7U) 
                                           - (IData)(vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_q)))))));
    bufp->fullBit(oldp+9,(vlSelfRef.spi_hello_tb__DOT__cs));
    bufp->fullCData(oldp+10,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__tx_reg),8);
    bufp->fullCData(oldp+11,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_q),3);
    bufp->fullCData(oldp+12,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__bit_cnt_d),3);
    bufp->fullBit(oldp+13,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__start_flag));
    bufp->fullBit(oldp+14,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__busy));
    bufp->fullBit(oldp+15,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__done));
    bufp->fullCData(oldp+16,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_q),2);
    bufp->fullCData(oldp+17,(vlSelfRef.spi_hello_tb__DOT__dut__DOT__state_d),2);
    bufp->fullBit(oldp+18,(vlSelfRef.spi_hello_tb__DOT__clk));
    bufp->fullBit(oldp+19,(vlSelfRef.spi_hello_tb__DOT__sck));
}
