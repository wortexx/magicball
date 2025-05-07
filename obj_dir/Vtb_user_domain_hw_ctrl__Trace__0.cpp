// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_user_domain_hw_ctrl__Syms.h"


void Vtb_user_domain_hw_ctrl___024root__trace_chg_0_sub_0(Vtb_user_domain_hw_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_user_domain_hw_ctrl___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root__trace_chg_0\n"); );
    // Init
    Vtb_user_domain_hw_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_user_domain_hw_ctrl___024root*>(voidSelf);
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_user_domain_hw_ctrl___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_user_domain_hw_ctrl___024root__trace_chg_0_sub_0(Vtb_user_domain_hw_ctrl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__ref_clk_i));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__testmode_i));
        bufp->chgIData(oldp+2,((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp 
                                        >> 5U))),32);
        bufp->chgBit(oldp+3,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp 
                                            >> 4U)))));
        bufp->chgBit(oldp+4,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp 
                                            >> 3U)))));
        bufp->chgBit(oldp+5,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp 
                                            >> 2U)))));
        bufp->chgBit(oldp+6,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp 
                                            >> 1U)))));
        bufp->chgBit(oldp+7,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp))));
        bufp->chgSData(oldp+8,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__gpio_in_sync_i),16);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U]) | vlSelfRef.__Vm_traceActivity
                     [3U]))) {
        bufp->chgIData(oldp+9,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                                 << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                              >> 0xaU))),32);
        bufp->chgBit(oldp+10,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                     >> 9U))));
        bufp->chgCData(oldp+11,((0xfU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                         >> 5U))),4);
        bufp->chgIData(oldp+12,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                  << 0x1bU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
                                               >> 5U))),32);
        bufp->chgCData(oldp+13,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
                                       >> 2U))),3);
        bufp->chgBit(oldp+14,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+15,((1U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U])));
        bufp->chgBit(oldp+16,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+17,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni));
        bufp->chgIData(oldp+18,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__prng_val1),32);
        bufp->chgCData(oldp+19,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__font_byte),8);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__read_data),32);
        bufp->chgBit(oldp+21,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__read_err));
        bufp->chgIData(oldp+22,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__phrase_index),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U] 
                     | vlSelfRef.__Vm_traceActivity
                     [8U]))) {
        bufp->chgBit(oldp+23,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down));
        bufp->chgIData(oldp+24,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  << 0x19U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                               >> 7U))),32);
        bufp->chgCData(oldp+25,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                       >> 4U))),3);
        bufp->chgBit(oldp+26,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 3U))));
        bufp->chgBit(oldp+27,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+29,((1U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U])));
        bufp->chgIData(oldp+30,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                  << 0x12U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                               >> 0xeU))),32);
        bufp->chgCData(oldp+31,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                       >> 0xbU))),3);
        bufp->chgBit(oldp+32,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+33,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 9U))));
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 8U))));
        bufp->chgBit(oldp+35,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 7U))));
        bufp->chgIData(oldp+36,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                  << 0xbU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                              >> 0x15U))),32);
        bufp->chgCData(oldp+37,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                       >> 0x12U))),3);
        bufp->chgBit(oldp+38,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+39,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+40,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+41,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                     >> 0xeU))));
        bufp->chgIData(oldp+42,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[4U] 
                                  << 4U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                            >> 0x1cU))),32);
        bufp->chgCData(oldp+43,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                       >> 0x19U))),3);
        bufp->chgBit(oldp+44,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                     >> 0x18U))));
        bufp->chgBit(oldp+45,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+46,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+47,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                     >> 0x15U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U] 
                     | vlSelfRef.__Vm_traceActivity
                     [9U]))) {
        bufp->chgIData(oldp+48,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                  << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                               >> 0xaU))),32);
        bufp->chgBit(oldp+49,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                     >> 9U))));
        bufp->chgCData(oldp+50,((0xfU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                         >> 5U))),4);
        bufp->chgIData(oldp+51,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[1U] 
                                  << 0x1bU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                               >> 5U))),32);
        bufp->chgCData(oldp+52,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                       >> 2U))),3);
        bufp->chgBit(oldp+53,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+54,((1U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[0U])));
        bufp->chgIData(oldp+55,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                  << 0xcU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                              >> 0x14U))),32);
        bufp->chgBit(oldp+56,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                     >> 0x13U))));
        bufp->chgCData(oldp+57,((0xfU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                         >> 0xfU))),4);
        bufp->chgIData(oldp+58,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                  << 0x11U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                               >> 0xfU))),32);
        bufp->chgCData(oldp+59,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+60,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+61,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                     >> 0xaU))));
        bufp->chgIData(oldp+62,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                  << 2U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                            >> 0x1eU))),32);
        bufp->chgBit(oldp+63,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                     >> 0x1dU))));
        bufp->chgCData(oldp+64,((0xfU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                         >> 0x19U))),4);
        bufp->chgIData(oldp+65,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                  << 7U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                            >> 0x19U))),32);
        bufp->chgCData(oldp+66,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                       >> 0x16U))),3);
        bufp->chgBit(oldp+67,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                     >> 0x14U))));
        bufp->chgIData(oldp+69,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[9U] 
                                  << 0x18U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                               >> 8U))),32);
        bufp->chgBit(oldp+70,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                     >> 7U))));
        bufp->chgCData(oldp+71,((0xfU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                         >> 3U))),4);
        bufp->chgIData(oldp+72,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                  << 0x1dU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[7U] 
                                               >> 3U))),32);
        bufp->chgCData(oldp+73,((7U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[7U])),3);
        bufp->chgBit(oldp+74,((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                               >> 0x1fU)));
        bufp->chgBit(oldp+75,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+76,((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                         >> 7U))),32);
        bufp->chgCData(oldp+77,((7U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                               >> 4U)))),3);
        bufp->chgBit(oldp+78,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                             >> 3U)))));
        bufp->chgBit(oldp+79,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                             >> 2U)))));
        bufp->chgBit(oldp+80,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                             >> 1U)))));
        bufp->chgBit(oldp+81,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp))));
        bufp->chgBit(oldp+82,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_up));
        bufp->chgCData(oldp+83,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_d),2);
        bufp->chgCData(oldp+84,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_d),2);
        bufp->chgBit(oldp+85,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o));
        bufp->chgBit(oldp+86,((IData)((0x800000U == 
                                       (0xfff80000U 
                                        & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])))));
        bufp->chgBit(oldp+87,((((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                 >> 0xaU) & (0x800000U 
                                             == (0xfff80000U 
                                                 & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U]))) 
                               & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o))));
        bufp->chgBit(oldp+88,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i));
        bufp->chgBit(oldp+89,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock));
        bufp->chgBit(oldp+90,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n));
        bufp->chgCData(oldp+91,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n),2);
        bufp->chgCData(oldp+92,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n),3);
        bufp->chgSData(oldp+93,((0xfffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                           >> 8U))),12);
        bufp->chgBit(oldp+94,((0x474U > (0xfffU & (
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                                   >> 8U)))));
        bufp->chgSData(oldp+95,((0x7ffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                           >> 8U))),11);
        bufp->chgBit(oldp+96,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req));
        bufp->chgBit(oldp+97,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_d));
        bufp->chgBit(oldp+98,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_d));
        bufp->chgBit(oldp+99,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_d));
        bufp->chgBit(oldp+100,(((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT____VdfgRegularize_h18fe919a_0_4) 
                                & ((4U == (0xfffU & 
                                           ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                             << 2U) 
                                            | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                               >> 0x1eU)))) 
                                   & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                                      >> 0x19U)))));
        bufp->chgBit(oldp+101,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req));
        bufp->chgBit(oldp+102,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req));
        bufp->chgSData(oldp+103,((0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                                             << 2U) 
                                            | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                               >> 0x1eU)))),12);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata),32);
        bufp->chgBit(oldp+105,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w));
        bufp->chgBit(oldp+106,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+107,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q));
        bufp->chgBit(oldp+108,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q));
        bufp->chgBit(oldp+109,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q));
        bufp->chgIData(oldp+110,((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                                          >> 7U))),32);
        bufp->chgCData(oldp+111,((7U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                                                >> 4U)))),3);
        bufp->chgBit(oldp+112,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                                              >> 3U)))));
        bufp->chgBit(oldp+113,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                                              >> 2U)))));
        bufp->chgBit(oldp+114,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                                              >> 1U)))));
        bufp->chgBit(oldp+115,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp))));
        bufp->chgBit(oldp+116,((1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+117,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q))));
        bufp->chgCData(oldp+118,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q),2);
        bufp->chgCData(oldp+119,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__i_counter__DOT__counter_q),2);
        bufp->chgCData(oldp+120,(((2U >= (3U & ((IData)(3U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                   ? (7U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                            >> (3U 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                   : 0U)),3);
        bufp->chgBit(oldp+121,((1U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+122,((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+123,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+124,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n));
        bufp->chgBit(oldp+125,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q));
        bufp->chgBit(oldp+126,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q));
        bufp->chgCData(oldp+127,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q),2);
        bufp->chgCData(oldp+128,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q),3);
        bufp->chgBit(oldp+129,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q));
        bufp->chgIData(oldp+130,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q),32);
        bufp->chgBit(oldp+131,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted));
        bufp->chgIData(oldp+132,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__prng_out_q),32);
        bufp->chgIData(oldp+133,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__state_q),32);
        bufp->chgBit(oldp+134,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q));
        bufp->chgIData(oldp+135,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q),32);
        bufp->chgBit(oldp+136,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req_accepted));
        bufp->chgIData(oldp+137,((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t2 
                                  ^ VL_SHIFTL_III(32,32,32, vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t2, 5U))),32);
        bufp->chgIData(oldp+138,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t1),32);
        bufp->chgIData(oldp+139,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__i_xorshift__DOT__t2),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+140,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o));
        bufp->chgBit(oldp+141,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o));
        bufp->chgBit(oldp+142,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q));
        bufp->chgIData(oldp+143,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q),32);
        bufp->chgBit(oldp+144,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no));
        bufp->chgCData(oldp+145,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q),2);
        bufp->chgCData(oldp+146,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d),2);
        bufp->chgBit(oldp+147,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q));
        bufp->chgBit(oldp+148,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d));
        bufp->chgCData(oldp+149,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q),8);
        bufp->chgCData(oldp+150,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q),3);
        bufp->chgCData(oldp+151,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d),3);
        bufp->chgCData(oldp+152,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q),2);
        bufp->chgCData(oldp+153,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d),2);
        bufp->chgBit(oldp+154,((2U <= (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))));
        bufp->chgCData(oldp+155,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits),2);
        bufp->chgBit(oldp+156,(((0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                & (3U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))));
        bufp->chgBit(oldp+157,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q));
        bufp->chgBit(oldp+158,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_accepted));
    }
    bufp->chgBit(oldp+159,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__clk_i));
    bufp->chgIData(oldp+160,((IData)((((0x9bU >= ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                        ? (0x1fffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                               (((IData)(0x26U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x27U) 
                                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(2U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                        : 0ULL) >> 5U))),32);
    bufp->chgCData(oldp+161,((7U & (IData)((((0x9bU 
                                              >= ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                              ? (0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(0x26U) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(2U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                         (((IData)(0x21U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                          (((IData)(2U) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                           >> 5U)])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                              : 0ULL) 
                                            >> 2U)))),3);
    bufp->chgBit(oldp+162,((1U & (IData)((((0x9bU >= 
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                            ? (0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                            : 0ULL) 
                                          >> 1U)))));
    bufp->chgBit(oldp+163,((1U & (IData)(((0x9bU >= 
                                           ((IData)(2U) 
                                            + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                                           ? (0x1fffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                  (((IData)(0x26U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x27U) 
                                                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                      (((IData)(0x21U) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(2U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                                           : 0ULL)))));
    bufp->chgBit(oldp+164,(((0x9bU >= ((IData)(1U) 
                                       + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                            && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                      (((IData)(1U) 
                                        + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))));
    bufp->chgIData(oldp+165,((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp 
                                      >> 7U))),32);
    bufp->chgCData(oldp+166,((7U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp 
                                            >> 4U)))),3);
    bufp->chgBit(oldp+167,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp 
                                          >> 3U)))));
    bufp->chgBit(oldp+168,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp 
                                          >> 2U)))));
    bufp->chgBit(oldp+169,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp 
                                          >> 1U)))));
    bufp->chgBit(oldp+170,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp))));
    bufp->chgIData(oldp+171,((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                      >> 7U))),32);
    bufp->chgCData(oldp+172,((7U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                            >> 4U)))),3);
    bufp->chgBit(oldp+173,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                          >> 3U)))));
    bufp->chgBit(oldp+174,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                          >> 2U)))));
    bufp->chgBit(oldp+175,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                          >> 1U)))));
    bufp->chgBit(oldp+176,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp))));
    bufp->chgCData(oldp+177,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx),2);
    bufp->chgBit(oldp+178,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_valid_o));
    bufp->chgBit(oldp+179,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_periphs__DOT__dec_error_o));
    bufp->chgCData(oldp+180,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_periphs__DOT__i_addr_decode_dync__DOT__matched_rules),3);
    bufp->chgBit(oldp+181,(((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_up) 
                            ^ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux__DOT__cnt_down))));
    bufp->chgBit(oldp+182,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                             >> 0x13U) & ((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                          & ((4U == 
                                              (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                               >> 0x14U)) 
                                             | (0U 
                                                == 
                                                (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                 >> 0x14U)))))));
    bufp->chgCData(oldp+183,(((0x474U > (0xfffU & (
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                                   >> 8U)))
                               ? ((0x473U >= (0x7ffU 
                                              & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                                 >> 8U)))
                                   ? vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_data
                                  [(0x7ffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[8U] 
                                              >> 8U))]
                                   : 0U) : 0U)),8);
}

void Vtb_user_domain_hw_ctrl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root__trace_cleanup\n"); );
    // Init
    Vtb_user_domain_hw_ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_user_domain_hw_ctrl___024root*>(voidSelf);
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
