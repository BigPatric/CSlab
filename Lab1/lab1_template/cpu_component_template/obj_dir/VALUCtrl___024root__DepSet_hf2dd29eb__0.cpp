// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALUCtrl.h for the primary calling header

#include "verilated.h"

#include "VALUCtrl___024root.h"

extern const VlUnpacked<CData/*3:0*/, 64> VALUCtrl__ConstPool__TABLE_hf6f118ff_0;

VL_INLINE_OPT void VALUCtrl___024root___ico_sequent__TOP__0(VALUCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUCtrl___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->funct7) << 5U) 
                    | (((IData)(vlSelf->funct3) << 2U) 
                       | (IData)(vlSelf->ALUOp)));
    vlSelf->ALUCtl = VALUCtrl__ConstPool__TABLE_hf6f118ff_0
        [__Vtableidx1];
}

void VALUCtrl___024root___eval_ico(VALUCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUCtrl___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VALUCtrl___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VALUCtrl___024root___eval_act(VALUCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUCtrl___024root___eval_act\n"); );
}

void VALUCtrl___024root___eval_nba(VALUCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUCtrl___024root___eval_nba\n"); );
}

void VALUCtrl___024root___eval_triggers__ico(VALUCtrl___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALUCtrl___024root___dump_triggers__ico(VALUCtrl___024root* vlSelf);
#endif  // VL_DEBUG
void VALUCtrl___024root___eval_triggers__act(VALUCtrl___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALUCtrl___024root___dump_triggers__act(VALUCtrl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALUCtrl___024root___dump_triggers__nba(VALUCtrl___024root* vlSelf);
#endif  // VL_DEBUG

void VALUCtrl___024root___eval(VALUCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUCtrl___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VALUCtrl___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VALUCtrl___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("ALUCtrl.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VALUCtrl___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VALUCtrl___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VALUCtrl___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ALUCtrl.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VALUCtrl___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VALUCtrl___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ALUCtrl.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VALUCtrl___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VALUCtrl___024root___eval_debug_assertions(VALUCtrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALUCtrl___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ALUOp & 0xfcU))) {
        Verilated::overWidthError("ALUOp");}
    if (VL_UNLIKELY((vlSelf->funct7 & 0xfeU))) {
        Verilated::overWidthError("funct7");}
    if (VL_UNLIKELY((vlSelf->funct3 & 0xf8U))) {
        Verilated::overWidthError("funct3");}
}
#endif  // VL_DEBUG
