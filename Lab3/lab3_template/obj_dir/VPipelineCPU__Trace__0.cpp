// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPipelineCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPipelineCPU___024root__trace_chg_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->PipelineCPU__DOT__pc_current_IF_ID),32);
        bufp->chgIData(oldp+1,(vlSelf->PipelineCPU__DOT__pc_current_ID_EX),32);
        bufp->chgIData(oldp+2,(vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX),32);
        bufp->chgIData(oldp+3,(vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX),32);
        bufp->chgIData(oldp+4,(vlSelf->PipelineCPU__DOT__imm_ID_EX),32);
        bufp->chgCData(oldp+5,(vlSelf->PipelineCPU__DOT__alu_control_ID_EX),4);
        bufp->chgBit(oldp+6,(vlSelf->PipelineCPU__DOT__mem_write_ID_EX));
        bufp->chgBit(oldp+7,(vlSelf->PipelineCPU__DOT__alu_src_ID_EX));
        bufp->chgBit(oldp+8,(vlSelf->PipelineCPU__DOT__reg_write_ID_EX));
        bufp->chgBit(oldp+9,(vlSelf->PipelineCPU__DOT__jump_ID_EX));
        bufp->chgIData(oldp+10,(vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM),32);
        bufp->chgBit(oldp+11,(vlSelf->PipelineCPU__DOT__jump_EX_MEM));
        bufp->chgBit(oldp+12,(vlSelf->PipelineCPU__DOT__mem_write_EX_MEM));
        bufp->chgBit(oldp+13,(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM));
        bufp->chgBit(oldp+14,(vlSelf->PipelineCPU__DOT__reg_write_MEM_WB));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+47,(vlSelf->PipelineCPU__DOT__pc_current),32);
        bufp->chgIData(oldp+48,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)),32);
        bufp->chgIData(oldp+49,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_current)
                                  ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->PipelineCPU__DOT__pc_current)] 
                                           << 0x18U) 
                                          | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->PipelineCPU__DOT__pc_current))] 
                                              << 0x10U) 
                                             | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                 [(0x7fU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->PipelineCPU__DOT__pc_current))] 
                                                 << 8U) 
                                                | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->PipelineCPU__DOT__pc_current))]))))),32);
        bufp->chgIData(oldp+50,(vlSelf->PipelineCPU__DOT__imm),32);
        bufp->chgIData(oldp+51,(((0U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                  ? vlSelf->PipelineCPU__DOT__alu_result_MEM_WB
                                  : ((1U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                      ? vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB
                                      : ((2U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                          ? vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM
                                          : 0U)))),32);
        bufp->chgIData(oldp+52,((vlSelf->PipelineCPU__DOT__imm 
                                 << 1U)),32);
        bufp->chgIData(oldp+53,(vlSelf->PipelineCPU__DOT__pc_plus4_IF_ID),32);
        bufp->chgIData(oldp+54,(vlSelf->PipelineCPU__DOT__instruct_IF_ID),32);
        bufp->chgCData(oldp+55,((0x7fU & vlSelf->PipelineCPU__DOT__instruct_IF_ID)),7);
        bufp->chgCData(oldp+56,((7U & (vlSelf->PipelineCPU__DOT__instruct_IF_ID 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+57,((1U & (vlSelf->PipelineCPU__DOT__instruct_IF_ID 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+58,((0x1fU & (vlSelf->PipelineCPU__DOT__instruct_IF_ID 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+59,((0x1fU & (vlSelf->PipelineCPU__DOT__instruct_IF_ID 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+60,((0x1fU & (vlSelf->PipelineCPU__DOT__instruct_IF_ID 
                                          >> 7U))),5);
        bufp->chgIData(oldp+61,(vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX),32);
        bufp->chgIData(oldp+62,(vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM),32);
        bufp->chgIData(oldp+63,(vlSelf->PipelineCPU__DOT__alu_result_MEM_WB),32);
        bufp->chgIData(oldp+64,(vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB),32);
        bufp->chgCData(oldp+65,(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+66,(vlSelf->PipelineCPU__DOT__reg_read_data1),32);
        bufp->chgIData(oldp+67,(vlSelf->PipelineCPU__DOT__reg_read_data2),32);
        bufp->chgBit(oldp+68,(((vlSelf->PipelineCPU__DOT__reg_read_data1 
                                == vlSelf->PipelineCPU__DOT__reg_read_data2)
                                ? 1U : 0U)));
        bufp->chgBit(oldp+69,((VL_LTS_III(32, vlSelf->PipelineCPU__DOT__reg_read_data1, vlSelf->PipelineCPU__DOT__reg_read_data2)
                                ? 1U : 0U)));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+70,(vlSelf->PipelineCPU__DOT__mem_read_ID_EX));
        bufp->chgIData(oldp+71,(vlSelf->PipelineCPU__DOT__alu_result_EX_MEM),32);
        bufp->chgBit(oldp+72,(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+73,(vlSelf->PipelineCPU__DOT__alu_result),32);
        bufp->chgIData(oldp+74,(vlSelf->PipelineCPU__DOT__alu_src_b),32);
        bufp->chgCData(oldp+75,(vlSelf->PipelineCPU__DOT__alu_control),4);
        bufp->chgBit(oldp+76,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                     >> 7U))));
        bufp->chgBit(oldp+77,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                     >> 2U))));
        bufp->chgBit(oldp+78,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                     >> 1U))));
        bufp->chgBit(oldp+79,((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl))));
        bufp->chgBit(oldp+80,((0U == vlSelf->PipelineCPU__DOT__alu_result)));
        bufp->chgCData(oldp+81,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                       >> 5U))),2);
        bufp->chgCData(oldp+82,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                       >> 3U))),2);
        bufp->chgCData(oldp+83,(vlSelf->PipelineCPU__DOT__pc_sel),2);
        bufp->chgCData(oldp+84,(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl),8);
    }
    bufp->chgBit(oldp+85,(vlSelf->clk));
    bufp->chgBit(oldp+86,(vlSelf->start));
    bufp->chgIData(oldp+87,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+88,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+89,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+90,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+91,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+92,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+93,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+94,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+95,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+96,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+97,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+98,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+99,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+100,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+101,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+102,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+103,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+104,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+105,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+106,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+119,(((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                               ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)
                               : ((1U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                   ? (vlSelf->PipelineCPU__DOT__pc_current_IF_ID 
                                      + (vlSelf->PipelineCPU__DOT__imm 
                                         << 1U)) : 
                                  ((2U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                    ? vlSelf->PipelineCPU__DOT__alu_result
                                    : 0U)))),32);
    bufp->chgIData(oldp+120,((vlSelf->PipelineCPU__DOT__pc_current_IF_ID 
                              + (vlSelf->PipelineCPU__DOT__imm 
                                 << 1U))),32);
    bufp->chgIData(oldp+121,(vlSelf->PipelineCPU__DOT__mem_read_data),32);
}

void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_cleanup\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
