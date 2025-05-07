// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_user_spi_ctrl.h for the primary calling header

#ifndef VERILATED_VTB_USER_SPI_CTRL___024UNIT_H_
#define VERILATED_VTB_USER_SPI_CTRL___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_user_spi_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_user_spi_ctrl___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_user_spi_ctrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_user_spi_ctrl___024unit(Vtb_user_spi_ctrl__Syms* symsp, const char* v__name);
    ~Vtb_user_spi_ctrl___024unit();
    VL_UNCOPYABLE(Vtb_user_spi_ctrl___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
