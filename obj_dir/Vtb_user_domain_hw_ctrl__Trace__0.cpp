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
        bufp->chgIData(oldp+2,((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp_i_tb 
                                        >> 5U))),32);
        bufp->chgBit(oldp+3,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp_i_tb 
                                            >> 4U)))));
        bufp->chgBit(oldp+4,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp_i_tb 
                                            >> 3U)))));
        bufp->chgBit(oldp+5,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp_i_tb 
                                            >> 2U)))));
        bufp->chgBit(oldp+6,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp_i_tb 
                                            >> 1U)))));
        bufp->chgBit(oldp+7,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp_i_tb))));
        bufp->chgSData(oldp+8,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__gpio_in_sync_i_tb),16);
        bufp->chgIData(oldp+9,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__check_file_exists_label__DOT__file_handle),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+10,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__read_data),32);
        bufp->chgBit(oldp+11,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__read_err));
        bufp->chgCData(oldp+12,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__font_byte_val),8);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__prng_val1),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__prng_val2),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__font_addr_A_start),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__font_addr_A_mid),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__unnamedblk1__DOT__font_addr_B_start),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [7U]))) {
        bufp->chgBit(oldp+18,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig));
        bufp->chgIData(oldp+19,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                  << 0x19U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                               >> 7U))),32);
        bufp->chgCData(oldp+20,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                       >> 4U))),3);
        bufp->chgBit(oldp+21,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 3U))));
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 2U))));
        bufp->chgBit(oldp+23,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+24,((1U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[0U])));
        bufp->chgIData(oldp+25,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                  << 0x12U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                               >> 0xeU))),32);
        bufp->chgCData(oldp+26,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                       >> 0xbU))),3);
        bufp->chgBit(oldp+27,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+28,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 9U))));
        bufp->chgBit(oldp+29,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 8U))));
        bufp->chgBit(oldp+30,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[1U] 
                                     >> 7U))));
        bufp->chgIData(oldp+31,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                  << 0xbU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                              >> 0x15U))),32);
        bufp->chgCData(oldp+32,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                       >> 0x12U))),3);
        bufp->chgBit(oldp+33,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+34,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+35,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+36,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[2U] 
                                     >> 0xeU))));
        bufp->chgIData(oldp+37,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[4U] 
                                  << 4U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                            >> 0x1cU))),32);
        bufp->chgCData(oldp+38,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                       >> 0x19U))),3);
        bufp->chgBit(oldp+39,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                     >> 0x18U))));
        bufp->chgBit(oldp+40,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+41,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+42,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[3U] 
                                     >> 0x15U))));
        bufp->chgIData(oldp+43,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[6U] 
                                  << 0x1dU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[5U] 
                                               >> 3U))),32);
        bufp->chgCData(oldp+44,((7U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[5U])),3);
        bufp->chgBit(oldp+45,((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[4U] 
                               >> 0x1fU)));
        bufp->chgBit(oldp+46,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[4U] 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+47,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[4U] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+48,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[4U] 
                                     >> 0x1cU))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U] 
                     | vlSelfRef.__Vm_traceActivity
                     [8U]))) {
        bufp->chgIData(oldp+49,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
                                  << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[1U] 
                                               >> 0xaU))),32);
        bufp->chgBit(oldp+50,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[1U] 
                                     >> 9U))));
        bufp->chgCData(oldp+51,((0xfU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[1U] 
                                         >> 5U))),4);
        bufp->chgIData(oldp+52,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[1U] 
                                  << 0x1bU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0U] 
                                               >> 5U))),32);
        bufp->chgCData(oldp+53,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0U] 
                                       >> 2U))),3);
        bufp->chgBit(oldp+54,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0U] 
                                     >> 1U))));
        bufp->chgBit(oldp+55,((1U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0U])));
        bufp->chgIData(oldp+56,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                  << 0xcU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                              >> 0x14U))),32);
        bufp->chgBit(oldp+57,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                     >> 0x13U))));
        bufp->chgCData(oldp+58,((0xfU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                         >> 0xfU))),4);
        bufp->chgIData(oldp+59,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                  << 0x11U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
                                               >> 0xfU))),32);
        bufp->chgCData(oldp+60,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+61,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+62,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[2U] 
                                     >> 0xaU))));
        bufp->chgIData(oldp+63,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                  << 2U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                            >> 0x1eU))),32);
        bufp->chgBit(oldp+64,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                     >> 0x1dU))));
        bufp->chgCData(oldp+65,((0xfU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                         >> 0x19U))),4);
        bufp->chgIData(oldp+66,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                  << 7U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                            >> 0x19U))),32);
        bufp->chgCData(oldp+67,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                       >> 0x16U))),3);
        bufp->chgBit(oldp+68,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+69,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[4U] 
                                     >> 0x14U))));
        bufp->chgIData(oldp+70,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                  << 0x18U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                               >> 8U))),32);
        bufp->chgBit(oldp+71,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                     >> 7U))));
        bufp->chgCData(oldp+72,((0xfU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                         >> 3U))),4);
        bufp->chgIData(oldp+73,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                  << 0x1dU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[7U] 
                                               >> 3U))),32);
        bufp->chgCData(oldp+74,((7U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[7U])),3);
        bufp->chgBit(oldp+75,((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                               >> 0x1fU)));
        bufp->chgBit(oldp+76,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+77,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xbU] 
                                  << 0xeU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU] 
                                              >> 0x12U))),32);
        bufp->chgBit(oldp+78,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU] 
                                     >> 0x11U))));
        bufp->chgCData(oldp+79,((0xfU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU] 
                                         >> 0xdU))),4);
        bufp->chgIData(oldp+80,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU] 
                                  << 0x13U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                               >> 0xdU))),32);
        bufp->chgCData(oldp+81,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                       >> 0xaU))),3);
        bufp->chgBit(oldp+82,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                     >> 9U))));
        bufp->chgBit(oldp+83,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                     >> 8U))));
        bufp->chgIData(oldp+84,((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                         >> 7U))),32);
        bufp->chgCData(oldp+85,((7U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                               >> 4U)))),3);
        bufp->chgBit(oldp+86,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                             >> 3U)))));
        bufp->chgBit(oldp+87,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                             >> 2U)))));
        bufp->chgBit(oldp+88,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                             >> 1U)))));
        bufp->chgBit(oldp+89,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp))));
        bufp->chgCData(oldp+90,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_d),3);
        bufp->chgBit(oldp+91,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met));
        bufp->chgBit(oldp+92,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__forward_this_request));
        bufp->chgBit(oldp+93,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__target_is_current_selection));
        bufp->chgBit(oldp+94,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__no_transactions_in_flight));
        bufp->chgBit(oldp+95,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__one_transaction_is_completing));
        bufp->chgBit(oldp+96,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__sub_conditions_for_forwarding));
        bufp->chgCData(oldp+97,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_d),4);
        bufp->chgBit(oldp+98,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o));
        bufp->chgBit(oldp+99,((IData)((0x800000U == 
                                       (0xfff80000U 
                                        & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U])))));
        bufp->chgBit(oldp+100,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT____Vcellinp__i_id_fifo__push_i));
        bufp->chgBit(oldp+101,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__gate_clock));
        bufp->chgBit(oldp+102,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_n));
        bufp->chgCData(oldp+103,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_n),2);
        bufp->chgCData(oldp+104,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_n),3);
        bufp->chgSData(oldp+105,((0xfffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                            >> 8U))),12);
        bufp->chgBit(oldp+106,((0x474U > (0xfffU & 
                                          (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[8U] 
                                           >> 8U)))));
        bufp->chgBit(oldp+107,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req));
        bufp->chgCData(oldp+108,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_byte_data_comb),8);
        bufp->chgBit(oldp+109,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write));
        bufp->chgBit(oldp+110,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read));
        bufp->chgBit(oldp+111,((1U & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[9U] 
                                       >> 8U) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU] 
                                                 >> 0x11U)))));
        bufp->chgBit(oldp+112,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_req));
        bufp->chgCData(oldp+113,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[0xaU] 
                                        >> 0x14U))),3);
        bufp->chgBit(oldp+114,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__write_req));
        bufp->chgBit(oldp+115,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_req));
        bufp->chgSData(oldp+116,((0xfffU & ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[6U] 
                                             << 2U) 
                                            | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[5U] 
                                               >> 0x1eU)))),12);
        bufp->chgIData(oldp+117,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__reg_rdata_comb),32);
        bufp->chgBit(oldp+118,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w));
        bufp->chgBit(oldp+119,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+120,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs1_n_q));
        bufp->chgBit(oldp+121,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__cs2_n_q));
        bufp->chgBit(oldp+122,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__dc_q));
        bufp->chgIData(oldp+123,((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                                          >> 7U))),32);
        bufp->chgCData(oldp+124,((7U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                                                >> 4U)))),3);
        bufp->chgBit(oldp+125,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                                              >> 3U)))));
        bufp->chgBit(oldp+126,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                                              >> 2U)))));
        bufp->chgBit(oldp+127,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp 
                                              >> 1U)))));
        bufp->chgBit(oldp+128,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_error_obi_rsp))));
        bufp->chgBit(oldp+129,((1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q) 
                                      >> 3U))));
        bufp->chgCData(oldp+130,((7U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q))),3);
        bufp->chgBit(oldp+131,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_was_met_q));
        bufp->chgCData(oldp+132,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q),4);
        bufp->chgBit(oldp+133,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q));
        bufp->chgIData(oldp+134,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q),32);
        bufp->chgBit(oldp+135,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q));
        bufp->chgCData(oldp+136,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q),8);
        bufp->chgCData(oldp+137,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q),3);
        bufp->chgCData(oldp+138,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q),2);
        bufp->chgBit(oldp+139,((2U <= (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))));
        bufp->chgBit(oldp+140,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q));
        bufp->chgBit(oldp+141,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_granted_q));
        bufp->chgCData(oldp+142,(((2U >= (3U & ((IData)(3U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q))))
                                   ? (7U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q) 
                                            >> (3U 
                                                & ((IData)(3U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q)))))
                                   : 0U)),3);
        bufp->chgBit(oldp+143,((1U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+144,((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+145,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q))));
        bufp->chgBit(oldp+146,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_n));
        bufp->chgBit(oldp+147,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__read_pointer_q));
        bufp->chgBit(oldp+148,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__write_pointer_q));
        bufp->chgCData(oldp+149,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__status_cnt_q),2);
        bufp->chgCData(oldp+150,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_err__DOT__i_id_fifo__DOT__mem_q),3);
        bufp->chgBit(oldp+151,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rvalid_q));
        bufp->chgIData(oldp+152,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rdata_q),32);
        bufp->chgBit(oldp+153,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__read_req_accepted));
        bufp->chgIData(oldp+154,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_q),32);
        bufp->chgIData(oldp+155,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__prng_state_d),32);
        bufp->chgIData(oldp+156,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t1),32);
        bufp->chgIData(oldp+157,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__t2),32);
        bufp->chgBit(oldp+158,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rvalid_q));
        bufp->chgIData(oldp+159,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__rdata_q),32);
        bufp->chgBit(oldp+160,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rvalid_q));
        bufp->chgIData(oldp+161,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__rdata_q),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[6U])) {
        bufp->chgBit(oldp+162,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o_tb));
        bufp->chgBit(oldp+163,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o_tb));
        bufp->chgCData(oldp+164,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q),3);
        bufp->chgBit(oldp+165,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no));
        bufp->chgCData(oldp+166,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q),2);
        bufp->chgCData(oldp+167,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d),2);
        bufp->chgBit(oldp+168,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d));
        bufp->chgCData(oldp+169,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d),3);
        bufp->chgCData(oldp+170,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d),2);
        bufp->chgCData(oldp+171,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits),2);
        bufp->chgBit(oldp+172,(((0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                & (3U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))));
    }
    bufp->chgBit(oldp+173,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__clk_i));
    bufp->chgBit(oldp+174,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni));
    bufp->chgIData(oldp+175,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                               << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                            >> 0xaU))),32);
    bufp->chgBit(oldp+176,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                  >> 9U))));
    bufp->chgCData(oldp+177,((0xfU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                      >> 5U))),4);
    bufp->chgIData(oldp+178,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                               << 0x1bU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
                                            >> 5U))),32);
    bufp->chgCData(oldp+179,((7U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
                                    >> 2U))),3);
    bufp->chgBit(oldp+180,((1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
                                  >> 1U))));
    bufp->chgBit(oldp+181,((1U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U])));
    bufp->chgIData(oldp+182,((IData)((((0xc2U >= ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                        ? (0x1fffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                               (((IData)(0x26U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x27U) 
                                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                              | (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(2U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                        : 0ULL) >> 5U))),32);
    bufp->chgCData(oldp+183,((7U & (IData)((((0xc2U 
                                              >= ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                              ? (0x1fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(0x26U) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(2U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                         (((IData)(0x21U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                          (((IData)(2U) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                           >> 5U)])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(2U) 
                                                              + 
                                                              (0xffU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                              : 0ULL) 
                                            >> 2U)))),3);
    bufp->chgBit(oldp+184,((1U & (IData)((((0xc2U >= 
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                            ? (0x1fffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(0x21U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (((IData)(2U) 
                                                                          + 
                                                                          (0xffU 
                                                                           & ((IData)(0x27U) 
                                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                            : 0ULL) 
                                          >> 1U)))));
    bufp->chgBit(oldp+185,((1U & (IData)(((0xc2U >= 
                                           ((IData)(2U) 
                                            + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))
                                           ? (0x1fffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                  (((IData)(0x26U) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x27U) 
                                                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x27U) 
                                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q))))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                      (((IData)(0x21U) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))) 
                                                    | ((QData)((IData)(
                                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(2U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))) 
                                                                        >> 5U)])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__select_q)))))))))
                                           : 0ULL)))));
    bufp->chgBit(oldp+186,(((0xc2U >= ((IData)(1U) 
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
    bufp->chgBit(oldp+187,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing));
    bufp->chgIData(oldp+188,((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp 
                                      >> 7U))),32);
    bufp->chgCData(oldp+189,((7U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp 
                                            >> 4U)))),3);
    bufp->chgBit(oldp+190,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp 
                                          >> 3U)))));
    bufp->chgBit(oldp+191,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp 
                                          >> 2U)))));
    bufp->chgBit(oldp+192,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp 
                                          >> 1U)))));
    bufp->chgBit(oldp+193,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_engine_obi_rsp))));
    bufp->chgIData(oldp+194,((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                      >> 7U))),32);
    bufp->chgCData(oldp+195,((7U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                            >> 4U)))),3);
    bufp->chgBit(oldp+196,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                          >> 3U)))));
    bufp->chgBit(oldp+197,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                          >> 2U)))));
    bufp->chgBit(oldp+198,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                          >> 1U)))));
    bufp->chgBit(oldp+199,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp))));
    bufp->chgIData(oldp+200,((IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                                      >> 7U))),32);
    bufp->chgCData(oldp+201,((7U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                                            >> 4U)))),3);
    bufp->chgBit(oldp+202,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                                          >> 3U)))));
    bufp->chgBit(oldp+203,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                                          >> 2U)))));
    bufp->chgBit(oldp+204,((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                                          >> 1U)))));
    bufp->chgBit(oldp+205,((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp))));
    bufp->chgCData(oldp+206,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx),3);
    bufp->chgBit(oldp+207,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_valid_o));
    bufp->chgBit(oldp+208,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__dec_error_o));
    bufp->chgCData(oldp+209,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_addr_decode_user_periphs__DOT__i_addr_decode_dync__DOT__matched_rules),4);
    bufp->chgBit(oldp+210,(((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_was_met_q)) 
                            & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met))));
    bufp->chgBit(oldp+211,((((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_was_met_q)) 
                             & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__grant_condition_is_met)) 
                            | ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__cnt_down_sig) 
                               & (0U != (7U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_obi_demux_user__DOT__i_counter__DOT__counter_q)))))));
    bufp->chgBit(oldp+212,(((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                             >> 0x13U) & ((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                                          & ((4U == 
                                              (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                               >> 0x14U)) 
                                             | (0U 
                                                == 
                                                (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux_user__mgr_ports_req_o[3U] 
                                                 >> 0x14U)))))));
    bufp->chgBit(oldp+213,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__trigger_prng_update));
    bufp->chgBit(oldp+214,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__read_granted_this_cycle));
    bufp->chgBit(oldp+215,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__read_granted_this_cycle));
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
}
