// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+93+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+93+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+46,"pc_current", false,-1, 31,0);
    tracep->declBus(c+125,"pc_next", false,-1, 31,0);
    tracep->declBus(c+47,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+126,"pc_branch", false,-1, 31,0);
    tracep->declBus(c+48,"instruct", false,-1, 31,0);
    tracep->declBus(c+49,"imm", false,-1, 31,0);
    tracep->declBus(c+74,"reg_read_data1", false,-1, 31,0);
    tracep->declBus(c+75,"reg_read_data2", false,-1, 31,0);
    tracep->declBus(c+78,"alu_result", false,-1, 31,0);
    tracep->declBus(c+127,"mem_read_data", false,-1, 31,0);
    tracep->declBus(c+50,"write_data", false,-1, 31,0);
    tracep->declBus(c+1,"alu_src_b", false,-1, 31,0);
    tracep->declBus(c+2,"alu_control", false,-1, 3,0);
    tracep->declBit(c+76,"branch_eq", false,-1);
    tracep->declBit(c+77,"branch_lt", false,-1);
    tracep->declBit(c+83,"mem_read", false,-1);
    tracep->declBit(c+84,"mem_write", false,-1);
    tracep->declBit(c+85,"alu_src", false,-1);
    tracep->declBit(c+86,"reg_write", false,-1);
    tracep->declBit(c+79,"jump", false,-1);
    tracep->declBus(c+87,"mem_to_reg", false,-1, 1,0);
    tracep->declBus(c+88,"alu_op", false,-1, 1,0);
    tracep->declBus(c+89,"pc_sel", false,-1, 1,0);
    tracep->declBus(c+51,"shift_one", false,-1, 31,0);
    tracep->declBus(c+3,"pc_current_IF_ID", false,-1, 31,0);
    tracep->declBus(c+52,"pc_plus4_IF_ID", false,-1, 31,0);
    tracep->declBus(c+53,"instruct_IF_ID", false,-1, 31,0);
    tracep->declBus(c+54,"opcode", false,-1, 6,0);
    tracep->declBus(c+55,"funct3", false,-1, 2,0);
    tracep->declBit(c+56,"funct7", false,-1);
    tracep->declBus(c+57,"readReg1", false,-1, 4,0);
    tracep->declBus(c+58,"readReg2", false,-1, 4,0);
    tracep->declBus(c+59,"writeReg", false,-1, 4,0);
    tracep->declBit(c+60,"reg_write_ID_EX", false,-1);
    tracep->declBus(c+61,"mem_to_reg_ID_EX", false,-1, 1,0);
    tracep->declBit(c+80,"mem_read_ID_EX", false,-1);
    tracep->declBit(c+4,"mem_write_ID_EX", false,-1);
    tracep->declBit(c+5,"alu_src_ID_EX", false,-1);
    tracep->declBus(c+6,"alu_op_ID_EX", false,-1, 1,0);
    tracep->declBus(c+62,"pc_plus4_ID_EX", false,-1, 31,0);
    tracep->declBus(c+7,"reg_read_data1_ID_EX", false,-1, 31,0);
    tracep->declBus(c+8,"reg_read_data2_ID_EX", false,-1, 31,0);
    tracep->declBus(c+9,"imm_ID_EX", false,-1, 31,0);
    tracep->declBus(c+63,"writeReg_ID_EX", false,-1, 4,0);
    tracep->declBus(c+10,"funct3_ID_EX", false,-1, 2,0);
    tracep->declBit(c+11,"funct7_ID_EX", false,-1);
    tracep->declBus(c+81,"alu_result_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+64,"pc_plus4_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+12,"reg_read_data2_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+65,"write_reg_EX_MEM", false,-1, 4,0);
    tracep->declBit(c+13,"mem_write_EX_MEM", false,-1);
    tracep->declBit(c+82,"mem_read_EX_MEM", false,-1);
    tracep->declBit(c+66,"reg_write_EX_MEM", false,-1);
    tracep->declBus(c+67,"mem_to_reg_EX_MEM", false,-1, 1,0);
    tracep->declBus(c+68,"alu_result_MEM_WB", false,-1, 31,0);
    tracep->declBus(c+69,"mem_read_data_MEM_WB", false,-1, 31,0);
    tracep->declBus(c+70,"write_reg_MEM_WB", false,-1, 4,0);
    tracep->declBit(c+71,"reg_write_MEM_WB", false,-1);
    tracep->declBus(c+72,"mem_to_reg_MEM_WB", false,-1, 1,0);
    tracep->declBus(c+73,"pc_plus4_MEM_WB", false,-1, 31,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+2,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+7,"A", false,-1, 31,0);
    tracep->declBus(c+1,"B", false,-1, 31,0);
    tracep->declBus(c+78,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+79,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+6,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+11,"funct7", false,-1);
    tracep->declBus(c+10,"funct3", false,-1, 2,0);
    tracep->declBus(c+2,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+46,"a", false,-1, 31,0);
    tracep->declBus(c+128,"b", false,-1, 31,0);
    tracep->declBus(c+47,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+3,"a", false,-1, 31,0);
    tracep->declBus(c+51,"b", false,-1, 31,0);
    tracep->declBus(c+126,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+74,"A", false,-1, 31,0);
    tracep->declBus(c+75,"B", false,-1, 31,0);
    tracep->declBit(c+76,"BrEq", false,-1);
    tracep->declBit(c+77,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+54,"opcode", false,-1, 6,0);
    tracep->declBus(c+55,"funct3", false,-1, 2,0);
    tracep->declBit(c+76,"BrEq", false,-1);
    tracep->declBit(c+77,"BrLT", false,-1);
    tracep->declBit(c+83,"memRead", false,-1);
    tracep->declBus(c+87,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+88,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+84,"memWrite", false,-1);
    tracep->declBit(c+85,"ALUSrc", false,-1);
    tracep->declBit(c+86,"regWrite", false,-1);
    tracep->declBus(c+89,"PCSel", false,-1, 1,0);
    tracep->declBus(c+90,"crtl", false,-1, 7,0);
    tracep->declBus(c+129,"b1", false,-1, 9,0);
    tracep->declBus(c+130,"b2", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+13,"memWrite", false,-1);
    tracep->declBit(c+82,"memRead", false,-1);
    tracep->declBus(c+81,"address", false,-1, 31,0);
    tracep->declBus(c+12,"writeData", false,-1, 31,0);
    tracep->declBus(c+127,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_Reg ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBus(c+78,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+62,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+8,"readData2_i", false,-1, 31,0);
    tracep->declBus(c+63,"write_reg_i", false,-1, 4,0);
    tracep->declBit(c+4,"mem_write_i", false,-1);
    tracep->declBit(c+80,"mem_read_i", false,-1);
    tracep->declBus(c+61,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+60,"regWrite_i", false,-1);
    tracep->declBus(c+81,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+64,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+12,"readData2_o", false,-1, 31,0);
    tracep->declBus(c+65,"write_reg_o", false,-1, 4,0);
    tracep->declBit(c+66,"regWrite_o", false,-1);
    tracep->declBit(c+13,"mem_write_o", false,-1);
    tracep->declBit(c+82,"mem_read_o", false,-1);
    tracep->declBus(c+67,"mem_to_reg_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_Reg ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBit(c+86,"reg_write_i", false,-1);
    tracep->declBus(c+87,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+83,"mem_read_i", false,-1);
    tracep->declBit(c+84,"mem_write_i", false,-1);
    tracep->declBit(c+85,"alu_src_i", false,-1);
    tracep->declBus(c+88,"alu_op_i", false,-1, 1,0);
    tracep->declBus(c+55,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+56,"funct7_i", false,-1);
    tracep->declBus(c+52,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+74,"read_data1_i", false,-1, 31,0);
    tracep->declBus(c+75,"read_data2_i", false,-1, 31,0);
    tracep->declBus(c+49,"imm_i", false,-1, 31,0);
    tracep->declBus(c+59,"write_reg_i", false,-1, 4,0);
    tracep->declBit(c+60,"reg_write_o", false,-1);
    tracep->declBus(c+61,"mem_to_reg_o", false,-1, 1,0);
    tracep->declBit(c+80,"mem_read_o", false,-1);
    tracep->declBit(c+4,"mem_write_o", false,-1);
    tracep->declBit(c+5,"alu_src_o", false,-1);
    tracep->declBus(c+6,"alu_op_o", false,-1, 1,0);
    tracep->declBus(c+62,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+7,"read_data1_o", false,-1, 31,0);
    tracep->declBus(c+8,"read_data2_o", false,-1, 31,0);
    tracep->declBus(c+9,"imm_o", false,-1, 31,0);
    tracep->declBus(c+63,"write_reg_o", false,-1, 4,0);
    tracep->declBus(c+10,"funct3_o", false,-1, 2,0);
    tracep->declBit(c+11,"funct7_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_Reg ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBus(c+46,"pc_i", false,-1, 31,0);
    tracep->declBus(c+47,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+48,"inst_i", false,-1, 31,0);
    tracep->declBus(c+3,"pc_o", false,-1, 31,0);
    tracep->declBus(c+52,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+53,"inst_o", false,-1, 31,0);
    tracep->declBus(c+3,"pc_t", false,-1, 31,0);
    tracep->declBus(c+52,"pc_4_t", false,-1, 31,0);
    tracep->declBus(c+53,"inst_t", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+53,"inst", false,-1, 31,0);
    tracep->declBus(c+49,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+46,"readAddr", false,-1, 31,0);
    tracep->declBus(c+48,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_Reg ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBus(c+81,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+127,"dmem_read_data_i", false,-1, 31,0);
    tracep->declBus(c+65,"write_reg_i", false,-1, 4,0);
    tracep->declBus(c+67,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+66,"reg_write_i", false,-1);
    tracep->declBus(c+64,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+68,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+69,"dmem_read_data_o", false,-1, 31,0);
    tracep->declBus(c+70,"write_reg_o", false,-1, 4,0);
    tracep->declBit(c+71,"reg_write_o", false,-1);
    tracep->declBus(c+72,"mem_to_reg_o", false,-1, 1,0);
    tracep->declBus(c+73,"pc_4_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+131,"size", false,-1, 31,0);
    tracep->declBit(c+5,"sel", false,-1);
    tracep->declBus(c+8,"s0", false,-1, 31,0);
    tracep->declBus(c+9,"s1", false,-1, 31,0);
    tracep->declBus(c+1,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+131,"size", false,-1, 31,0);
    tracep->declBus(c+89,"sel", false,-1, 1,0);
    tracep->declBus(c+47,"s0", false,-1, 31,0);
    tracep->declBus(c+126,"s1", false,-1, 31,0);
    tracep->declBus(c+78,"s2", false,-1, 31,0);
    tracep->declBus(c+125,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+131,"size", false,-1, 31,0);
    tracep->declBus(c+72,"sel", false,-1, 1,0);
    tracep->declBus(c+68,"s0", false,-1, 31,0);
    tracep->declBus(c+69,"s1", false,-1, 31,0);
    tracep->declBus(c+73,"s2", false,-1, 31,0);
    tracep->declBus(c+50,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBus(c+125,"pc_i", false,-1, 31,0);
    tracep->declBus(c+46,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+91,"clk", false,-1);
    tracep->declBit(c+92,"rst", false,-1);
    tracep->declBit(c+71,"regWrite", false,-1);
    tracep->declBus(c+57,"readReg1", false,-1, 4,0);
    tracep->declBus(c+58,"readReg2", false,-1, 4,0);
    tracep->declBus(c+70,"writeReg", false,-1, 4,0);
    tracep->declBus(c+50,"writeData", false,-1, 31,0);
    tracep->declBus(c+74,"readData1", false,-1, 31,0);
    tracep->declBus(c+75,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+14+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+49,"i", false,-1, 31,0);
    tracep->declBus(c+51,"o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__alu_src_b),32);
    bufp->fullCData(oldp+2,(vlSelf->PipelineCPU__DOT__alu_control),4);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t),32);
    bufp->fullBit(oldp+4,(vlSelf->PipelineCPU__DOT__mem_write_ID_EX));
    bufp->fullBit(oldp+5,(vlSelf->PipelineCPU__DOT__alu_src_ID_EX));
    bufp->fullCData(oldp+6,(vlSelf->PipelineCPU__DOT__alu_op_ID_EX),2);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX),32);
    bufp->fullIData(oldp+8,(vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX),32);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__imm_ID_EX),32);
    bufp->fullCData(oldp+10,(vlSelf->PipelineCPU__DOT__funct3_ID_EX),3);
    bufp->fullBit(oldp+11,(vlSelf->PipelineCPU__DOT__funct7_ID_EX));
    bufp->fullIData(oldp+12,(vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM),32);
    bufp->fullBit(oldp+13,(vlSelf->PipelineCPU__DOT__mem_write_EX_MEM));
    bufp->fullIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__pc_current),32);
    bufp->fullIData(oldp+47,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)),32);
    bufp->fullIData(oldp+48,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_current)
                               ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->PipelineCPU__DOT__pc_current)] 
                                        << 0x18U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
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
    bufp->fullIData(oldp+49,(vlSelf->PipelineCPU__DOT__imm),32);
    bufp->fullIData(oldp+50,(((0U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                               ? vlSelf->PipelineCPU__DOT__alu_result_MEM_WB
                               : ((1U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                   ? vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB
                                   : ((2U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                       ? vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB
                                       : 0U)))),32);
    bufp->fullIData(oldp+51,((vlSelf->PipelineCPU__DOT__imm 
                              << 1U)),32);
    bufp->fullIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_4_t),32);
    bufp->fullIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t),32);
    bufp->fullCData(oldp+54,((0x7fU & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)),7);
    bufp->fullCData(oldp+55,((7U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+56,((1U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+57,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+58,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+59,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 7U))),5);
    bufp->fullBit(oldp+60,(vlSelf->PipelineCPU__DOT__reg_write_ID_EX));
    bufp->fullCData(oldp+61,(vlSelf->PipelineCPU__DOT__mem_to_reg_ID_EX),2);
    bufp->fullIData(oldp+62,(vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX),32);
    bufp->fullCData(oldp+63,(vlSelf->PipelineCPU__DOT__writeReg_ID_EX),5);
    bufp->fullIData(oldp+64,(vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM),32);
    bufp->fullCData(oldp+65,(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM),5);
    bufp->fullBit(oldp+66,(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM));
    bufp->fullCData(oldp+67,(vlSelf->PipelineCPU__DOT__mem_to_reg_EX_MEM),2);
    bufp->fullIData(oldp+68,(vlSelf->PipelineCPU__DOT__alu_result_MEM_WB),32);
    bufp->fullIData(oldp+69,(vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB),32);
    bufp->fullCData(oldp+70,(vlSelf->PipelineCPU__DOT__write_reg_MEM_WB),5);
    bufp->fullBit(oldp+71,(vlSelf->PipelineCPU__DOT__reg_write_MEM_WB));
    bufp->fullCData(oldp+72,(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB),2);
    bufp->fullIData(oldp+73,(vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB),32);
    bufp->fullIData(oldp+74,(vlSelf->PipelineCPU__DOT__reg_read_data1),32);
    bufp->fullIData(oldp+75,(vlSelf->PipelineCPU__DOT__reg_read_data2),32);
    bufp->fullBit(oldp+76,(((vlSelf->PipelineCPU__DOT__reg_read_data1 
                             == vlSelf->PipelineCPU__DOT__reg_read_data2)
                             ? 1U : 0U)));
    bufp->fullBit(oldp+77,((VL_LTS_III(32, vlSelf->PipelineCPU__DOT__reg_read_data1, vlSelf->PipelineCPU__DOT__reg_read_data2)
                             ? 1U : 0U)));
    bufp->fullIData(oldp+78,(vlSelf->PipelineCPU__DOT__alu_result),32);
    bufp->fullBit(oldp+79,((0U == vlSelf->PipelineCPU__DOT__alu_result)));
    bufp->fullBit(oldp+80,(vlSelf->PipelineCPU__DOT__mem_read_ID_EX));
    bufp->fullIData(oldp+81,(vlSelf->PipelineCPU__DOT__alu_result_EX_MEM),32);
    bufp->fullBit(oldp+82,(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM));
    bufp->fullBit(oldp+83,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 7U))));
    bufp->fullBit(oldp+84,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 2U))));
    bufp->fullBit(oldp+85,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 1U))));
    bufp->fullBit(oldp+86,((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl))));
    bufp->fullCData(oldp+87,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                    >> 5U))),2);
    bufp->fullCData(oldp+88,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                    >> 3U))),2);
    bufp->fullCData(oldp+89,(vlSelf->PipelineCPU__DOT__pc_sel),2);
    bufp->fullCData(oldp+90,(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl),8);
    bufp->fullBit(oldp+91,(vlSelf->clk));
    bufp->fullBit(oldp+92,(vlSelf->start));
    bufp->fullIData(oldp+93,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+94,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+95,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+96,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+97,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+98,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+99,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+100,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+101,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+102,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+103,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+125,(((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)
                                : ((1U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                    ? (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t 
                                       + (vlSelf->PipelineCPU__DOT__imm 
                                          << 1U)) : 
                                   ((2U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                     ? vlSelf->PipelineCPU__DOT__alu_result
                                     : 0U)))),32);
    bufp->fullIData(oldp+126,((vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t 
                               + (vlSelf->PipelineCPU__DOT__imm 
                                  << 1U))),32);
    bufp->fullIData(oldp+127,(vlSelf->PipelineCPU__DOT__mem_read_data),32);
    bufp->fullIData(oldp+128,(4U),32);
    bufp->fullSData(oldp+129,(0x100U),10);
    bufp->fullSData(oldp+130,(0U),10);
    bufp->fullIData(oldp+131,(0x20U),32);
}
