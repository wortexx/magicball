// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuser_domain_sw_cs_tb.h for the primary calling header

#include "Vuser_domain_sw_cs_tb__pch.h"
#include "Vuser_domain_sw_cs_tb__Syms.h"
#include "Vuser_domain_sw_cs_tb___024root.h"

VlCoroutine Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__1__1(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_initial__TOP__Vtiming__1__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__active = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__device;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__device = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__active = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_dc__152__is_data;
    __Vtask_user_domain_sw_cs_tb__DOT__set_dc__152__is_data = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__153__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__153__spi_data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__active = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__device;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__device = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__active = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_dc__165__is_data;
    __Vtask_user_domain_sw_cs_tb__DOT__set_dc__165__is_data = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__166__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__166__spi_data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__active = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__device;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__device = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__active = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_dc__178__is_data;
    __Vtask_user_domain_sw_cs_tb__DOT__set_dc__178__is_data = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__179__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__179__spi_data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__active = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__device;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__device = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__active = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_dc__191__is_data;
    __Vtask_user_domain_sw_cs_tb__DOT__set_dc__191__is_data = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__192__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__192__spi_data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__active = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__device;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__device = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__active = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_dc__204__is_data;
    __Vtask_user_domain_sw_cs_tb__DOT__set_dc__204__is_data = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__205__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__205__spi_data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__active = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__device;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__device = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__active = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_dc__217__is_data;
    __Vtask_user_domain_sw_cs_tb__DOT__set_dc__217__is_data = 0;
    CData/*7:0*/ __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__218__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__218__spi_data = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_data = 0;
    CData/*3:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_be;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_be = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__status_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__status_val = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__busy_bit;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__busy_bit = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__timeout_count;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__timeout_count = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_addr;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_addr = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_data_val = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_gnt;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_rvalid;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn;
    VL_ZERO_W(74, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn);
    IData/*31:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__device;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__device = 0;
    CData/*0:0*/ __Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__active;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__active = 0;
    VlWide<4>/*127:0*/ __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_12;
    std::string __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_35;
    std::string __Vtemp_36;
    std::string __Vtemp_37;
    std::string __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_41;
    std::string __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_64;
    std::string __Vtemp_65;
    std::string __Vtemp_66;
    std::string __Vtemp_67;
    VlWide<4>/*127:0*/ __Vtemp_70;
    std::string __Vtemp_71;
    VlWide<4>/*127:0*/ __Vtemp_74;
    VlWide<4>/*127:0*/ __Vtemp_93;
    std::string __Vtemp_94;
    std::string __Vtemp_95;
    std::string __Vtemp_96;
    VlWide<4>/*127:0*/ __Vtemp_99;
    std::string __Vtemp_100;
    VlWide<4>/*127:0*/ __Vtemp_103;
    VlWide<4>/*127:0*/ __Vtemp_122;
    std::string __Vtemp_123;
    std::string __Vtemp_124;
    std::string __Vtemp_125;
    VlWide<4>/*127:0*/ __Vtemp_128;
    std::string __Vtemp_129;
    VlWide<4>/*127:0*/ __Vtemp_132;
    VlWide<4>/*127:0*/ __Vtemp_151;
    std::string __Vtemp_152;
    std::string __Vtemp_153;
    std::string __Vtemp_154;
    VlWide<4>/*127:0*/ __Vtemp_157;
    std::string __Vtemp_158;
    VlWide<4>/*127:0*/ __Vtemp_161;
    VlWide<4>/*127:0*/ __Vtemp_180;
    std::string __Vtemp_181;
    std::string __Vtemp_182;
    // Body
    while (((IData)(vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__146__busy_bit) 
            & VL_GTS_III(32, 0x1388U, vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__146__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__146__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__148__r_data_val;
        vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__146__busy_bit 
            = (1U & vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__146__status_val);
        vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__146__timeout_count 
            = ((IData)(1U) + vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__146__timeout_count);
        if (vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__146__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__146__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__active = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__device 
        = vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__send_data__137__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__active) {
        __Vtemp_6[0U] = 0x4c6f7729U;
        __Vtemp_6[1U] = 0x56452028U;
        __Vtemp_6[2U] = 0x41435449U;
        __Vtemp_6[3U] = 0U;
    } else {
        __Vtemp_6[0U] = 0x69676829U;
        __Vtemp_6[1U] = 0x45202848U;
        __Vtemp_6[2U] = 0x43544956U;
        __Vtemp_6[3U] = 0x494e41U;
    }
    __Vtemp_7 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__149__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_7),120,__Vtemp_6.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtemp_8 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__send_data__137__device)];
    VL_WRITEF_NX("%t : Finished Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelfRef.__Vtask_user_domain_sw_cs_tb__DOT__send_data__137__data),
                 -1,&(__Vtemp_8));
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__data = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__device = 1U;
    __Vtemp_9 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__device)];
    VL_WRITEF_NX("%t : Sending Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__150__data),
                 -1,&(__Vtemp_9));
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__active = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__active) {
        __Vtemp_12[0U] = 0x4c6f7729U;
        __Vtemp_12[1U] = 0x56452028U;
        __Vtemp_12[2U] = 0x41435449U;
        __Vtemp_12[3U] = 0U;
    } else {
        __Vtemp_12[0U] = 0x69676829U;
        __Vtemp_12[1U] = 0x45202848U;
        __Vtemp_12[2U] = 0x43544956U;
        __Vtemp_12[3U] = 0x494e41U;
    }
    __Vtemp_13 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__151__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_13),120,__Vtemp_12.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if (VL_UNLIKELY((1U == __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__device))) {
        __Vtask_user_domain_sw_cs_tb__DOT__set_dc__152__is_data = 1U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             216);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        if (__Vtask_user_domain_sw_cs_tb__DOT__set_dc__152__is_data) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 1U;
            __Vtemp_16[0U] = 0x69676829U;
            __Vtemp_16[1U] = 0x61202848U;
            __Vtemp_16[2U] = 0x446174U;
            __Vtemp_16[3U] = 0U;
        } else {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 0U;
            __Vtemp_16[0U] = 0x4c6f7729U;
            __Vtemp_16[1U] = 0x6e642028U;
            __Vtemp_16[2U] = 0x6f6d6d61U;
            __Vtemp_16[3U] = 0x43U;
        }
        VL_WRITEF_NX("%t : Set D/C: %s\n",0,64,VL_TIME_UNITED_Q(1000),
                     -9,104,__Vtemp_16.data());
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                             219);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__153__spi_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__data;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__155__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__156__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__154__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__153__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_addr = 0x20001004U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__157__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_data = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_addr = 0x20001000U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__158__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__160__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__161__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__159__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__active = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__active) {
        __Vtemp_35[0U] = 0x4c6f7729U;
        __Vtemp_35[1U] = 0x56452028U;
        __Vtemp_35[2U] = 0x41435449U;
        __Vtemp_35[3U] = 0U;
    } else {
        __Vtemp_35[0U] = 0x69676829U;
        __Vtemp_35[1U] = 0x45202848U;
        __Vtemp_35[2U] = 0x43544956U;
        __Vtemp_35[3U] = 0x494e41U;
    }
    __Vtemp_36 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__162__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_36),120,__Vtemp_35.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtemp_37 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__150__device)];
    VL_WRITEF_NX("%t : Finished Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__150__data),
                 -1,&(__Vtemp_37));
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__data = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__device = 1U;
    __Vtemp_38 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__device)];
    VL_WRITEF_NX("%t : Sending Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__163__data),
                 -1,&(__Vtemp_38));
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__active = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__active) {
        __Vtemp_41[0U] = 0x4c6f7729U;
        __Vtemp_41[1U] = 0x56452028U;
        __Vtemp_41[2U] = 0x41435449U;
        __Vtemp_41[3U] = 0U;
    } else {
        __Vtemp_41[0U] = 0x69676829U;
        __Vtemp_41[1U] = 0x45202848U;
        __Vtemp_41[2U] = 0x43544956U;
        __Vtemp_41[3U] = 0x494e41U;
    }
    __Vtemp_42 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__164__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_42),120,__Vtemp_41.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if (VL_UNLIKELY((1U == __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__device))) {
        __Vtask_user_domain_sw_cs_tb__DOT__set_dc__165__is_data = 1U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             216);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        if (__Vtask_user_domain_sw_cs_tb__DOT__set_dc__165__is_data) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 1U;
            __Vtemp_45[0U] = 0x69676829U;
            __Vtemp_45[1U] = 0x61202848U;
            __Vtemp_45[2U] = 0x446174U;
            __Vtemp_45[3U] = 0U;
        } else {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 0U;
            __Vtemp_45[0U] = 0x4c6f7729U;
            __Vtemp_45[1U] = 0x6e642028U;
            __Vtemp_45[2U] = 0x6f6d6d61U;
            __Vtemp_45[3U] = 0x43U;
        }
        VL_WRITEF_NX("%t : Set D/C: %s\n",0,64,VL_TIME_UNITED_Q(1000),
                     -9,104,__Vtemp_45.data());
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                             219);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__166__spi_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__data;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__168__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__169__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__167__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__166__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_addr = 0x20001004U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__170__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_data = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_addr = 0x20001000U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__171__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__173__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__174__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__172__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__active = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__active) {
        __Vtemp_64[0U] = 0x4c6f7729U;
        __Vtemp_64[1U] = 0x56452028U;
        __Vtemp_64[2U] = 0x41435449U;
        __Vtemp_64[3U] = 0U;
    } else {
        __Vtemp_64[0U] = 0x69676829U;
        __Vtemp_64[1U] = 0x45202848U;
        __Vtemp_64[2U] = 0x43544956U;
        __Vtemp_64[3U] = 0x494e41U;
    }
    __Vtemp_65 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__175__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_65),120,__Vtemp_64.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtemp_66 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__163__device)];
    VL_WRITEF_NX("%t : Finished Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__163__data),
                 -1,&(__Vtemp_66));
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__data = 0x41U;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__device = 1U;
    __Vtemp_67 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__device)];
    VL_WRITEF_NX("%t : Sending Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__176__data),
                 -1,&(__Vtemp_67));
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__active = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__active) {
        __Vtemp_70[0U] = 0x4c6f7729U;
        __Vtemp_70[1U] = 0x56452028U;
        __Vtemp_70[2U] = 0x41435449U;
        __Vtemp_70[3U] = 0U;
    } else {
        __Vtemp_70[0U] = 0x69676829U;
        __Vtemp_70[1U] = 0x45202848U;
        __Vtemp_70[2U] = 0x43544956U;
        __Vtemp_70[3U] = 0x494e41U;
    }
    __Vtemp_71 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__177__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_71),120,__Vtemp_70.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if (VL_UNLIKELY((1U == __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__device))) {
        __Vtask_user_domain_sw_cs_tb__DOT__set_dc__178__is_data = 1U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             216);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        if (__Vtask_user_domain_sw_cs_tb__DOT__set_dc__178__is_data) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 1U;
            __Vtemp_74[0U] = 0x69676829U;
            __Vtemp_74[1U] = 0x61202848U;
            __Vtemp_74[2U] = 0x446174U;
            __Vtemp_74[3U] = 0U;
        } else {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 0U;
            __Vtemp_74[0U] = 0x4c6f7729U;
            __Vtemp_74[1U] = 0x6e642028U;
            __Vtemp_74[2U] = 0x6f6d6d61U;
            __Vtemp_74[3U] = 0x43U;
        }
        VL_WRITEF_NX("%t : Set D/C: %s\n",0,64,VL_TIME_UNITED_Q(1000),
                     -9,104,__Vtemp_74.data());
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                             219);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__179__spi_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__data;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__181__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__182__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__180__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__179__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_addr = 0x20001004U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__183__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_data = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_addr = 0x20001000U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__184__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__186__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__187__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__185__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__active = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__active) {
        __Vtemp_93[0U] = 0x4c6f7729U;
        __Vtemp_93[1U] = 0x56452028U;
        __Vtemp_93[2U] = 0x41435449U;
        __Vtemp_93[3U] = 0U;
    } else {
        __Vtemp_93[0U] = 0x69676829U;
        __Vtemp_93[1U] = 0x45202848U;
        __Vtemp_93[2U] = 0x43544956U;
        __Vtemp_93[3U] = 0x494e41U;
    }
    __Vtemp_94 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__188__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_94),120,__Vtemp_93.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtemp_95 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__176__device)];
    VL_WRITEF_NX("%t : Finished Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__176__data),
                 -1,&(__Vtemp_95));
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__data = 0x7fU;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__device = 1U;
    __Vtemp_96 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__device)];
    VL_WRITEF_NX("%t : Sending Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__189__data),
                 -1,&(__Vtemp_96));
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__active = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__active) {
        __Vtemp_99[0U] = 0x4c6f7729U;
        __Vtemp_99[1U] = 0x56452028U;
        __Vtemp_99[2U] = 0x41435449U;
        __Vtemp_99[3U] = 0U;
    } else {
        __Vtemp_99[0U] = 0x69676829U;
        __Vtemp_99[1U] = 0x45202848U;
        __Vtemp_99[2U] = 0x43544956U;
        __Vtemp_99[3U] = 0x494e41U;
    }
    __Vtemp_100 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__190__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_100),120,__Vtemp_99.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if (VL_UNLIKELY((1U == __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__device))) {
        __Vtask_user_domain_sw_cs_tb__DOT__set_dc__191__is_data = 1U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             216);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        if (__Vtask_user_domain_sw_cs_tb__DOT__set_dc__191__is_data) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 1U;
            __Vtemp_103[0U] = 0x69676829U;
            __Vtemp_103[1U] = 0x61202848U;
            __Vtemp_103[2U] = 0x446174U;
            __Vtemp_103[3U] = 0U;
        } else {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 0U;
            __Vtemp_103[0U] = 0x4c6f7729U;
            __Vtemp_103[1U] = 0x6e642028U;
            __Vtemp_103[2U] = 0x6f6d6d61U;
            __Vtemp_103[3U] = 0x43U;
        }
        VL_WRITEF_NX("%t : Set D/C: %s\n",0,64,VL_TIME_UNITED_Q(1000),
                     -9,104,__Vtemp_103.data());
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                             219);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__192__spi_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__data;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__194__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__195__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__193__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__192__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_addr = 0x20001004U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__196__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_data = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_addr = 0x20001000U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__197__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__199__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__200__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__198__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__active = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__active) {
        __Vtemp_122[0U] = 0x4c6f7729U;
        __Vtemp_122[1U] = 0x56452028U;
        __Vtemp_122[2U] = 0x41435449U;
        __Vtemp_122[3U] = 0U;
    } else {
        __Vtemp_122[0U] = 0x69676829U;
        __Vtemp_122[1U] = 0x45202848U;
        __Vtemp_122[2U] = 0x43544956U;
        __Vtemp_122[3U] = 0x494e41U;
    }
    __Vtemp_123 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__201__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_123),120,__Vtemp_122.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtemp_124 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__189__device)];
    VL_WRITEF_NX("%t : Finished Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__189__data),
                 -1,&(__Vtemp_124));
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__data = 0x41U;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__device = 1U;
    __Vtemp_125 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__device)];
    VL_WRITEF_NX("%t : Sending Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__202__data),
                 -1,&(__Vtemp_125));
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__active = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__active) {
        __Vtemp_128[0U] = 0x4c6f7729U;
        __Vtemp_128[1U] = 0x56452028U;
        __Vtemp_128[2U] = 0x41435449U;
        __Vtemp_128[3U] = 0U;
    } else {
        __Vtemp_128[0U] = 0x69676829U;
        __Vtemp_128[1U] = 0x45202848U;
        __Vtemp_128[2U] = 0x43544956U;
        __Vtemp_128[3U] = 0x494e41U;
    }
    __Vtemp_129 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__203__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_129),120,__Vtemp_128.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if (VL_UNLIKELY((1U == __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__device))) {
        __Vtask_user_domain_sw_cs_tb__DOT__set_dc__204__is_data = 1U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             216);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        if (__Vtask_user_domain_sw_cs_tb__DOT__set_dc__204__is_data) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 1U;
            __Vtemp_132[0U] = 0x69676829U;
            __Vtemp_132[1U] = 0x61202848U;
            __Vtemp_132[2U] = 0x446174U;
            __Vtemp_132[3U] = 0U;
        } else {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 0U;
            __Vtemp_132[0U] = 0x4c6f7729U;
            __Vtemp_132[1U] = 0x6e642028U;
            __Vtemp_132[2U] = 0x6f6d6d61U;
            __Vtemp_132[3U] = 0x43U;
        }
        VL_WRITEF_NX("%t : Set D/C: %s\n",0,64,VL_TIME_UNITED_Q(1000),
                     -9,104,__Vtemp_132.data());
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                             219);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__205__spi_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__data;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__207__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__208__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__206__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__205__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_addr = 0x20001004U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__209__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_data = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_addr = 0x20001000U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__210__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__212__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__213__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__211__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__active = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__active) {
        __Vtemp_151[0U] = 0x4c6f7729U;
        __Vtemp_151[1U] = 0x56452028U;
        __Vtemp_151[2U] = 0x41435449U;
        __Vtemp_151[3U] = 0U;
    } else {
        __Vtemp_151[0U] = 0x69676829U;
        __Vtemp_151[1U] = 0x45202848U;
        __Vtemp_151[2U] = 0x43544956U;
        __Vtemp_151[3U] = 0x494e41U;
    }
    __Vtemp_152 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__214__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_152),120,__Vtemp_151.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtemp_153 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__202__device)];
    VL_WRITEF_NX("%t : Finished Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__202__data),
                 -1,&(__Vtemp_153));
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__data = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__device = 1U;
    __Vtemp_154 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__device)];
    VL_WRITEF_NX("%t : Sending Data 0x%x to %@\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__215__data),
                 -1,&(__Vtemp_154));
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__active = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__active) {
        __Vtemp_157[0U] = 0x4c6f7729U;
        __Vtemp_157[1U] = 0x56452028U;
        __Vtemp_157[2U] = 0x41435449U;
        __Vtemp_157[3U] = 0U;
    } else {
        __Vtemp_157[0U] = 0x69676829U;
        __Vtemp_157[1U] = 0x45202848U;
        __Vtemp_157[2U] = 0x43544956U;
        __Vtemp_157[3U] = 0x494e41U;
    }
    __Vtemp_158 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__216__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_158),120,__Vtemp_157.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if (VL_UNLIKELY((1U == __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__device))) {
        __Vtask_user_domain_sw_cs_tb__DOT__set_dc__217__is_data = 1U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             216);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        if (__Vtask_user_domain_sw_cs_tb__DOT__set_dc__217__is_data) {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 1U;
            __Vtemp_161[0U] = 0x69676829U;
            __Vtemp_161[1U] = 0x61202848U;
            __Vtemp_161[2U] = 0x446174U;
            __Vtemp_161[3U] = 0U;
        } else {
            vlSelfRef.user_domain_sw_cs_tb__DOT__tb_dc_ssd1331 = 0U;
            __Vtemp_161[0U] = 0x4c6f7729U;
            __Vtemp_161[1U] = 0x6e642028U;
            __Vtemp_161[2U] = 0x6f6d6d61U;
            __Vtemp_161[3U] = 0x43U;
        }
        VL_WRITEF_NX("%t : Set D/C: %s\n",0,64,VL_TIME_UNITED_Q(1000),
                     -9,104,__Vtemp_161.data());
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                             219);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__218__spi_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__data;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__220__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__221__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__219__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_data 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_spi_byte_raw__218__spi_data;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_addr = 0x20001004U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__222__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_be = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_data = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_addr = 0x20001000U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         114);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[0U] 
        = ((0x1fU & __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_be)) 
                        << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_data)))) 
              << 5U));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[1U] 
        = (((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_be)) 
                      << 0x20U) | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_addr)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_be)) 
                                               << 0x20U) 
                                              | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_addr)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_be)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_addr)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_addr)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Write Req : Addr=0x%x Data=0x%x BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_data,
                 4,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_be));
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             125);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__timeout_count);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:129: Assertion failed in %Nuser_domain_sw_cs_tb.write_obi: %t : Timeout waiting for OBI grant during write to %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 129, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         131);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Write Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__write_obi__223__w_addr);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__timeout_count = 0U;
    VL_WRITEF_NX("%t : Waiting for SPI HW to finish...\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         186);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_addr = 0x20001008U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_gnt = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         144);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn[0U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn[1U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn[0U] 
        = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn[0U]);
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn[1U] 
        = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn[0U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn[1U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__req_txn[2U];
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_addr);
    while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU & ((IData)(0x27U) 
                                                   * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                          (((IData)(1U) + (0x7fU & 
                                           ((IData)(0x27U) 
                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                           >> 5U)] >> (0x1fU & ((IData)(1U) 
                                                + (0x7fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             153);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_gnt);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
    }
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         159);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
        = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
    vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_addr);
    while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             164);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_rvalid);
    }
    if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_addr);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
    }
    __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_data_val 
        = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                     ? (0x1fffffffffULL & (((QData)((IData)(
                                                            vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                            (((IData)(0x26U) 
                                                              + 
                                                              (0x7fU 
                                                               & ((IData)(0x27U) 
                                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                             >> 5U)])) 
                                            << ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                 ? 0x20U
                                                 : 
                                                ((IData)(0x40U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                           | (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x27U) 
                                                        * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                ? 0ULL
                                                : ((QData)((IData)(
                                                                   vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                   (((IData)(0x21U) 
                                                                     + 
                                                                     (0x7fU 
                                                                      & ((IData)(0x27U) 
                                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                              | ((QData)((IData)(
                                                                 vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                 (((IData)(2U) 
                                                                   + 
                                                                   (0x7fU 
                                                                    & ((IData)(0x27U) 
                                                                       * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                  >> 5U)])) 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x27U) 
                                                         * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                     : 0ULL) >> 5U));
    VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_addr,
                 32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_data_val);
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         172);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__status_val 
        = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__225__r_data_val;
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__busy_bit 
        = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__status_val);
    __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__timeout_count 
        = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__timeout_count);
    if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__busy_bit) {
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             191);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (((IData)(__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__busy_bit) 
            & VL_GTS_III(32, 0x1388U, __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__timeout_count))) {
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_addr = 0x20001008U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_gnt = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_rvalid = 0U;
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             144);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn[0U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn[1U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn[0U] 
            = (1U | __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn[0U]);
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn[1U] 
            = ((0x1ffU & __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn[1U]) 
               | ((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_addr)) 
                           << 1U)) << 9U));
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn[2U] 
            = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_addr)) 
                                   << 1U)) >> 0x17U) 
                         | ((IData)((((QData)((IData)(__Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_addr)) 
                                      << 1U) >> 0x20U)) 
                            << 9U)));
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn[0U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn[1U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__req_txn[2U];
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 1U;
        VL_WRITEF_NX("%t : OBI Read Req  : Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_addr);
        while (((~ ((0x4dU >= ((IData)(1U) + (0x7fU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))) 
                    && (1U & (vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                              (((IData)(1U) + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx)))) 
                               >> 5U)] >> (0x1fU & 
                                           ((IData)(1U) 
                                            + (0x7fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__user_idx))))))))) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 153);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_gnt);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:157: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI grant during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 157, "");
        }
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             159);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U]);
        vlSelfRef.user_domain_sw_cs_tb__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : OBI Read Gnt Rcvd: Addr=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_addr);
        while (((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__cnt_down)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 164);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
            __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_rvalid);
        }
        if (VL_UNLIKELY((0x3e8U == __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:168: Assertion failed in %Nuser_domain_sw_cs_tb.read_obi: %t : Timeout waiting for OBI rvalid during read from %x\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_addr);
            VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
            VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 168, "");
        }
        __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_data_val 
            = (IData)((((0x4dU >= ((IData)(2U) + (0x7fU 
                                                  & ((IData)(0x27U) 
                                                     * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))
                         ? (0x1fffffffffULL & (((QData)((IData)(
                                                                vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                (((IData)(0x26U) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x27U) 
                                                                      * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x27U) 
                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                               | (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x27U) 
                                                            * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q))))))
                                                    ? 0ULL
                                                    : 
                                                   ((QData)((IData)(
                                                                    vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                    (((IData)(0x21U) 
                                                                      + 
                                                                      (0x7fU 
                                                                       & ((IData)(0x27U) 
                                                                          * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))) 
                                                  | ((QData)((IData)(
                                                                     vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__all_user_sbr_obi_rsp[
                                                                     (((IData)(2U) 
                                                                       + 
                                                                       (0x7fU 
                                                                        & ((IData)(0x27U) 
                                                                           * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))) 
                                                                      >> 5U)])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x27U) 
                                                             * (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT__i_obi_demux__DOT__select_q)))))))))
                         : 0ULL) >> 5U));
        VL_WRITEF_NX("%t : OBI Read Data Rcvd: Addr=0x%x Data=0x%x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_addr,
                     32,__Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_data_val);
        co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                             "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                             172);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[0U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[1U] = 0U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__user_sbr_obi_req[2U] = 0U;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__status_val 
            = __Vtask_user_domain_sw_cs_tb__DOT__read_obi__226__r_data_val;
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__busy_bit 
            = (1U & __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__status_val);
        __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__timeout_count 
            = ((IData)(1U) + __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__timeout_count);
        if (__Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__busy_bit) {
            co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                                 "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                                 191);
            vlSelfRef.__Vm_traceActivity[3U] = 1U;
        }
    }
    if (VL_UNLIKELY((0x1388U == __Vtask_user_domain_sw_cs_tb__DOT__wait_spi_done__224__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: user_domain_sw_cs_tb.sv:194: Assertion failed in %Nuser_domain_sw_cs_tb.wait_spi_done: %t : Timeout waiting for SPI HW to become idle.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
        VL_STOP_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
        VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 194, "");
    }
    VL_WRITEF_NX("%t : SPI HW finished.\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__active = 0U;
    __Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__device 
        = __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__device;
    co_await vlSelfRef.__VtrigSched_h7829ce67__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge user_domain_sw_cs_tb.clk_i)", 
                                                         "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                                         201);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    if ((1U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__active)));
    } else if ((2U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n 
            = (1U & (~ (IData)(__Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__active)));
    } else if ((0U == __Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__device)) {
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_ssd1331_n = 1U;
        vlSelfRef.user_domain_sw_cs_tb__DOT__tb_cs_adxl345_n = 1U;
    }
    if (__Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__active) {
        __Vtemp_180[0U] = 0x4c6f7729U;
        __Vtemp_180[1U] = 0x56452028U;
        __Vtemp_180[2U] = 0x41435449U;
        __Vtemp_180[3U] = 0U;
    } else {
        __Vtemp_180[0U] = 0x69676829U;
        __Vtemp_180[1U] = 0x45202848U;
        __Vtemp_180[2U] = 0x43544956U;
        __Vtemp_180[3U] = 0x494e41U;
    }
    __Vtemp_181 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__set_cs__227__device)];
    VL_WRITEF_NX("%t : Set CS: %@ %s\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9,-1,&(__Vtemp_181),120,__Vtemp_180.data());
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         211);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    __Vtemp_182 = Vuser_domain_sw_cs_tb___024unit::__Venumtab_enum_name377
        [(3U & __Vtask_user_domain_sw_cs_tb__DOT__send_data__215__device)];
    VL_WRITEF_NX("%t : Finished Data 0x%x to %@\n--- 'HI' Display Sequence Sent ---\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(__Vtask_user_domain_sw_cs_tb__DOT__send_data__215__data),
                 -1,&(__Vtemp_182));
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/user_domain_sw_cs_tb.sv", 
                                         339);
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    VL_WRITEF_NX("%t : Test Sequence Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("rtl/user_domain/user_domain_sw_cs_tb.sv", 343, "");
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}
