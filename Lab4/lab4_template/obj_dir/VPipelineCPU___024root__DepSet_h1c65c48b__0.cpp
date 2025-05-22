// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___eval_act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*3:0*/, 64> VPipelineCPU__ConstPool__TABLE_hc2a4223b_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__mem_write_EX_MEM) {
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM 
                   >> 0x18U);
            vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->PipelineCPU__DOT__alu_result_EX_MEM));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->PipelineCPU__DOT__alu_result_EX_MEM));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM 
                            >> 8U));
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->PipelineCPU__DOT__alu_result_EX_MEM));
            vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM);
            vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->PipelineCPU__DOT__alu_result_EX_MEM);
        }
        vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB 
            = vlSelf->PipelineCPU__DOT__mem_to_reg_EX_MEM;
        vlSelf->PipelineCPU__DOT__alu_result_MEM_WB 
            = vlSelf->PipelineCPU__DOT__alu_result_EX_MEM;
        vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB = vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM;
        vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB 
            = vlSelf->PipelineCPU__DOT__mem_read_data;
        vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM 
            = vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX_mux;
        vlSelf->PipelineCPU__DOT__mem_to_reg_EX_MEM 
            = vlSelf->PipelineCPU__DOT__mem_to_reg_ID_EX;
        vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM = vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX;
        if (vlSelf->PipelineCPU__DOT__Flush_HD) {
            vlSelf->PipelineCPU__DOT__imm_ID_EX = 0U;
            vlSelf->PipelineCPU__DOT__alu_op_ID_EX = 0U;
            vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX = 0U;
            vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX = 0U;
            vlSelf->PipelineCPU__DOT__funct3_ID_EX = 0U;
            vlSelf->PipelineCPU__DOT__instruct_ID_EX = 0U;
            vlSelf->PipelineCPU__DOT__mem_to_reg_ID_EX = 0U;
            vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX = 0U;
        } else {
            vlSelf->PipelineCPU__DOT__imm_ID_EX = vlSelf->PipelineCPU__DOT__imm;
            vlSelf->PipelineCPU__DOT__alu_op_ID_EX 
                = (3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                         >> 3U));
            vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX 
                = vlSelf->PipelineCPU__DOT__reg_readData2_mux;
            vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX 
                = vlSelf->PipelineCPU__DOT__reg_readData1_mux;
            vlSelf->PipelineCPU__DOT__funct3_ID_EX 
                = (7U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                         >> 0xcU));
            vlSelf->PipelineCPU__DOT__instruct_ID_EX 
                = vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t;
            vlSelf->PipelineCPU__DOT__mem_to_reg_ID_EX 
                = (3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                         >> 5U));
            vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX 
                = vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_4_t;
        }
        if (((IData)(vlSelf->PipelineCPU__DOT__Flush_HD) 
             | (IData)(vlSelf->PipelineCPU__DOT__flushCtrl))) {
            vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t = 0U;
            vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_4_t = 0U;
        } else {
            vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t 
                = vlSelf->PipelineCPU__DOT__pc_current;
            vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_4_t 
                = ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current);
        }
        vlSelf->PipelineCPU__DOT__alu_src_ID_EX = (1U 
                                                   & ((~ (IData)(vlSelf->PipelineCPU__DOT__Flush_HD)) 
                                                      & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                                         >> 1U)));
        vlSelf->PipelineCPU__DOT__funct7_ID_EX = (1U 
                                                  & ((~ (IData)(vlSelf->PipelineCPU__DOT__Flush_HD)) 
                                                     & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                        >> 0x1eU)));
        vlSelf->PipelineCPU__DOT__mem_write_EX_MEM 
            = vlSelf->PipelineCPU__DOT__mem_write_ID_EX;
    } else {
        vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
        vlSelf->PipelineCPU__DOT__imm_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__alu_op_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t = 0U;
        vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB = 0U;
        vlSelf->PipelineCPU__DOT__alu_result_MEM_WB = 0U;
        vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB = 0U;
        vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB = 0U;
        vlSelf->PipelineCPU__DOT__funct3_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__instruct_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM = 0U;
        vlSelf->PipelineCPU__DOT__mem_to_reg_EX_MEM = 0U;
        vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM = 0U;
        vlSelf->PipelineCPU__DOT__mem_to_reg_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_4_t = 0U;
        vlSelf->PipelineCPU__DOT__alu_src_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__funct7_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__mem_write_EX_MEM = 0U;
    }
    __Vtableidx2 = (((IData)(vlSelf->PipelineCPU__DOT__funct7_ID_EX) 
                     << 5U) | (((IData)(vlSelf->PipelineCPU__DOT__funct3_ID_EX) 
                                << 2U) | (IData)(vlSelf->PipelineCPU__DOT__alu_op_ID_EX)));
    vlSelf->PipelineCPU__DOT__alu_control = VPipelineCPU__ConstPool__TABLE_hc2a4223b_0
        [__Vtableidx2];
    vlSelf->PipelineCPU__DOT__mem_write_ID_EX = ((IData)(vlSelf->start) 
                                                 & ((~ (IData)(vlSelf->PipelineCPU__DOT__Flush_HD)) 
                                                    & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                                       >> 2U)));
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__1(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if (vlSelf->PipelineCPU__DOT__reg_write_MEM_WB) {
            __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->PipelineCPU__DOT__write_reg_MEM_WB))
                    ? 0U : vlSelf->PipelineCPU__DOT__write_data);
            __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelf->PipelineCPU__DOT__write_reg_MEM_WB;
        }
    } else {
        __Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__PipelineCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__PipelineCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__PipelineCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__2(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->PipelineCPU__DOT__mem_read_EX_MEM) {
        vlSelf->PipelineCPU__DOT__mem_read_data = (
                                                   (0xffffffU 
                                                    & vlSelf->PipelineCPU__DOT__mem_read_data) 
                                                   | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->PipelineCPU__DOT__alu_result_EX_MEM))] 
                                                      << 0x18U));
        vlSelf->PipelineCPU__DOT__mem_read_data = (
                                                   (0xff00ffffU 
                                                    & vlSelf->PipelineCPU__DOT__mem_read_data) 
                                                   | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->PipelineCPU__DOT__alu_result_EX_MEM))] 
                                                      << 0x10U));
        vlSelf->PipelineCPU__DOT__mem_read_data = (
                                                   (0xffff00ffU 
                                                    & vlSelf->PipelineCPU__DOT__mem_read_data) 
                                                   | (vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->PipelineCPU__DOT__alu_result_EX_MEM))] 
                                                      << 8U));
        vlSelf->PipelineCPU__DOT__mem_read_data = (
                                                   (0xffffff00U 
                                                    & vlSelf->PipelineCPU__DOT__mem_read_data) 
                                                   | vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory
                                                   [
                                                   (0x7fU 
                                                    & vlSelf->PipelineCPU__DOT__alu_result_EX_MEM)]);
    }
}

VL_INLINE_OPT void VPipelineCPU___024root___nba_sequent__TOP__3(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->PipelineCPU__DOT__write_data = ((0U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                             ? vlSelf->PipelineCPU__DOT__alu_result_MEM_WB
                                             : ((1U 
                                                 == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                                 ? vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                                  ? vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB
                                                  : 0U)));
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->start) {
        vlSelf->PipelineCPU__DOT__reg_write_MEM_WB 
            = vlSelf->PipelineCPU__DOT__reg_write_EX_MEM;
        vlSelf->PipelineCPU__DOT__write_reg_MEM_WB 
            = vlSelf->PipelineCPU__DOT__write_reg_EX_MEM;
        vlSelf->PipelineCPU__DOT__alu_result_EX_MEM 
            = vlSelf->PipelineCPU__DOT__alu_result;
        vlSelf->PipelineCPU__DOT__write_reg_EX_MEM 
            = vlSelf->PipelineCPU__DOT__writeReg_ID_EX;
        vlSelf->PipelineCPU__DOT__writeReg_ID_EX = 
            ((IData)(vlSelf->PipelineCPU__DOT__Flush_HD)
              ? 0U : (0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                               >> 7U)));
        vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
            = (((IData)(vlSelf->PipelineCPU__DOT__Flush_HD) 
                | (IData)(vlSelf->PipelineCPU__DOT__flushCtrl))
                ? 0U : ((0x80U <= vlSelf->PipelineCPU__DOT__pc_current)
                         ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                  [(0x7fU & vlSelf->PipelineCPU__DOT__pc_current)] 
                                  << 0x18U) | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->PipelineCPU__DOT__pc_current))] 
                                                << 0x10U) 
                                               | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                   [
                                                   (0x7fU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->PipelineCPU__DOT__pc_current))] 
                                                   << 8U) 
                                                  | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                  [
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->PipelineCPU__DOT__pc_current))])))));
        vlSelf->PipelineCPU__DOT__pc_current = vlSelf->PipelineCPU__DOT__pc_next;
        vlSelf->PipelineCPU__DOT__mem_read_EX_MEM = vlSelf->PipelineCPU__DOT__mem_read_ID_EX;
        vlSelf->PipelineCPU__DOT__reg_write_EX_MEM 
            = vlSelf->PipelineCPU__DOT__reg_write_ID_EX;
        vlSelf->PipelineCPU__DOT__mem_read_ID_EX = 
            ((~ (IData)(vlSelf->PipelineCPU__DOT__Flush_HD)) 
             & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                >> 7U));
        vlSelf->PipelineCPU__DOT__reg_write_ID_EX = 
            (1U & ((~ (IData)(vlSelf->PipelineCPU__DOT__Flush_HD)) 
                   & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl)));
    } else {
        vlSelf->PipelineCPU__DOT__reg_write_MEM_WB = 0U;
        vlSelf->PipelineCPU__DOT__write_reg_MEM_WB = 0U;
        vlSelf->PipelineCPU__DOT__alu_result_EX_MEM = 0U;
        vlSelf->PipelineCPU__DOT__write_reg_EX_MEM = 0U;
        vlSelf->PipelineCPU__DOT__writeReg_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t = 0U;
        vlSelf->PipelineCPU__DOT__pc_current = 0U;
        vlSelf->PipelineCPU__DOT__mem_read_EX_MEM = 0U;
        vlSelf->PipelineCPU__DOT__reg_write_EX_MEM = 0U;
        vlSelf->PipelineCPU__DOT__mem_read_ID_EX = 0U;
        vlSelf->PipelineCPU__DOT__reg_write_ID_EX = 0U;
    }
    vlSelf->PipelineCPU__DOT__ex_ForwardA = 0U;
    if ((((IData)(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM) 
          & (0U != (IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM))) 
         & ((IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM) 
            == (0x1fU & (vlSelf->PipelineCPU__DOT__instruct_ID_EX 
                         >> 0xfU))))) {
        vlSelf->PipelineCPU__DOT__ex_ForwardA = 2U;
    }
    if (((((IData)(vlSelf->PipelineCPU__DOT__reg_write_MEM_WB) 
           & (0U != (IData)(vlSelf->PipelineCPU__DOT__write_reg_MEM_WB))) 
          & ((IData)(vlSelf->PipelineCPU__DOT__write_reg_MEM_WB) 
             == (0x1fU & (vlSelf->PipelineCPU__DOT__instruct_ID_EX 
                          >> 0xfU)))) & (~ (((IData)(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM) 
                                             & (0U 
                                                != (IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM))) 
                                            & ((IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM) 
                                               == (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__instruct_ID_EX 
                                                      >> 0xfU))))))) {
        vlSelf->PipelineCPU__DOT__ex_ForwardA = 1U;
    }
    vlSelf->PipelineCPU__DOT__ex_ForwardB = 0U;
    if ((((IData)(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM) 
          & (0U != (IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM))) 
         & ((IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM) 
            == (0x1fU & (vlSelf->PipelineCPU__DOT__instruct_ID_EX 
                         >> 0x14U))))) {
        vlSelf->PipelineCPU__DOT__ex_ForwardB = 2U;
    }
    if (((((IData)(vlSelf->PipelineCPU__DOT__reg_write_MEM_WB) 
           & (0U != (IData)(vlSelf->PipelineCPU__DOT__write_reg_MEM_WB))) 
          & ((IData)(vlSelf->PipelineCPU__DOT__write_reg_MEM_WB) 
             == (0x1fU & (vlSelf->PipelineCPU__DOT__instruct_ID_EX 
                          >> 0x14U)))) & (~ (((IData)(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM) 
                                              & (0U 
                                                 != (IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM))) 
                                             & ((IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->PipelineCPU__DOT__instruct_ID_EX 
                                                    >> 0x14U))))))) {
        vlSelf->PipelineCPU__DOT__ex_ForwardB = 1U;
    }
    vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX_mux 
        = ((0U == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardA))
            ? vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX
            : ((1U == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardA))
                ? vlSelf->PipelineCPU__DOT__write_data
                : ((2U == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardA))
                    ? vlSelf->PipelineCPU__DOT__alu_result_EX_MEM
                    : 0U)));
    vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX_mux 
        = ((0U == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardB))
            ? vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX
            : ((1U == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardB))
                ? vlSelf->PipelineCPU__DOT__write_data
                : ((2U == (IData)(vlSelf->PipelineCPU__DOT__ex_ForwardB))
                    ? vlSelf->PipelineCPU__DOT__alu_result_EX_MEM
                    : 0U)));
    vlSelf->PipelineCPU__DOT__alu_src_b = ((IData)(vlSelf->PipelineCPU__DOT__alu_src_ID_EX)
                                            ? vlSelf->PipelineCPU__DOT__imm_ID_EX
                                            : vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX_mux);
    vlSelf->PipelineCPU__DOT__alu_result = ((8U & (IData)(vlSelf->PipelineCPU__DOT__alu_control))
                                             ? 0U : 
                                            ((4U & (IData)(vlSelf->PipelineCPU__DOT__alu_control))
                                              ? ((2U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__alu_control))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__alu_control))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX_mux 
                                                   ^ vlSelf->PipelineCPU__DOT__alu_src_b))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__alu_control))
                                                   ? 
                                                  (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX_mux, vlSelf->PipelineCPU__DOT__alu_src_b)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0x1fU 
                                                    >= vlSelf->PipelineCPU__DOT__alu_src_b)
                                                    ? 
                                                   (vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX_mux 
                                                    << vlSelf->PipelineCPU__DOT__alu_src_b)
                                                    : 0U)))
                                              : ((2U 
                                                  & (IData)(vlSelf->PipelineCPU__DOT__alu_control))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__alu_control))
                                                   ? 
                                                  (vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX_mux 
                                                   | vlSelf->PipelineCPU__DOT__alu_src_b)
                                                   : 
                                                  (vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX_mux 
                                                   & vlSelf->PipelineCPU__DOT__alu_src_b))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->PipelineCPU__DOT__alu_control))
                                                   ? 
                                                  (vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX_mux 
                                                   - vlSelf->PipelineCPU__DOT__alu_src_b)
                                                   : 
                                                  (vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX_mux 
                                                   + vlSelf->PipelineCPU__DOT__alu_src_b)))));
    vlSelf->PipelineCPU__DOT__Flush_HD = 0U;
    if ((((IData)(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM) 
          & (0U != (IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX))) 
         & (((IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX) 
             == (0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                          >> 0xfU))) | ((IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX) 
                                        == (0x1fU & 
                                            (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                             >> 0x14U)))))) {
        vlSelf->PipelineCPU__DOT__Flush_HD = 1U;
    }
    if (((((0x63U == (0x7fU & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)) 
           & (IData)(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM)) 
          & (0U != (IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX))) 
         & (((IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX) 
             == (0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                          >> 0xfU))) | ((IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX) 
                                        == (0x1fU & 
                                            (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                             >> 0x14U)))))) {
        vlSelf->PipelineCPU__DOT__Flush_HD = 1U;
    }
    vlSelf->PipelineCPU__DOT__RePC = 0U;
    if ((((IData)(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM) 
          & (0U != (IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX))) 
         & (((IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX) 
             == (0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                          >> 0xfU))) | ((IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX) 
                                        == (0x1fU & 
                                            (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                             >> 0x14U)))))) {
        vlSelf->PipelineCPU__DOT__RePC = 1U;
    }
    if (((((0x63U == (0x7fU & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)) 
           & (IData)(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM)) 
          & (0U != (IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX))) 
         & (((IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX) 
             == (0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                          >> 0xfU))) | ((IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX) 
                                        == (0x1fU & 
                                            (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                             >> 0x14U)))))) {
        vlSelf->PipelineCPU__DOT__RePC = 1U;
    }
    if (((((0x67U == (0x7fU & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)) 
           & (IData)(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM)) 
          & (0U != (IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX))) 
         & ((IData)(vlSelf->PipelineCPU__DOT__writeReg_ID_EX) 
            == (0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                         >> 0xfU))))) {
        vlSelf->PipelineCPU__DOT__Flush_HD = 1U;
        vlSelf->PipelineCPU__DOT__RePC = 1U;
    }
    vlSelf->PipelineCPU__DOT__imm = ((0x40U & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                      ? ((0x20U & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                          ? ((0x10U 
                                              & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                              ? 0U : 
                                             ((8U & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                               ? ((4U 
                                                   & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | ((0x80000U 
                                                         & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                            >> 0xcU)) 
                                                        | ((0x7f800U 
                                                            & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                               >> 1U)) 
                                                           | ((0x400U 
                                                               & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                  >> 0xaU)) 
                                                              | (0x3ffU 
                                                                 & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                    >> 0x15U))))))
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                               : ((4U 
                                                   & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                            >> 0x14U)) 
                                                        | ((0x400U 
                                                            & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                               << 3U)) 
                                                           | ((0x3f0U 
                                                               & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                  >> 0x15U)) 
                                                              | (0xfU 
                                                                 & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                    >> 8U))))))
                                                     : 0U)
                                                    : 0U))))
                                          : 0U) : (
                                                   (0x20U 
                                                    & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | ((0xfe0U 
                                                             & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                >> 0x14U)) 
                                                            | (0x1fU 
                                                               & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                  >> 7U))))
                                                         : 0U)
                                                        : 0U))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                       ? 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                         ? 
                                                        (0xfffff000U 
                                                         & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                         : 0U)
                                                        : 0U)
                                                       : 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U)))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                        ? 
                                                       ((1U 
                                                         & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)
                                                         ? 
                                                        (((- (IData)(
                                                                     (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                                      >> 0x1fU))) 
                                                          << 0xcU) 
                                                         | (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                            >> 0x14U))
                                                         : 0U)
                                                        : 0U))))));
    vlSelf->PipelineCPU__DOT__id_ForwardB = 0U;
    if ((((IData)(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM) 
          & (0U != (IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM))) 
         & ((IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM) 
            == (0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                         >> 0x14U))))) {
        vlSelf->PipelineCPU__DOT__id_ForwardB = 1U;
    }
    vlSelf->PipelineCPU__DOT__id_ForwardA = 0U;
    if ((((IData)(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM) 
          & (0U != (IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM))) 
         & ((IData)(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM) 
            == (0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                         >> 0xfU))))) {
        vlSelf->PipelineCPU__DOT__id_ForwardA = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 4096> VPipelineCPU__ConstPool__TABLE_h51125338_0;
extern const VlUnpacked<CData/*0:0*/, 4096> VPipelineCPU__ConstPool__TABLE_h3fb48acc_0;
extern const VlUnpacked<CData/*0:0*/, 4096> VPipelineCPU__ConstPool__TABLE_ha7ed87c3_0;
extern const VlUnpacked<CData/*7:0*/, 4096> VPipelineCPU__ConstPool__TABLE_h5873a144_0;

VL_INLINE_OPT void VPipelineCPU___024root___nba_comb__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___nba_comb__TOP__0\n"); );
    // Init
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->PipelineCPU__DOT__reg_readData2_mux = ((IData)(vlSelf->PipelineCPU__DOT__id_ForwardB)
                                                    ? vlSelf->PipelineCPU__DOT__alu_result_EX_MEM
                                                    : 
                                                   vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                       >> 0x14U))]);
    vlSelf->PipelineCPU__DOT__reg_readData1_mux = ((IData)(vlSelf->PipelineCPU__DOT__id_ForwardA)
                                                    ? vlSelf->PipelineCPU__DOT__alu_result_EX_MEM
                                                    : 
                                                   vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                       >> 0xfU))]);
    __Vtableidx1 = ((((vlSelf->PipelineCPU__DOT__reg_readData1_mux 
                       == vlSelf->PipelineCPU__DOT__reg_readData2_mux)
                       ? 1U : 0U) << 0xbU) | (((VL_LTS_III(32, vlSelf->PipelineCPU__DOT__reg_readData1_mux, vlSelf->PipelineCPU__DOT__reg_readData2_mux)
                                                 ? 1U
                                                 : 0U) 
                                               << 0xaU) 
                                              | ((0x380U 
                                                  & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                                     >> 5U)) 
                                                 | (0x7fU 
                                                    & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t))));
    vlSelf->PipelineCPU__DOT__pc_sel = VPipelineCPU__ConstPool__TABLE_h51125338_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__flushCtrl = VPipelineCPU__ConstPool__TABLE_h3fb48acc_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__PCorR1 = VPipelineCPU__ConstPool__TABLE_ha7ed87c3_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl 
        = VPipelineCPU__ConstPool__TABLE_h5873a144_0
        [__Vtableidx1];
    vlSelf->PipelineCPU__DOT__pc_branch = (((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                             ? vlSelf->PipelineCPU__DOT__reg_readData1_mux
                                             : vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t) 
                                           + (vlSelf->PipelineCPU__DOT__imm 
                                              << 1U));
    vlSelf->PipelineCPU__DOT__pc_next = ((IData)(vlSelf->PipelineCPU__DOT__RePC)
                                          ? vlSelf->PipelineCPU__DOT__pc_current
                                          : ((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                              ? ((IData)(4U) 
                                                 + vlSelf->PipelineCPU__DOT__pc_current)
                                              : ((1U 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                                  ? vlSelf->PipelineCPU__DOT__pc_branch
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                                   ? vlSelf->PipelineCPU__DOT__pc_branch
                                                   : 0U))));
}

void VPipelineCPU___024root___eval_nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VPipelineCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VPipelineCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VPipelineCPU___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VPipelineCPU___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void VPipelineCPU___024root___eval_triggers__act(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VPipelineCPU___024root___eval(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPipelineCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPipelineCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("PipelineCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VPipelineCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPipelineCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPipelineCPU___024root___eval_debug_assertions(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
