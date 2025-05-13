// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_obi_spi_peripheral__Syms.h"


VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root__trace_init_sub__TOP__0(Vtb_obi_spi_peripheral___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_obi_spi_peripheral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declDouble(c+32,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declDouble(c+34,0,"RESET_DURATION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::DOUBLE, false,-1);
    tracep->declBus(c+36,0,"OBI_TIMEOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"SPI_DONE_TIMEOUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"SPI_CTRL_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+39,0,"SPI_TX_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+40,0,"SPI_STATUS_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+27,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"req_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"we_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"be_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"addr_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"wdata_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"gnt_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rvalid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"rdata_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"sck_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"mosi_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cs_no",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"req_ongoing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"gnt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"sck_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"mosi_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"cs_no",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+42,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+43,0,"SPI_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+44,0,"SPI_CLK_DIVIDER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+38,0,"SPI_CTRL_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+39,0,"SPI_TX_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+40,0,"SPI_STATUS_ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+12,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+13,0,"state_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+14,0,"start_flag_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"start_flag_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"tx_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"tx_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+17,0,"bit_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"bit_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"spi_clk_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+20,0,"spi_clk_cnt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8,0,"rvalid_q_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"rdata_q_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"read_granted_in_prev_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"data_latched_on_grant",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"spi_clk_phase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"status_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+25,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"gnt_for_read_comb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"gnt_for_write_comb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"read_to_status_reg_granted_this_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root__trace_init_top(Vtb_obi_spi_peripheral___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_obi_spi_peripheral___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_obi_spi_peripheral___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_obi_spi_peripheral___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root__trace_register(Vtb_obi_spi_peripheral___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_obi_spi_peripheral___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_obi_spi_peripheral___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_obi_spi_peripheral___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_obi_spi_peripheral___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root__trace_const_0_sub_0(Vtb_obi_spi_peripheral___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root__trace_const_0\n"); );
    // Init
    Vtb_obi_spi_peripheral___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_obi_spi_peripheral___024root*>(voidSelf);
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_obi_spi_peripheral___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root__trace_const_0_sub_0(Vtb_obi_spi_peripheral___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullDouble(oldp+32,(4.99999999999999929e+01));
    bufp->fullDouble(oldp+34,(9.99999999999999858e+01));
    bufp->fullIData(oldp+36,(0x7d0U),32);
    bufp->fullIData(oldp+37,(0x2710U),32);
    bufp->fullSData(oldp+38,(0U),12);
    bufp->fullSData(oldp+39,(4U),12);
    bufp->fullSData(oldp+40,(8U),12);
    bufp->fullBit(oldp+41,(vlSelfRef.tb_obi_spi_peripheral__DOT__cs_no));
    bufp->fullIData(oldp+42,(0x20U),32);
    bufp->fullIData(oldp+43,(8U),32);
    bufp->fullIData(oldp+44,(2U),32);
}

VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root__trace_full_0_sub_0(Vtb_obi_spi_peripheral___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root__trace_full_0\n"); );
    // Init
    Vtb_obi_spi_peripheral___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_obi_spi_peripheral___024root*>(voidSelf);
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_obi_spi_peripheral___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root__trace_full_0_sub_0(Vtb_obi_spi_peripheral___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_obi_spi_peripheral__DOT__rst_ni));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_obi_spi_peripheral__DOT__we_i));
    bufp->fullCData(oldp+4,(vlSelfRef.tb_obi_spi_peripheral__DOT__be_i),4);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_obi_spi_peripheral__DOT__wdata_i),32);
    bufp->fullBit(oldp+7,(vlSelfRef.tb_obi_spi_peripheral__DOT__req_ongoing));
    bufp->fullBit(oldp+8,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rvalid_q_internal));
    bufp->fullIData(oldp+9,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__rdata_q_internal),32);
    bufp->fullBit(oldp+10,(vlSelfRef.tb_obi_spi_peripheral__DOT__sck_o));
    bufp->fullBit(oldp+11,(vlSelfRef.tb_obi_spi_peripheral__DOT__mosi_o));
    bufp->fullCData(oldp+12,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q),2);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d),2);
    bufp->fullBit(oldp+14,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_q));
    bufp->fullBit(oldp+15,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_d));
    bufp->fullCData(oldp+16,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_q),8);
    bufp->fullCData(oldp+17,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q),3);
    bufp->fullCData(oldp+18,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_d),3);
    bufp->fullCData(oldp+19,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q),2);
    bufp->fullCData(oldp+20,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_d),2);
    bufp->fullBit(oldp+21,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__read_granted_in_prev_cycle));
    bufp->fullIData(oldp+22,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__data_latched_on_grant),32);
    bufp->fullBit(oldp+23,((2U <= (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q))));
    bufp->fullCData(oldp+24,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__status_bits),2);
    bufp->fullBit(oldp+25,(((0U != (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)) 
                            & (3U != (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)))));
    bufp->fullBit(oldp+26,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__done_q));
    bufp->fullBit(oldp+27,(vlSelfRef.tb_obi_spi_peripheral__DOT__clk_i));
    bufp->fullBit(oldp+28,(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o));
    bufp->fullBit(oldp+29,(((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT____VdfgRegularize_h62409202_0_3) 
                            & (8U == (0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i)))));
    bufp->fullBit(oldp+30,(((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i) 
                            & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__we_i) 
                               & ((0U == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)) 
                                  & (((4U == (0xfffU 
                                              & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i)) 
                                      | (0U == (0xfffU 
                                                & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))) 
                                     & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__be_i)))))));
    bufp->fullBit(oldp+31,(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__read_to_status_reg_granted_this_cycle));
}
