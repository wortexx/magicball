// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_hw_ctrl.h for the primary calling header

#include "Vtb_user_domain_hw_ctrl__pch.h"
#include "Vtb_user_domain_hw_ctrl__Syms.h"
#include "Vtb_user_domain_hw_ctrl___024root.h"

VlCoroutine Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__1(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP__Vtiming__1__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__cs1_active;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__cs1_active = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__cs2_active;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__cs2_active = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__dc_is_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__dc_is_data = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_be;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__cs1_active;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__cs1_active = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__cs2_active;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__cs2_active = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__dc_is_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__dc_is_data = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_be;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__busy_bit;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__busy_bit = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__done_bit_tb;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__done_bit_tb = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__read_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__read_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_be;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_be;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__busy_bit;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__busy_bit = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__done_bit_tb;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__done_bit_tb = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__read_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__read_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__cs1_active;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__cs1_active = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__cs2_active;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__cs2_active = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__dc_is_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__dc_is_data = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_data = 0;
    CData/*3:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_be;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_be = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__timeout_count;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn);
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_addr;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_err;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_gnt;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_rvalid;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn);
    QData/*36:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__rsp_r_chan_temp;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__grant_received;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__grant_received = 0;
    // Body
    if (VL_UNLIKELY((1U == vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__66__cs_pin_idx))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__dc_is_data 
            = vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__66__is_data;
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__cs2_active = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__cs1_active = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val = 0U;
        if ((1U & (~ (IData)((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__cs1_active))))) {
            __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val 
                = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val);
        }
        if ((1U & (~ (IData)((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__cs2_active))))) {
            __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val 
                = (2U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val);
        }
        if ((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__dc_is_data)) {
            __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val 
                = (4U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val);
        }
        VL_WRITEF_NX("%t : TB: Writing HW Ctrl Reg (Addr 0x20002000): 0x%08x (CS1_N=%b, CS2_N=%b, DC=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val,
                     1,(1U & __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val),
                     1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val 
                              >> 1U)),1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val 
                                               >> 2U)));
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_be = 0xfU;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_data 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__67__ctrl_val;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_addr = 0x20002000U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__timeout_count = 0U;
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             122);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[0U]);
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[0U] 
            = ((0x1fU & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[0U]) 
               | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_be)) 
                            << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_data)))) 
                  << 5U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[1U] 
            = (((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_be)) 
                          << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_data)))) 
                >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_addr)) 
                                               << 1U))) 
                              << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_be)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_data))) 
                                                 >> 0x20U)) 
                                        << 5U)));
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[2U] 
            = (0x3ffU & (((0x1fU & ((IData)((1ULL | 
                                             ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_addr)) 
                                              << 1U))) 
                                    >> 0x17U)) | ((IData)(
                                                          ((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_be)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_data))) 
                                                           >> 0x20U)) 
                                                  >> 0x1bU)) 
                         | ((0x1e0U & ((IData)((1ULL 
                                                | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_addr)) 
                                                   << 1U))) 
                                       >> 0x17U)) | 
                            ((IData)(((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_addr)) 
                                               << 1U)) 
                                      >> 0x20U)) << 9U))));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[0U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[1U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__req_txn[2U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_addr,
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_data,
                     4,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_be));
        while (((~ ((0x9bU >= ((IData)(1U) + (0xffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__timeout_count))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 134);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__timeout_count 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__timeout_count);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__timeout_count))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:138: Assertion failed in %Ntb_user_domain_hw_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_addr,
                         39,((((0x9bU >= ((IData)(2U) 
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
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (7U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 138, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 140, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__68__w_addr);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             147);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
        VL_WRITEF_NX("%t : TB: Performing dummy read to UserSpiCtrl (PRNG Addr 0x20002008) after write.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr = 0x20002008U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             158);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[0U]);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[1U] 
            = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[0U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[1U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__req_txn[2U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__grant_received = 0U;
        {
            while (VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt)) {
                if (((0x9bU >= ((IData)(1U) + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                     && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                               (((IData)(1U) + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(1U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) {
                    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__grant_received = 1U;
                    goto __Vlabel31;
                }
                co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                     "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                     173);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt 
                    = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_gnt);
            }
            __Vlabel31: ;
        }
        if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__grant_received))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:178: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr,
                         39,((((0x9bU >= ((IData)(2U) 
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
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (7U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 178, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 180, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             184);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
        while (((~ ((0x9bU >= (0xffU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (7U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 189);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:193: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr,
                         39,((((0x9bU >= ((IData)(2U) 
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
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (7U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 193, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 195, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__rsp_r_chan_temp 
            = ((0x9bU >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                : 0ULL);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_data_val 
            = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_addr,
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__69__r_err),
                     1,((0x9bU >= (0xffU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                        && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (7U & (((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))));
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             203);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                             260);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    } else if (VL_UNLIKELY((2U == vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__66__cs_pin_idx))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__dc_is_data 
            = vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__66__is_data;
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__cs2_active = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__cs1_active = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val = 0U;
        if ((1U & (~ (IData)((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__cs1_active))))) {
            __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val 
                = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val);
        }
        if ((1U & (~ (IData)((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__cs2_active))))) {
            __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val 
                = (2U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val);
        }
        if ((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__dc_is_data)) {
            __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val 
                = (4U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val);
        }
        VL_WRITEF_NX("%t : TB: Writing HW Ctrl Reg (Addr 0x20002000): 0x%08x (CS1_N=%b, CS2_N=%b, DC=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val,
                     1,(1U & __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val),
                     1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val 
                              >> 1U)),1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val 
                                               >> 2U)));
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_be = 0xfU;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_data 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__70__ctrl_val;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_addr = 0x20002000U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__timeout_count = 0U;
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             122);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[0U]);
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[0U] 
            = ((0x1fU & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[0U]) 
               | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_be)) 
                            << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_data)))) 
                  << 5U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[1U] 
            = (((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_be)) 
                          << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_data)))) 
                >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_addr)) 
                                               << 1U))) 
                              << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_be)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_data))) 
                                                 >> 0x20U)) 
                                        << 5U)));
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[2U] 
            = (0x3ffU & (((0x1fU & ((IData)((1ULL | 
                                             ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_addr)) 
                                              << 1U))) 
                                    >> 0x17U)) | ((IData)(
                                                          ((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_be)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_data))) 
                                                           >> 0x20U)) 
                                                  >> 0x1bU)) 
                         | ((0x1e0U & ((IData)((1ULL 
                                                | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_addr)) 
                                                   << 1U))) 
                                       >> 0x17U)) | 
                            ((IData)(((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_addr)) 
                                               << 1U)) 
                                      >> 0x20U)) << 9U))));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[0U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[1U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__req_txn[2U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_addr,
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_data,
                     4,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_be));
        while (((~ ((0x9bU >= ((IData)(1U) + (0xffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__timeout_count))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 134);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__timeout_count 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__timeout_count);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__timeout_count))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:138: Assertion failed in %Ntb_user_domain_hw_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_addr,
                         39,((((0x9bU >= ((IData)(2U) 
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
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (7U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 138, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 140, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__71__w_addr);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             147);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
        VL_WRITEF_NX("%t : TB: Performing dummy read to UserSpiCtrl (PRNG Addr 0x20002008) after write.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_addr = 0x20002008U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_gnt = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             158);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn[0U]);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn[1U] 
            = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn[0U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn[1U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__req_txn[2U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_addr);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__grant_received = 0U;
        {
            while (VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_gnt)) {
                if (((0x9bU >= ((IData)(1U) + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                     && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                               (((IData)(1U) + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(1U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) {
                    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__grant_received = 1U;
                    goto __Vlabel32;
                }
                co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                     "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                     173);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_gnt 
                    = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_gnt);
            }
            __Vlabel32: ;
        }
        if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__grant_received))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:178: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_addr,
                         39,((((0x9bU >= ((IData)(2U) 
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
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (7U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 178, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 180, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_addr);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             184);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
        while (((~ ((0x9bU >= (0xffU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (7U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 189);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:193: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_addr,
                         39,((((0x9bU >= ((IData)(2U) 
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
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (7U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 193, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 195, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__rsp_r_chan_temp 
            = ((0x9bU >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                : 0ULL);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_data_val 
            = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_addr,
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__72__r_err),
                     1,((0x9bU >= (0xffU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                        && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (7U & (((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))));
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             203);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
        co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                             nullptr, 
                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                             260);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:290: Assertion failed in %Ntb_user_domain_hw_ctrl.send_byte_hw_ctrl: Invalid CS index %0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__66__cs_pin_idx);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 290, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 290, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         217);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_addr);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_gnt)) {
            if (((0x9bU >= ((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0xffU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__grant_received = 1U;
                goto __Vlabel33;
            }
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 173);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_gnt);
        }
        __Vlabel33: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:178: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 178, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 180, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_addr);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         184);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    while (((~ ((0x9bU >= (0xffU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (7U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             189);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:193: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 193, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 195, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__rsp_r_chan_temp 
        = ((0x9bU >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
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
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_data_val 
        = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_err),
                 1,((0x9bU >= (0xffU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (7U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         203);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__read_err 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__74__r_err;
    if (VL_UNLIKELY(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__read_err)) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:221: Assertion failed in %Ntb_user_domain_hw_ctrl.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 221, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 221, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__busy_bit 
        = (1U & __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val);
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__done_bit_tb 
        = (1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__done_bit_tb),
                 1,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__busy_bit);
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__timeout_count 
        = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__timeout_count);
    if (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             228);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__busy_bit) 
            & VL_GTS_III(32, 0x2710U, __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__timeout_count))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_addr = 0x20001008U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_gnt = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             158);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn[0U]);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn[1U] 
            = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn[0U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn[1U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__req_txn[2U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_addr);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__grant_received = 0U;
        {
            while (VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_gnt)) {
                if (((0x9bU >= ((IData)(1U) + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                     && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                               (((IData)(1U) + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(1U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) {
                    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__grant_received = 1U;
                    goto __Vlabel34;
                }
                co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                     "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                     173);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_gnt 
                    = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_gnt);
            }
            __Vlabel34: ;
        }
        if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__grant_received))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:178: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_addr,
                         39,((((0x9bU >= ((IData)(2U) 
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
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (7U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 178, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 180, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_addr);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             184);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
        while (((~ ((0x9bU >= (0xffU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (7U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 189);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:193: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_addr,
                         39,((((0x9bU >= ((IData)(2U) 
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
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (7U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 193, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 195, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__rsp_r_chan_temp 
            = ((0x9bU >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                : 0ULL);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_data_val 
            = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_addr,
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_err),
                     1,((0x9bU >= (0xffU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                        && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (7U & (((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))));
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             203);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_data_val;
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__read_err 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__75__r_err;
        if (VL_UNLIKELY(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__read_err)) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:221: Assertion failed in %Ntb_user_domain_hw_ctrl.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9);
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 221, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 221, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__busy_bit 
            = (1U & __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val);
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__done_bit_tb 
            = (1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__done_bit_tb),
                     1,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__busy_bit);
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__timeout_count);
        if (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 228);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:232: Assertion failed in %Ntb_user_domain_hw_ctrl.wait_spi_engine_idle: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 232, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 234, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_addr);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_gnt)) {
            if (((0x9bU >= ((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0xffU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__grant_received = 1U;
                goto __Vlabel35;
            }
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 173);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_gnt);
        }
        __Vlabel35: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:178: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 178, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 180, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_addr);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         184);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    while (((~ ((0x9bU >= (0xffU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (7U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             189);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:193: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 193, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 195, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__rsp_r_chan_temp 
        = ((0x9bU >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
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
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_data_val 
        = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_err),
                 1,((0x9bU >= (0xffU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (7U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         203);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__read_err 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__76__r_err;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val,
                 1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__73__status_val));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_be = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_data 
        = vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__66__byte_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_addr = 0x20001004U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_data)))) 
              << 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_data,
                 4,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_be));
    while (((~ ((0x9bU >= ((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:138: Assertion failed in %Ntb_user_domain_hw_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 138, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 140, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__77__w_addr);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         147);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_be = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_data = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_addr = 0x20001000U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_data)))) 
              << 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_data,
                 4,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_be));
    while (((~ ((0x9bU >= ((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:138: Assertion failed in %Ntb_user_domain_hw_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 138, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 140, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__78__w_addr);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         147);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__timeout_count = 0U;
    VL_WRITEF_NX("%t : TB: Waiting for SPI Engine to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         217);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_addr);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_gnt)) {
            if (((0x9bU >= ((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0xffU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__grant_received = 1U;
                goto __Vlabel36;
            }
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 173);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_gnt);
        }
        __Vlabel36: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:178: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 178, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 180, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_addr);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         184);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    while (((~ ((0x9bU >= (0xffU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (7U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             189);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:193: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 193, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 195, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__rsp_r_chan_temp 
        = ((0x9bU >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
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
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_data_val 
        = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_err),
                 1,((0x9bU >= (0xffU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (7U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         203);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__read_err 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__80__r_err;
    if (VL_UNLIKELY(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__read_err)) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:221: Assertion failed in %Ntb_user_domain_hw_ctrl.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 221, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 221, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__busy_bit 
        = (1U & __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val);
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__done_bit_tb 
        = (1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val 
                 >> 1U));
    VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__done_bit_tb),
                 1,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__busy_bit);
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__timeout_count 
        = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__timeout_count);
    if (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             228);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__busy_bit) 
            & VL_GTS_III(32, 0x2710U, __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__timeout_count))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_addr = 0x20001008U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_gnt = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             158);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn[0U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn[1U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn[2U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn[0U] 
            = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn[0U]);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn[1U] 
            = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn[0U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn[1U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__req_txn[2U];
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_addr);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__grant_received = 0U;
        {
            while (VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_gnt)) {
                if (((0x9bU >= ((IData)(1U) + (0xffU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                     && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                               (((IData)(1U) + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                >> 5U)] >> (0x1fU & 
                                            ((IData)(1U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) {
                    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__grant_received = 1U;
                    goto __Vlabel37;
                }
                co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                     "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                     173);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_gnt 
                    = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_gnt);
            }
            __Vlabel37: ;
        }
        if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__grant_received))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:178: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_addr,
                         39,((((0x9bU >= ((IData)(2U) 
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
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (7U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 178, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 180, "");
        }
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_addr);
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             184);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
        while (((~ ((0x9bU >= (0xffU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (7U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 189);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:193: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. Last rsp: %12#\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_addr,
                         39,((((0x9bU >= ((IData)(2U) 
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
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                                : 0ULL) << 2U) | (QData)((IData)(
                                                                 ((((0x9bU 
                                                                     >= 
                                                                     ((IData)(1U) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                    && (1U 
                                                                        & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                           (((IData)(1U) 
                                                                             + 
                                                                             (0xffU 
                                                                              & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                            >> 5U)] 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (0xffU 
                                                                                & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                                   << 1U) 
                                                                  | ((0x9bU 
                                                                      >= 
                                                                      (0xffU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                     && (1U 
                                                                         & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                            (7U 
                                                                             & (((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                                >> 5U))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0x27U) 
                                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 193, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 195, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__rsp_r_chan_temp 
            = ((0x9bU >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                ? (0x1fffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                       (((IData)(0x26U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                      | (((0U == (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                           (((IData)(0x21U) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x27U) 
                                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
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
                : 0ULL);
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_data_val 
            = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_err 
            = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_addr,
                     32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_data_val,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_err),
                     1,((0x9bU >= (0xffU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                        && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                  (7U & (((IData)(0x27U) 
                                          * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                         >> 5U))] >> 
                                  (0x1fU & ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))));
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             203);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_data_val;
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__read_err 
            = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__81__r_err;
        if (VL_UNLIKELY(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__read_err)) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:221: Assertion failed in %Ntb_user_domain_hw_ctrl.wait_spi_engine_idle: %t : TB: OBI Error reading SPI Engine Status!\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9);
            VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 221, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 221, "");
        }
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__busy_bit 
            = (1U & __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val);
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__done_bit_tb 
            = (1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val 
                     >> 1U));
        VL_WRITEF_NX("%t : TB: Polling SPI Engine Status (Addr 0x20001008): 0x%08x (done=%b, busy=%b)\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val,
                     1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__done_bit_tb),
                     1,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__busy_bit);
        __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__timeout_count);
        if (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 228);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x2710U, __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:232: Assertion failed in %Ntb_user_domain_hw_ctrl.wait_spi_engine_idle: %t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val);
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 232, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 234, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_addr = 0x20001008U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_addr);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_gnt)) {
            if (((0x9bU >= ((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0xffU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__grant_received = 1U;
                goto __Vlabel38;
            }
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 173);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_gnt);
        }
        __Vlabel38: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:178: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 178, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 180, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_addr);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         184);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    while (((~ ((0x9bU >= (0xffU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (7U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             189);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:193: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 193, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 195, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__rsp_r_chan_temp 
        = ((0x9bU >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
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
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_data_val 
        = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_err),
                 1,((0x9bU >= (0xffU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (7U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         203);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_data_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__read_err 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__82__r_err;
    VL_WRITEF_NX("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val,
                 1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val 
                          >> 1U)),1,(1U & __Vtask_tb_user_domain_hw_ctrl__DOT__wait_spi_engine_idle__79__status_val));
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__dc_is_data 
        = vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__66__is_data;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__cs2_active = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__cs1_active = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val = 0U;
    if ((1U & (~ (IData)((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__cs1_active))))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val 
            = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val);
    }
    if ((1U & (~ (IData)((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__cs2_active))))) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val 
            = (2U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val);
    }
    if ((0U != __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__dc_is_data)) {
        __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val 
            = (4U | __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val);
    }
    VL_WRITEF_NX("%t : TB: Writing HW Ctrl Reg (Addr 0x20002000): 0x%08x (CS1_N=%b, CS2_N=%b, DC=%b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val,
                 1,(1U & __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val),
                 1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val 
                          >> 1U)),1,(1U & (__Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val 
                                           >> 2U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_be = 0xfU;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_data 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__set_hw_cs_dc__83__ctrl_val;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_addr = 0x20002000U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         122);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_data)))) 
              << 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_data,
                 4,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_be));
    while (((~ ((0x9bU >= ((IData)(1U) + (0xffU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             134);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:138: Assertion failed in %Ntb_user_domain_hw_ctrl.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 138, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 140, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__write_obi__84__w_addr);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         147);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    VL_WRITEF_NX("%t : TB: Performing dummy read to UserSpiCtrl (PRNG Addr 0x20002008) after write.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_addr = 0x20002008U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_gnt = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         158);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn[0U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn[1U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn[2U] = 0U;
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn[0U] 
        = (1U | __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn[0U]);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn[0U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn[1U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] 
        = __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__req_txn[2U];
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_addr);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__grant_received = 0U;
    {
        while (VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_gnt)) {
            if (((0x9bU >= ((IData)(1U) + (0xffU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                 && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                           (((IData)(1U) + (0xffU & 
                                            ((IData)(0x27U) 
                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                            >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))))) {
                __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__grant_received = 1U;
                goto __Vlabel39;
            }
            co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                                 "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                                 173);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_gnt);
        }
        __Vlabel39: ;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__grant_received))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:178: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 178, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 180, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_addr);
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         184);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    while (((~ ((0x9bU >= (0xffU & ((IData)(0x27U) 
                                    * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (7U & (((IData)(0x27U) * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                 >> 5U))] >> (0x1fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))) 
            & VL_GTS_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                             189);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_domain_hw_ctrl.sv:193: Assertion failed in %Ntb_user_domain_hw_ctrl.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. Last rsp: %12#\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_addr,
                     39,((((0x9bU >= ((IData)(2U) + 
                                      (0xffU & ((IData)(0x27U) 
                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
                            ? (0x1fffffffffULL & (((QData)((IData)(
                                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x26U) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x27U) 
                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
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
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x27U) 
                                                                * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
                            : 0ULL) << 2U) | (QData)((IData)(
                                                             ((((0x9bU 
                                                                 >= 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))) 
                                                                && (1U 
                                                                    & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                       (((IData)(1U) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                        >> 5U)] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(1U) 
                                                                           + 
                                                                           (0xffU 
                                                                            & ((IData)(0x27U) 
                                                                               * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                                               << 1U) 
                                                              | ((0x9bU 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                                 && (1U 
                                                                     & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                        (7U 
                                                                         & (((IData)(0x27U) 
                                                                             * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0x27U) 
                                                                            * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))));
        VL_STOP_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 193, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 195, "");
    }
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__rsp_r_chan_temp 
        = ((0x9bU >= ((IData)(2U) + (0xffU & ((IData)(0x27U) 
                                              * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))
            ? (0x1fffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                   (((IData)(0x26U) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                                                    >> 5U)])) 
                                   << ((0U == (0x1fU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                        ? 0x20U : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x27U) 
                                                           * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))) 
                                  | (((0U == (0x1fU 
                                              & ((IData)(2U) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx))))))
                                       ? 0ULL : ((QData)((IData)(
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
                                        >> (0x1fU & 
                                            ((IData)(2U) 
                                             + (0xffU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))))))
            : 0ULL);
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_data_val 
        = (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__rsp_r_chan_temp 
                   >> 5U));
    __Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_err 
        = (1U & (IData)((__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__rsp_r_chan_temp 
                         >> 1U)));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_addr,
                 32,__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_data_val,
                 1,(IData)(__Vtask_tb_user_domain_hw_ctrl__DOT__read_obi__85__r_err),
                 1,((0x9bU >= (0xffU & ((IData)(0x27U) 
                                        * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))) 
                    && (1U & (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (7U & (((IData)(0x27U) 
                                      * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)) 
                                     >> 5U))] >> (0x1fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_idx)))))));
    co_await vlSelfRef.__VtrigSched_h15786638__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_domain_hw_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                                         203);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                         260);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("%t : TB: Finished HW Ctrl Send Byte 0x%02x to CS%0d\n--- Font Byte Sent ---\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__66__byte_val),
                 32,vlSelfRef.__Vtask_tb_user_domain_hw_ctrl__DOT__send_byte_hw_ctrl__66__cs_pin_idx);
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/tb_user_domain_hw_ctrl.sv", 
                                         358);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("%t : TB: Test Sequence Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("rtl/user_domain/tb_user_domain_hw_ctrl.sv", 360, "");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

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
