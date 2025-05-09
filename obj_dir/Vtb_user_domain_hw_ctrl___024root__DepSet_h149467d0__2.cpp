// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_hw_ctrl.h for the primary calling header

#include "Vtb_user_domain_hw_ctrl__pch.h"
#include "Vtb_user_domain_hw_ctrl__Syms.h"
#include "Vtb_user_domain_hw_ctrl___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___dump_triggers__act(Vtb_user_domain_hw_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_user_domain_hw_ctrl___024root___eval_triggers__act(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__1));
    vlSelfRef.__VactTriggered.set(1U, (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(6U, ((~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(7U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__1 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__clk_i__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__rst_ni__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_user_domain_hw_ctrl___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__1(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    if (VL_UNLIKELY((1U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]))) {
        VL_WRITEF_NX("%t [UD_IN] Req for Addr=0x%x (WE=%b) -> Decoded Idx=%1#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                       << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                    >> 0xaU)),1,(1U 
                                                 & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                                    >> 9U)),
                     2,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx));
    }
    if (VL_UNLIKELY(((1U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                        >> 0xaU)))) {
        VL_WRITEF_NX("%t [UD_TO_SPI_ENG] Req to SPI Eng (idx           1): Addr=0x%x, WE=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                       << 0xcU) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                   >> 0x14U)),1,(1U 
                                                 & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                                    >> 0x13U)));
    }
    if (VL_UNLIKELY(((2U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[4U] 
                        >> 0x14U)))) {
        VL_WRITEF_NX("%t [UD_TO_SPI_CTRL] Req to SPI Ctrl (idx           2): Addr=0x%x, WE=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     ((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[6U] 
                       << 2U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                 >> 0x1eU)),1,(1U & 
                                               (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[5U] 
                                                >> 0x1dU)));
    }
    if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp 
                                   >> 1U))))) {
        VL_WRITEF_NX("%t [UD_FROM_SPI_ENG] GNT from SPI Eng (idx           1) to Demux\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp)))) {
        VL_WRITEF_NX("%t [UD_FROM_SPI_ENG] RVALID from SPI Eng (idx           1) to Demux. RDATA=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp 
                              >> 7U)));
    }
    if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                   >> 1U))))) {
        VL_WRITEF_NX("%t [UD_FROM_SPI_CTRL] GNT from SPI Ctrl (idx           2) to Demux\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if (VL_UNLIKELY((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp)))) {
        VL_WRITEF_NX("%t [UD_FROM_SPI_CTRL] RVALID from SPI Ctrl (idx           2) to Demux. RDATA=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     (IData)((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                              >> 7U)));
    }
    if (VL_UNLIKELY((((0x9bU >= ((IData)(1U) + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                      && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                (((IData)(1U) + (0xffU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                 >> 5U)] >> (0x1fU 
                                             & ((IData)(1U) 
                                                + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                     & (~ (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                           >> 9U))))) {
        VL_WRITEF_NX("%t [UD_OUT] GNT_OUT=%b for Read to Idx=%1# (Addr=0x%x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     ((0x9bU >= ((IData)(1U) + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                      && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                (((IData)(1U) + (0xffU 
                                                 & ((IData)(0x27U) 
                                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                 >> 5U)] >> (0x1fU 
                                             & ((IData)(1U) 
                                                + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))),
                     2,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx),
                     32,((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                          << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                       >> 0xaU)));
    }
    if (VL_UNLIKELY(((0x9bU >= (0xffU & ((IData)(0x27U) 
                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                     && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                               (7U & (((IData)(0x27U) 
                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) {
        VL_WRITEF_NX("%t [UD_OUT] RVALID_OUT=%b, RDATA_OUT=0x%x for Read to Idx=%1# (Addr=0x%x)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     ((0x9bU >= (0xffU & ((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                      && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                (7U & (((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))),
                     32,(IData)((((0x9bU >= ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                                   ? (0x1fffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                          (((IData)(0x26U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                           >> 5U)])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                               ? 0x20U
                                               : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                         | (((0U == 
                                              (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                              ? 0ULL
                                              : ((QData)((IData)(
                                                                 vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(0x21U) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                               (((IData)(2U) 
                                                                 + 
                                                                 (0xffU 
                                                                  & ((IData)(0x27U) 
                                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                >> 5U)])) 
                                               >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                                   : 0ULL) >> 5U)),
                     2,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx,
                     32,((vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
                          << 0x16U) | (vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
                                       >> 0xaU)));
    }
    if (VL_UNLIKELY((0x400U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U]))) {
        __Vtemp_1 = Vtb_user_domain_hw_ctrl___024unit::__Venumtab_enum_name363
            [vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q];
        VL_WRITEF_NX("%t [DUT_OBI_DEBUG] req_i=%b, we_i=%b, addr_i[11:0]=%x, gnt_o=%b, state_q=%@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                            >> 0xaU)),1,(1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                               >> 0x13U)),
                     12,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                         >> 0x14U),1,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o),
                     -1,&(__Vtemp_1));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no))))) {
        __Vtemp_2 = Vtb_user_domain_hw_ctrl___024unit::__Venumtab_enum_name363
            [vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q];
        VL_WRITEF_NX("%t [DUT_SPI_DEBUG] CS_N LOW: SCK=%b, MOSI=%b, BitCnt=%1#, SPIClkCnt=%1#, FSMState=%@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o),
                     1,vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o,
                     3,(IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q),
                     2,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q,
                     -1,&(__Vtemp_2));
    }
}

VL_INLINE_OPT void Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__2(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__rst_ni) {
        if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q) 
                         != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)))) {
            __Vtemp_1 = Vtb_user_domain_hw_ctrl___024unit::__Venumtab_enum_name363
                [vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q];
            __Vtemp_2 = Vtb_user_domain_hw_ctrl___024unit::__Venumtab_enum_name363
                [vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d];
            VL_WRITEF_NX("%t [DUT_FSM_DEBUG] State Transition: %@ -> %@\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,-1,&(__Vtemp_1),-1,&(__Vtemp_2));
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q 
            = ((2U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
               & (3U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d;
        if (VL_UNLIKELY((((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                           >> 0xaU) & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                       >> 0x13U)) & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o)))) {
            VL_WRITEF_NX("%t [DUT_OBI_WRITE] Write to addr_offset %x granted. Data LSB: 0x%02x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,12,(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                                >> 0x14U),8,(0xffU 
                                             & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                                >> 0xfU)));
            if ((4U == (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                        >> 0x14U))) {
                if ((0x8000U & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U])) {
                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q 
                        = (0xffU & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                                    >> 0xfU));
                }
            } else if ((0U == (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U] 
                               >> 0x14U))) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 1U;
            }
        } else if (((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                    & (1U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d)))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 0U;
        }
        vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_granted_q;
        if (VL_UNLIKELY(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_granted_q)) {
            VL_WRITEF_NX("%t [DUT_READ_PATH] read_req_granted_q=TRUE (was set last cycle). Latching rdata_q with status={%b,%b}. rvalid_q is now TRUE.\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,1,(1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits) 
                                     >> 1U)),1,(1U 
                                                & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits)));
            vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q 
                = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits;
        } else if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q)))) {
            vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q = 0U;
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q 
            = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d;
        if (VL_UNLIKELY(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q)) {
            VL_WRITEF_NX("%t [DUT_READ_PATH] rvalid_o is HIGH (rvalid_q is set). rdata_o is 0x%x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,32,vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q);
        }
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_granted_q 
            = (((vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[2U] 
                 >> 0xaU) & (0x800000U == (0xfff80000U 
                                           & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_obi_demux__mgr_ports_req_o[3U]))) 
               & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o));
    } else {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q = 0U;
        vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q = 0U;
        vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__read_req_granted_q = 0U;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q 
        = vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rvalid_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q 
        = vlSelfRef.__Vdly__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q;
    if ((1U & (~ ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_d = 0U;
            }
        }
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__status_bits 
        = (((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__done_q) 
            << 1U) | ((0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)) 
                      & (3U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o 
        = (1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                 >> (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q)));
    if ((2U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no 
            = (1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q));
        if ((1U & (~ (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q)))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_sck_o 
                = (2U <= (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q));
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q)));
            if ((3U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
                if ((0U != (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d 
                        = (7U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q) 
                                 - (IData)(1U)));
                }
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_mosi_idx 
                    = (7U & ((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))
                              ? (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q)
                              : ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q) 
                                 - (IData)(1U))));
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o 
                    = (1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                             >> (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__unnamedblk1__DOT__next_mosi_idx)));
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
            vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 0U;
        } else if ((3U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_q))) {
                vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_q))) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__cs_no = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__spi_clk_cnt_d = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__bit_cnt_d = 7U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 2U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__spi_mosi_o 
            = (1U & ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__tx_data_q) 
                     >> 7U));
    } else if (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__start_flag_q) {
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__state_d = 1U;
    }
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp 
        = ((0x7fULL & vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_obi_rsp) 
           | ((QData)((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_spi_peripheral__DOT__rdata_q)) 
              << 7U));
}
