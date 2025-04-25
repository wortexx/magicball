// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_obi_spi_direct.h for the primary calling header

#ifndef VERILATED_VTB_OBI_SPI_DIRECT___024UNIT_H_
#define VERILATED_VTB_OBI_SPI_DIRECT___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_obi_spi_direct__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_obi_spi_direct___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<std::string, 4> __Venumtab_enum_name3;

    // INTERNAL VARIABLES
    Vtb_obi_spi_direct__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_obi_spi_direct___024unit(Vtb_obi_spi_direct__Syms* symsp, const char* v__name);
    ~Vtb_obi_spi_direct___024unit();
    VL_UNCOPYABLE(Vtb_obi_spi_direct___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
