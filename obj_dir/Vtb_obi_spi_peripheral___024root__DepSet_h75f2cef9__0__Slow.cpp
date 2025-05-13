// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_obi_spi_peripheral.h for the primary calling header

#include "Vtb_obi_spi_peripheral__pch.h"
#include "Vtb_obi_spi_peripheral__Syms.h"
#include "Vtb_obi_spi_peripheral___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root___dump_triggers__stl(Vtb_obi_spi_peripheral___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root___eval_triggers__stl(Vtb_obi_spi_peripheral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_obi_spi_peripheral___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_obi_spi_peripheral___024root___stl_sequent__TOP__0(Vtb_obi_spi_peripheral___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_obi_spi_peripheral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_obi_spi_peripheral___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtemp_1;
    // Body
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_d 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_q;
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_d 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q;
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_d 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_q;
    vlSelfRef.tb_obi_spi_peripheral__DOT__sck_o = 0U;
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__status_bits 
        = (((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__done_q) 
            << 1U) | ((0U != (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)) 
                      & (3U != (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q))));
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_d 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q;
    vlSelfRef.tb_obi_spi_peripheral__DOT__mosi_o = 
        (1U & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_q) 
               >> (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q)));
    if ((1U & (~ ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)))) {
            if (vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_q) {
                vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q))) {
            vlSelfRef.tb_obi_spi_peripheral__DOT__mosi_o 
                = (1U & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__tx_data_q) 
                         >> 7U));
        }
    }
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d 
        = vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q;
    if ((2U & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)))) {
            vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_d 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q)));
            if ((3U == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q))) {
                vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_d = 0U;
                if ((0U != (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q))) {
                    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_d 
                        = (7U & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q) 
                                 - (IData)(1U)));
                }
            }
            vlSelfRef.tb_obi_spi_peripheral__DOT__sck_o 
                = (2U <= (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q));
        }
        if ((1U & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q))) {
            vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d = 0U;
        } else if ((3U == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_q))) {
            if ((0U == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_q))) {
                vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q))) {
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__spi_clk_cnt_d = 0U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__bit_cnt_d = 7U;
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d = 2U;
    } else if (vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__start_flag_q) {
        vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_d = 1U;
    }
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT____VdfgRegularize_h62409202_0_3 
        = ((~ (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__we_i)) 
           & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i));
    vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o = (
                                                   ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT____VdfgRegularize_h62409202_0_3) 
                                                    & (8U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))) 
                                                   | ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i) 
                                                      & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__we_i) 
                                                         & ((0U 
                                                             == (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q)) 
                                                            & (((4U 
                                                                 == 
                                                                 (0xfffU 
                                                                  & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i)) 
                                                                | (0U 
                                                                   == 
                                                                   (0xfffU 
                                                                    & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))) 
                                                               & (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__be_i))))));
    vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__read_to_status_reg_granted_this_cycle 
        = ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT____VdfgRegularize_h62409202_0_3) 
           & ((IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o) 
              & (8U == (0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i))));
    if (VL_UNLIKELY(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i)) {
        __Vtemp_1 = Vtb_obi_spi_peripheral___024unit::__Venumtab_enum_name3
            [vlSelfRef.tb_obi_spi_peripheral__DOT__dut__DOT__state_q];
        VL_WRITEF_NX("%t [DUT_OBI_DEBUG] req_i=%b, we_i=%b, addr_i[11:0]=%x, gnt_o=%b, state_q=%@\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__req_i),
                     1,vlSelfRef.tb_obi_spi_peripheral__DOT__we_i,
                     12,(0xfffU & vlSelfRef.tb_obi_spi_peripheral__DOT__addr_i),
                     1,(IData)(vlSelfRef.tb_obi_spi_peripheral__DOT__gnt_o),
                     -1,&(__Vtemp_1));
        Verilated::runFlushCallbacks();
    }
}
