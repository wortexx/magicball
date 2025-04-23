// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vuser_domain_sw_cs_tb__pch.h"
#include "Vuser_domain_sw_cs_tb.h"
#include "Vuser_domain_sw_cs_tb___024root.h"
#include "Vuser_domain_sw_cs_tb___024unit.h"
#include "Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg.h"

// FUNCTIONS
Vuser_domain_sw_cs_tb__Syms::~Vuser_domain_sw_cs_tb__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vuser_domain_sw_cs_tb__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vuser_domain_sw_cs_tb__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vuser_domain_sw_cs_tb__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vuser_domain_sw_cs_tb__Syms::Vuser_domain_sw_cs_tb__Syms(VerilatedContext* contextp, const char* namep, Vuser_domain_sw_cs_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__soc_ctrl_reg_pkg{this, Verilated::catName(namep, "soc_ctrl_reg_pkg")}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__soc_ctrl_reg_pkg = &TOP__soc_ctrl_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__soc_ctrl_reg_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_user_domain_sw_cs_tb.configure(this, name(), "user_domain_sw_cs_tb", "user_domain_sw_cs_tb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_user_domain_sw_cs_tb__read_obi.configure(this, name(), "user_domain_sw_cs_tb.read_obi", "read_obi", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_user_domain_sw_cs_tb__wait_spi_done.configure(this, name(), "user_domain_sw_cs_tb.wait_spi_done", "wait_spi_done", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_user_domain_sw_cs_tb__write_obi.configure(this, name(), "user_domain_sw_cs_tb.write_obi", "write_obi", -9, VerilatedScope::SCOPE_OTHER);
}
