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
        bufp->chgCData(oldp+0,(vlSelf->PipelineCPU__DOT__alu_control),4);
        bufp->chgIData(oldp+1,(vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM),32);
        bufp->chgIData(oldp+2,(vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM),32);
        bufp->chgBit(oldp+3,(vlSelf->PipelineCPU__DOT__mem_write_EX_MEM));
        bufp->chgCData(oldp+4,(vlSelf->PipelineCPU__DOT__mem_to_reg_EX_MEM),2);
        bufp->chgIData(oldp+5,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t),32);
        bufp->chgIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_4_t),32);
        bufp->chgCData(oldp+7,(vlSelf->PipelineCPU__DOT__mem_to_reg_ID_EX),2);
        bufp->chgBit(oldp+8,(vlSelf->PipelineCPU__DOT__mem_write_ID_EX));
        bufp->chgBit(oldp+9,(vlSelf->PipelineCPU__DOT__alu_src_ID_EX));
        bufp->chgCData(oldp+10,(vlSelf->PipelineCPU__DOT__alu_op_ID_EX),2);
        bufp->chgIData(oldp+11,(vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX),32);
        bufp->chgIData(oldp+12,(vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX),32);
        bufp->chgIData(oldp+13,(vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX),32);
        bufp->chgIData(oldp+14,(vlSelf->PipelineCPU__DOT__imm_ID_EX),32);
        bufp->chgCData(oldp+15,(vlSelf->PipelineCPU__DOT__funct3_ID_EX),3);
        bufp->chgBit(oldp+16,(vlSelf->PipelineCPU__DOT__funct7_ID_EX));
        bufp->chgIData(oldp+17,(vlSelf->PipelineCPU__DOT__instruct_ID_EX),32);
        bufp->chgIData(oldp+18,(vlSelf->PipelineCPU__DOT__alu_result_MEM_WB),32);
        bufp->chgIData(oldp+19,(vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB),32);
        bufp->chgCData(oldp+20,(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB),2);
        bufp->chgIData(oldp+21,(vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB),32);
        bufp->chgCData(oldp+22,((0x1fU & (vlSelf->PipelineCPU__DOT__instruct_ID_EX 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+23,((0x1fU & (vlSelf->PipelineCPU__DOT__instruct_ID_EX 
                                          >> 0x14U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+47,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+48,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+54,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+55,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+56,(vlSelf->PipelineCPU__DOT__pc_current),32);
        bufp->chgIData(oldp+57,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)),32);
        bufp->chgIData(oldp+58,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_current)
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
        bufp->chgIData(oldp+59,(vlSelf->PipelineCPU__DOT__imm),32);
        bufp->chgIData(oldp+60,(vlSelf->PipelineCPU__DOT__alu_result),32);
        bufp->chgIData(oldp+61,(vlSelf->PipelineCPU__DOT__write_data),32);
        bufp->chgIData(oldp+62,(vlSelf->PipelineCPU__DOT__alu_src_b),32);
        bufp->chgBit(oldp+63,((0U == vlSelf->PipelineCPU__DOT__alu_result)));
        bufp->chgIData(oldp+64,((vlSelf->PipelineCPU__DOT__imm 
                                 << 1U)),32);
        bufp->chgIData(oldp+65,(vlSelf->PipelineCPU__DOT__alu_result_EX_MEM),32);
        bufp->chgCData(oldp+66,(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM),5);
        bufp->chgBit(oldp+67,(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM));
        bufp->chgBit(oldp+68,(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM));
        bufp->chgIData(oldp+69,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t),32);
        bufp->chgBit(oldp+70,(vlSelf->PipelineCPU__DOT__RePC));
        bufp->chgBit(oldp+71,(vlSelf->PipelineCPU__DOT__Flush_HD));
        bufp->chgCData(oldp+72,((0x7fU & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)),7);
        bufp->chgCData(oldp+73,((7U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+74,((1U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+75,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+76,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+77,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                          >> 7U))),5);
        bufp->chgBit(oldp+78,(vlSelf->PipelineCPU__DOT__reg_write_ID_EX));
        bufp->chgBit(oldp+79,(vlSelf->PipelineCPU__DOT__mem_read_ID_EX));
        bufp->chgCData(oldp+80,(vlSelf->PipelineCPU__DOT__writeReg_ID_EX),5);
        bufp->chgBit(oldp+81,(vlSelf->PipelineCPU__DOT__id_ForwardA));
        bufp->chgBit(oldp+82,(vlSelf->PipelineCPU__DOT__id_ForwardB));
        bufp->chgCData(oldp+83,(vlSelf->PipelineCPU__DOT__ex_ForwardA),2);
        bufp->chgCData(oldp+84,(vlSelf->PipelineCPU__DOT__ex_ForwardB),2);
        bufp->chgIData(oldp+85,(vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX_mux),32);
        bufp->chgIData(oldp+86,(vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX_mux),32);
        bufp->chgCData(oldp+87,(vlSelf->PipelineCPU__DOT__write_reg_MEM_WB),5);
        bufp->chgBit(oldp+88,(vlSelf->PipelineCPU__DOT__reg_write_MEM_WB));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+89,(vlSelf->PipelineCPU__DOT__pc_branch),32);
        bufp->chgBit(oldp+90,(((vlSelf->PipelineCPU__DOT__reg_readData1_mux 
                                == vlSelf->PipelineCPU__DOT__reg_readData2_mux)
                                ? 1U : 0U)));
        bufp->chgBit(oldp+91,((VL_LTS_III(32, vlSelf->PipelineCPU__DOT__reg_readData1_mux, vlSelf->PipelineCPU__DOT__reg_readData2_mux)
                                ? 1U : 0U)));
        bufp->chgBit(oldp+92,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                     >> 7U))));
        bufp->chgBit(oldp+93,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                     >> 2U))));
        bufp->chgBit(oldp+94,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                     >> 1U))));
        bufp->chgBit(oldp+95,((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl))));
        bufp->chgCData(oldp+96,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                       >> 5U))),2);
        bufp->chgCData(oldp+97,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                       >> 3U))),2);
        bufp->chgCData(oldp+98,(vlSelf->PipelineCPU__DOT__pc_sel),2);
        bufp->chgBit(oldp+99,((0U != (IData)(vlSelf->PipelineCPU__DOT__pc_sel))));
        bufp->chgBit(oldp+100,((1U != (IData)(vlSelf->PipelineCPU__DOT__pc_sel))));
        bufp->chgIData(oldp+101,(vlSelf->PipelineCPU__DOT__reg_readData1_mux),32);
        bufp->chgIData(oldp+102,(vlSelf->PipelineCPU__DOT__reg_readData2_mux),32);
        bufp->chgCData(oldp+103,(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl),8);
    }
    bufp->chgBit(oldp+104,(vlSelf->clk));
    bufp->chgBit(oldp+105,(vlSelf->start));
    bufp->chgIData(oldp+106,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+124,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+128,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+129,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+130,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+131,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+132,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+133,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+134,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+135,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+136,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+137,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+138,(((IData)(vlSelf->PipelineCPU__DOT__RePC)
                               ? vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t
                               : ((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                   ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)
                                   : ((1U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                       ? vlSelf->PipelineCPU__DOT__pc_branch
                                       : ((2U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                           ? vlSelf->PipelineCPU__DOT__pc_branch
                                           : 0U))))),32);
    bufp->chgIData(oldp+139,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+140,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+141,(vlSelf->PipelineCPU__DOT__mem_read_data),32);
    bufp->chgIData(oldp+142,(((1U != (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                               ? vlSelf->PipelineCPU__DOT__reg_readData1_mux
                               : vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t)),32);
    bufp->chgIData(oldp+143,(((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                               ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)
                               : ((1U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                   ? vlSelf->PipelineCPU__DOT__pc_branch
                                   : ((2U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                       ? vlSelf->PipelineCPU__DOT__pc_branch
                                       : 0U)))),32);
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
}
