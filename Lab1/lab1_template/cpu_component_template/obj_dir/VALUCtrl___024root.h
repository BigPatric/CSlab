// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALUCtrl.h for the primary calling header

#ifndef VERILATED_VALUCTRL___024ROOT_H_
#define VERILATED_VALUCTRL___024ROOT_H_  // guard

#include "verilated.h"

class VALUCtrl__Syms;

class VALUCtrl___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(ALUOp,1,0);
    VL_IN8(funct7,0,0);
    VL_IN8(funct3,2,0);
    VL_OUT8(ALUCtl,3,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VALUCtrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALUCtrl___024root(VALUCtrl__Syms* symsp, const char* v__name);
    ~VALUCtrl___024root();
    VL_UNCOPYABLE(VALUCtrl___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
