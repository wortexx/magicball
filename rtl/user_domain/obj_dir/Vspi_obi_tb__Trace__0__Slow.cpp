// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vspi_obi_tb__Syms.h"


VL_ATTR_COLD void Vspi_obi_tb___024root__trace_init_sub__TOP__0(Vspi_obi_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("spi_obi_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+31,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+33,0,"RESET_DURATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+35,0,"OBI_TIMEOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"SPI_DONE_TIMEOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"SPI_CTRL_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"SPI_TX_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"SPI_STATUS_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+6,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"sck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"mosi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"cs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"cs_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+40,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+41,0,"SPI_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+42,0,"SPI_CLK_DIVIDER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+37,0,"SPI_CTRL_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"SPI_TX_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"SPI_STATUS_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+14,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+15,0,"start_flag_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"tx_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"bit_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"spi_clk_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+8,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"start_flag_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"tx_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"bit_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+21,0,"spi_clk_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+22,0,"spi_clk_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"status_read_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"status_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+24,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"gnt_for_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"gnt_for_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"next_bit_idx_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vspi_obi_tb___024root__trace_init_top(Vspi_obi_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vspi_obi_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vspi_obi_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vspi_obi_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_obi_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vspi_obi_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vspi_obi_tb___024root__trace_register(Vspi_obi_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vspi_obi_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vspi_obi_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vspi_obi_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vspi_obi_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vspi_obi_tb___024root__trace_const_0_sub_0(Vspi_obi_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_obi_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root__trace_const_0\n"); );
    // Init
    Vspi_obi_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_obi_tb___024root*>(voidSelf);
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_obi_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_obi_tb___024root__trace_const_0_sub_0(Vspi_obi_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+31,(10.0));
    bufp->fullDouble(oldp+33,(20.0));
    bufp->fullIData(oldp+35,(0x3e8U),32);
    bufp->fullIData(oldp+36,(0x1388U),32);
    bufp->fullIData(oldp+37,(0U),32);
    bufp->fullIData(oldp+38,(4U),32);
    bufp->fullIData(oldp+39,(8U),32);
    bufp->fullIData(oldp+40,(0x20U),32);
    bufp->fullIData(oldp+41,(8U),32);
    bufp->fullIData(oldp+42,(4U),32);
}

VL_ATTR_COLD void Vspi_obi_tb___024root__trace_full_0_sub_0(Vspi_obi_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vspi_obi_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root__trace_full_0\n"); );
    // Init
    Vspi_obi_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vspi_obi_tb___024root*>(voidSelf);
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vspi_obi_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vspi_obi_tb___024root__trace_full_0_sub_0(Vspi_obi_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspi_obi_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspi_obi_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.spi_obi_tb__DOT__rst_ni));
    bufp->fullBit(oldp+2,(vlSelfRef.spi_obi_tb__DOT__req));
    bufp->fullIData(oldp+3,(vlSelfRef.spi_obi_tb__DOT__addr),32);
    bufp->fullIData(oldp+4,(vlSelfRef.spi_obi_tb__DOT__wdata),32);
    bufp->fullCData(oldp+5,(vlSelfRef.spi_obi_tb__DOT__be),4);
    bufp->fullBit(oldp+6,(vlSelfRef.spi_obi_tb__DOT__we));
    bufp->fullBit(oldp+7,(((~ (IData)(vlSelfRef.spi_obi_tb__DOT__we)) 
                           & (8U == vlSelfRef.spi_obi_tb__DOT__addr))));
    bufp->fullBit(oldp+8,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__rvalid_q));
    bufp->fullIData(oldp+9,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__rdata_q),32);
    bufp->fullBit(oldp+10,(vlSelfRef.spi_obi_tb__DOT__sck));
    bufp->fullBit(oldp+11,(vlSelfRef.spi_obi_tb__DOT__mosi));
    bufp->fullBit(oldp+12,(vlSelfRef.spi_obi_tb__DOT__cs));
    bufp->fullCData(oldp+13,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q),2);
    bufp->fullCData(oldp+14,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_d),2);
    bufp->fullBit(oldp+15,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_q));
    bufp->fullCData(oldp+16,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__tx_data_q),8);
    bufp->fullCData(oldp+17,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_q),3);
    bufp->fullCData(oldp+18,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q),3);
    bufp->fullBit(oldp+19,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__start_flag_d));
    bufp->fullCData(oldp+20,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__bit_cnt_d),3);
    bufp->fullCData(oldp+21,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_d),3);
    bufp->fullBit(oldp+22,((4U <= (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__spi_clk_cnt_q))));
    bufp->fullCData(oldp+23,((((3U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                               << 1U) | ((0U != (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                                         & (3U != (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q))))),2);
    bufp->fullBit(oldp+24,(((0U != (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                            & (3U != (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)))));
    bufp->fullBit(oldp+25,((3U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q))));
    bufp->fullCData(oldp+26,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__unnamedblk1__DOT__next_bit_idx_calc),4);
    bufp->fullBit(oldp+27,(vlSelfRef.spi_obi_tb__DOT__clk));
    bufp->fullBit(oldp+28,(vlSelfRef.spi_obi_tb__DOT__gnt));
    bufp->fullBit(oldp+29,(vlSelfRef.spi_obi_tb__DOT__dut__DOT__status_read_req));
    bufp->fullBit(oldp+30,(((IData)(vlSelfRef.spi_obi_tb__DOT__we) 
                            & ((0U == (IData)(vlSelfRef.spi_obi_tb__DOT__dut__DOT__state_q)) 
                               & ((4U == vlSelfRef.spi_obi_tb__DOT__addr) 
                                  | (0U == vlSelfRef.spi_obi_tb__DOT__addr))))));
}
