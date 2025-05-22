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
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+104+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+104+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+54,"pc_current", false,-1, 31,0);
    tracep->declBus(c+136,"pc_next", false,-1, 31,0);
    tracep->declBus(c+55,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+87,"pc_branch", false,-1, 31,0);
    tracep->declBus(c+56,"instruct", false,-1, 31,0);
    tracep->declBus(c+57,"imm", false,-1, 31,0);
    tracep->declBus(c+137,"reg_read_data1", false,-1, 31,0);
    tracep->declBus(c+138,"reg_read_data2", false,-1, 31,0);
    tracep->declBus(c+58,"alu_result", false,-1, 31,0);
    tracep->declBus(c+139,"mem_read_data", false,-1, 31,0);
    tracep->declBus(c+59,"write_data", false,-1, 31,0);
    tracep->declBus(c+60,"alu_src_b", false,-1, 31,0);
    tracep->declBus(c+1,"alu_control", false,-1, 3,0);
    tracep->declBit(c+88,"branch_eq", false,-1);
    tracep->declBit(c+89,"branch_lt", false,-1);
    tracep->declBit(c+90,"mem_read", false,-1);
    tracep->declBit(c+91,"mem_write", false,-1);
    tracep->declBit(c+92,"alu_src", false,-1);
    tracep->declBit(c+93,"reg_write", false,-1);
    tracep->declBit(c+61,"jump", false,-1);
    tracep->declBus(c+94,"mem_to_reg", false,-1, 1,0);
    tracep->declBus(c+95,"alu_op", false,-1, 1,0);
    tracep->declBus(c+96,"pc_sel", false,-1, 1,0);
    tracep->declBus(c+62,"shift_one", false,-1, 31,0);
    tracep->declBus(c+63,"alu_result_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+2,"pc_plus4_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+3,"reg_read_data2_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+64,"write_reg_EX_MEM", false,-1, 4,0);
    tracep->declBit(c+4,"mem_write_EX_MEM", false,-1);
    tracep->declBit(c+65,"mem_read_EX_MEM", false,-1);
    tracep->declBit(c+66,"reg_write_EX_MEM", false,-1);
    tracep->declBus(c+5,"mem_to_reg_EX_MEM", false,-1, 1,0);
    tracep->declBus(c+6,"pc_current_IF_ID", false,-1, 31,0);
    tracep->declBus(c+7,"pc_plus4_IF_ID", false,-1, 31,0);
    tracep->declBus(c+67,"instruct_IF_ID", false,-1, 31,0);
    tracep->declBit(c+68,"RePC", false,-1);
    tracep->declBit(c+69,"Flush_HD", false,-1);
    tracep->declBus(c+70,"opcode", false,-1, 6,0);
    tracep->declBus(c+71,"funct3", false,-1, 2,0);
    tracep->declBit(c+72,"funct7", false,-1);
    tracep->declBit(c+97,"flushCtrl", false,-1);
    tracep->declBit(c+98,"PCorR1", false,-1);
    tracep->declBus(c+73,"readReg1", false,-1, 4,0);
    tracep->declBus(c+74,"readReg2", false,-1, 4,0);
    tracep->declBus(c+75,"writeReg", false,-1, 4,0);
    tracep->declBus(c+99,"reg_readData1_mux", false,-1, 31,0);
    tracep->declBus(c+100,"reg_readData2_mux", false,-1, 31,0);
    tracep->declBus(c+140,"pc_current_IF_ID_mux", false,-1, 31,0);
    tracep->declBus(c+141,"pc_S_out", false,-1, 31,0);
    tracep->declBit(c+76,"reg_write_ID_EX", false,-1);
    tracep->declBus(c+8,"mem_to_reg_ID_EX", false,-1, 1,0);
    tracep->declBit(c+77,"mem_read_ID_EX", false,-1);
    tracep->declBit(c+9,"mem_write_ID_EX", false,-1);
    tracep->declBit(c+10,"alu_src_ID_EX", false,-1);
    tracep->declBus(c+11,"alu_op_ID_EX", false,-1, 1,0);
    tracep->declBus(c+12,"pc_plus4_ID_EX", false,-1, 31,0);
    tracep->declBus(c+13,"reg_read_data1_ID_EX", false,-1, 31,0);
    tracep->declBus(c+14,"reg_read_data2_ID_EX", false,-1, 31,0);
    tracep->declBus(c+15,"imm_ID_EX", false,-1, 31,0);
    tracep->declBus(c+78,"writeReg_ID_EX", false,-1, 4,0);
    tracep->declBus(c+16,"funct3_ID_EX", false,-1, 2,0);
    tracep->declBit(c+17,"funct7_ID_EX", false,-1);
    tracep->declBit(c+79,"id_ForwardA", false,-1);
    tracep->declBit(c+80,"id_ForwardB", false,-1);
    tracep->declBus(c+81,"ex_ForwardA", false,-1, 1,0);
    tracep->declBus(c+82,"ex_ForwardB", false,-1, 1,0);
    tracep->declBus(c+83,"reg_read_data1_ID_EX_mux", false,-1, 31,0);
    tracep->declBus(c+84,"reg_read_data2_ID_EX_mux", false,-1, 31,0);
    tracep->declBus(c+18,"alu_result_MEM_WB", false,-1, 31,0);
    tracep->declBus(c+19,"mem_read_data_MEM_WB", false,-1, 31,0);
    tracep->declBus(c+85,"write_reg_MEM_WB", false,-1, 4,0);
    tracep->declBit(c+86,"reg_write_MEM_WB", false,-1);
    tracep->declBus(c+20,"mem_to_reg_MEM_WB", false,-1, 1,0);
    tracep->declBus(c+21,"pc_plus4_MEM_WB", false,-1, 31,0);
    tracep->pushNamePrefix("hazard_detection_unit ");
    tracep->declBus(c+70,"opcode", false,-1, 6,0);
    tracep->declBus(c+94,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+73,"id_R1", false,-1, 4,0);
    tracep->declBus(c+74,"id_R2", false,-1, 4,0);
    tracep->declBus(c+78,"ex_Rd", false,-1, 4,0);
    tracep->declBus(c+64,"mem_Rd", false,-1, 4,0);
    tracep->declBit(c+77,"ID_EX_MemRead", false,-1);
    tracep->declBit(c+65,"mem_MemRead", false,-1);
    tracep->declBit(c+68,"RePC", false,-1);
    tracep->declBit(c+69,"Flush_HD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+1,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+83,"A", false,-1, 31,0);
    tracep->declBus(c+60,"B", false,-1, 31,0);
    tracep->declBus(c+58,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+61,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+11,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+17,"funct7", false,-1);
    tracep->declBus(c+16,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+54,"a", false,-1, 31,0);
    tracep->declBus(c+142,"b", false,-1, 31,0);
    tracep->declBus(c+55,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+140,"a", false,-1, 31,0);
    tracep->declBus(c+62,"b", false,-1, 31,0);
    tracep->declBus(c+87,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+99,"A", false,-1, 31,0);
    tracep->declBus(c+100,"B", false,-1, 31,0);
    tracep->declBit(c+88,"BrEq", false,-1);
    tracep->declBit(c+89,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+70,"opcode", false,-1, 6,0);
    tracep->declBus(c+71,"funct3", false,-1, 2,0);
    tracep->declBit(c+88,"BrEq", false,-1);
    tracep->declBit(c+89,"BrLT", false,-1);
    tracep->declBit(c+90,"memRead", false,-1);
    tracep->declBus(c+94,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+95,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+91,"memWrite", false,-1);
    tracep->declBit(c+92,"ALUSrc", false,-1);
    tracep->declBit(c+93,"regWrite", false,-1);
    tracep->declBus(c+96,"PCSel", false,-1, 1,0);
    tracep->declBit(c+97,"flushCtrl", false,-1);
    tracep->declBit(c+98,"PCorR1", false,-1);
    tracep->declBus(c+101,"crtl", false,-1, 7,0);
    tracep->declBus(c+143,"b1", false,-1, 9,0);
    tracep->declBus(c+144,"b2", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+4,"memWrite", false,-1);
    tracep->declBit(c+65,"memRead", false,-1);
    tracep->declBus(c+63,"address", false,-1, 31,0);
    tracep->declBus(c+3,"writeData", false,-1, 31,0);
    tracep->declBus(c+139,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_Reg ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBus(c+58,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+12,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+84,"readData2_i", false,-1, 31,0);
    tracep->declBus(c+78,"write_reg_i", false,-1, 4,0);
    tracep->declBit(c+9,"mem_write_i", false,-1);
    tracep->declBit(c+77,"mem_read_i", false,-1);
    tracep->declBus(c+8,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+76,"regWrite_i", false,-1);
    tracep->declBus(c+63,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+2,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+3,"readData2_o", false,-1, 31,0);
    tracep->declBus(c+64,"write_reg_o", false,-1, 4,0);
    tracep->declBit(c+66,"regWrite_o", false,-1);
    tracep->declBit(c+4,"mem_write_o", false,-1);
    tracep->declBit(c+65,"mem_read_o", false,-1);
    tracep->declBus(c+5,"mem_to_reg_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Forwarding_Unit ");
    tracep->declBus(c+73,"id_R1", false,-1, 4,0);
    tracep->declBus(c+74,"id_R2", false,-1, 4,0);
    tracep->declBus(c+78,"ex_R1", false,-1, 4,0);
    tracep->declBus(c+78,"ex_R2", false,-1, 4,0);
    tracep->declBus(c+64,"mem_Rd", false,-1, 4,0);
    tracep->declBus(c+85,"wb_Rd", false,-1, 4,0);
    tracep->declBit(c+66,"mem_RegWrite", false,-1);
    tracep->declBit(c+86,"wb_RegWrite", false,-1);
    tracep->declBit(c+79,"id_ForwardA", false,-1);
    tracep->declBit(c+80,"id_ForwardB", false,-1);
    tracep->declBus(c+81,"ex_ForwardA", false,-1, 1,0);
    tracep->declBus(c+82,"ex_ForwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_Reg ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBit(c+93,"reg_write_i", false,-1);
    tracep->declBus(c+94,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+90,"mem_read_i", false,-1);
    tracep->declBit(c+91,"mem_write_i", false,-1);
    tracep->declBit(c+92,"alu_src_i", false,-1);
    tracep->declBus(c+95,"alu_op_i", false,-1, 1,0);
    tracep->declBus(c+71,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+72,"funct7_i", false,-1);
    tracep->declBus(c+7,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+99,"read_data1_i", false,-1, 31,0);
    tracep->declBus(c+100,"read_data2_i", false,-1, 31,0);
    tracep->declBus(c+57,"imm_i", false,-1, 31,0);
    tracep->declBus(c+75,"write_reg_i", false,-1, 4,0);
    tracep->declBit(c+69,"Flush_HD", false,-1);
    tracep->declBit(c+76,"reg_write_o", false,-1);
    tracep->declBus(c+8,"mem_to_reg_o", false,-1, 1,0);
    tracep->declBit(c+77,"mem_read_o", false,-1);
    tracep->declBit(c+9,"mem_write_o", false,-1);
    tracep->declBit(c+10,"alu_src_o", false,-1);
    tracep->declBus(c+11,"alu_op_o", false,-1, 1,0);
    tracep->declBus(c+12,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+13,"read_data1_o", false,-1, 31,0);
    tracep->declBus(c+14,"read_data2_o", false,-1, 31,0);
    tracep->declBus(c+15,"imm_o", false,-1, 31,0);
    tracep->declBus(c+78,"write_reg_o", false,-1, 4,0);
    tracep->declBus(c+16,"funct3_o", false,-1, 2,0);
    tracep->declBit(c+17,"funct7_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_Reg ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBus(c+54,"pc_i", false,-1, 31,0);
    tracep->declBus(c+55,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+56,"inst_i", false,-1, 31,0);
    tracep->declBit(c+69,"Flush_HD", false,-1);
    tracep->declBit(c+97,"flushCtrl", false,-1);
    tracep->declBus(c+6,"pc_o", false,-1, 31,0);
    tracep->declBus(c+7,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+67,"inst_o", false,-1, 31,0);
    tracep->declBus(c+6,"pc_t", false,-1, 31,0);
    tracep->declBus(c+7,"pc_4_t", false,-1, 31,0);
    tracep->declBus(c+67,"inst_t", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+67,"inst", false,-1, 31,0);
    tracep->declBus(c+57,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+54,"readAddr", false,-1, 31,0);
    tracep->declBus(c+56,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_Reg ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBus(c+63,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+139,"dmem_read_data_i", false,-1, 31,0);
    tracep->declBus(c+64,"write_reg_i", false,-1, 4,0);
    tracep->declBus(c+5,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+66,"reg_write_i", false,-1);
    tracep->declBus(c+2,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+18,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+19,"dmem_read_data_o", false,-1, 31,0);
    tracep->declBus(c+85,"write_reg_o", false,-1, 4,0);
    tracep->declBit(c+86,"reg_write_o", false,-1);
    tracep->declBus(c+20,"mem_to_reg_o", false,-1, 1,0);
    tracep->declBus(c+21,"pc_4_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBit(c+10,"sel", false,-1);
    tracep->declBus(c+84,"s0", false,-1, 31,0);
    tracep->declBus(c+15,"s1", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBit(c+68,"sel", false,-1);
    tracep->declBus(c+141,"s0", false,-1, 31,0);
    tracep->declBus(c+54,"s1", false,-1, 31,0);
    tracep->declBus(c+136,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC_Branch ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBit(c+98,"sel", false,-1);
    tracep->declBus(c+6,"s0", false,-1, 31,0);
    tracep->declBus(c+99,"s1", false,-1, 31,0);
    tracep->declBus(c+140,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC_Jump ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBus(c+96,"sel", false,-1, 1,0);
    tracep->declBus(c+55,"s0", false,-1, 31,0);
    tracep->declBus(c+87,"s1", false,-1, 31,0);
    tracep->declBus(c+87,"s2", false,-1, 31,0);
    tracep->declBus(c+141,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBus(c+20,"sel", false,-1, 1,0);
    tracep->declBus(c+18,"s0", false,-1, 31,0);
    tracep->declBus(c+19,"s1", false,-1, 31,0);
    tracep->declBus(c+21,"s2", false,-1, 31,0);
    tracep->declBus(c+59,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_reg_read_data1 ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBus(c+81,"sel", false,-1, 1,0);
    tracep->declBus(c+13,"s0", false,-1, 31,0);
    tracep->declBus(c+59,"s1", false,-1, 31,0);
    tracep->declBus(c+63,"s2", false,-1, 31,0);
    tracep->declBus(c+83,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_reg_read_data2 ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBus(c+82,"sel", false,-1, 1,0);
    tracep->declBus(c+14,"s0", false,-1, 31,0);
    tracep->declBus(c+59,"s1", false,-1, 31,0);
    tracep->declBus(c+63,"s2", false,-1, 31,0);
    tracep->declBus(c+84,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBus(c+136,"pc_i", false,-1, 31,0);
    tracep->declBus(c+54,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"rst", false,-1);
    tracep->declBit(c+86,"regWrite", false,-1);
    tracep->declBus(c+73,"readReg1", false,-1, 4,0);
    tracep->declBus(c+74,"readReg2", false,-1, 4,0);
    tracep->declBus(c+85,"writeReg", false,-1, 4,0);
    tracep->declBus(c+59,"writeData", false,-1, 31,0);
    tracep->declBus(c+137,"readData1", false,-1, 31,0);
    tracep->declBus(c+138,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+22+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+57,"i", false,-1, 31,0);
    tracep->declBus(c+62,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_readData1 ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBit(c+79,"sel", false,-1);
    tracep->declBus(c+137,"s0", false,-1, 31,0);
    tracep->declBus(c+63,"s1", false,-1, 31,0);
    tracep->declBus(c+99,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_readData2 ");
    tracep->declBus(c+145,"size", false,-1, 31,0);
    tracep->declBit(c+80,"sel", false,-1);
    tracep->declBus(c+138,"s0", false,-1, 31,0);
    tracep->declBus(c+63,"s1", false,-1, 31,0);
    tracep->declBus(c+100,"out", false,-1, 31,0);
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
    bufp->fullCData(oldp+1,(vlSelf->PipelineCPU__DOT__alu_control),4);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM),32);
    bufp->fullBit(oldp+4,(vlSelf->PipelineCPU__DOT__mem_write_EX_MEM));
    bufp->fullCData(oldp+5,(vlSelf->PipelineCPU__DOT__mem_to_reg_EX_MEM),2);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_4_t),32);
    bufp->fullCData(oldp+8,(vlSelf->PipelineCPU__DOT__mem_to_reg_ID_EX),2);
    bufp->fullBit(oldp+9,(vlSelf->PipelineCPU__DOT__mem_write_ID_EX));
    bufp->fullBit(oldp+10,(vlSelf->PipelineCPU__DOT__alu_src_ID_EX));
    bufp->fullCData(oldp+11,(vlSelf->PipelineCPU__DOT__alu_op_ID_EX),2);
    bufp->fullIData(oldp+12,(vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX),32);
    bufp->fullIData(oldp+13,(vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX),32);
    bufp->fullIData(oldp+14,(vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX),32);
    bufp->fullIData(oldp+15,(vlSelf->PipelineCPU__DOT__imm_ID_EX),32);
    bufp->fullCData(oldp+16,(vlSelf->PipelineCPU__DOT__funct3_ID_EX),3);
    bufp->fullBit(oldp+17,(vlSelf->PipelineCPU__DOT__funct7_ID_EX));
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__alu_result_MEM_WB),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB),32);
    bufp->fullCData(oldp+20,(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB),2);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB),32);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+47,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+48,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+54,(vlSelf->PipelineCPU__DOT__pc_current),32);
    bufp->fullIData(oldp+55,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)),32);
    bufp->fullIData(oldp+56,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_current)
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
    bufp->fullIData(oldp+57,(vlSelf->PipelineCPU__DOT__imm),32);
    bufp->fullIData(oldp+58,(vlSelf->PipelineCPU__DOT__alu_result),32);
    bufp->fullIData(oldp+59,(vlSelf->PipelineCPU__DOT__write_data),32);
    bufp->fullIData(oldp+60,(vlSelf->PipelineCPU__DOT__alu_src_b),32);
    bufp->fullBit(oldp+61,((0U == vlSelf->PipelineCPU__DOT__alu_result)));
    bufp->fullIData(oldp+62,((vlSelf->PipelineCPU__DOT__imm 
                              << 1U)),32);
    bufp->fullIData(oldp+63,(vlSelf->PipelineCPU__DOT__alu_result_EX_MEM),32);
    bufp->fullCData(oldp+64,(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM),5);
    bufp->fullBit(oldp+65,(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM));
    bufp->fullBit(oldp+66,(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM));
    bufp->fullIData(oldp+67,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t),32);
    bufp->fullBit(oldp+68,(vlSelf->PipelineCPU__DOT__RePC));
    bufp->fullBit(oldp+69,(vlSelf->PipelineCPU__DOT__Flush_HD));
    bufp->fullCData(oldp+70,((0x7fU & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)),7);
    bufp->fullCData(oldp+71,((7U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+72,((1U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+73,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+74,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+75,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 7U))),5);
    bufp->fullBit(oldp+76,(vlSelf->PipelineCPU__DOT__reg_write_ID_EX));
    bufp->fullBit(oldp+77,(vlSelf->PipelineCPU__DOT__mem_read_ID_EX));
    bufp->fullCData(oldp+78,(vlSelf->PipelineCPU__DOT__writeReg_ID_EX),5);
    bufp->fullBit(oldp+79,(vlSelf->PipelineCPU__DOT__id_ForwardA));
    bufp->fullBit(oldp+80,(vlSelf->PipelineCPU__DOT__id_ForwardB));
    bufp->fullCData(oldp+81,(vlSelf->PipelineCPU__DOT__ex_ForwardA),2);
    bufp->fullCData(oldp+82,(vlSelf->PipelineCPU__DOT__ex_ForwardB),2);
    bufp->fullIData(oldp+83,(vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX_mux),32);
    bufp->fullIData(oldp+84,(vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX_mux),32);
    bufp->fullCData(oldp+85,(vlSelf->PipelineCPU__DOT__write_reg_MEM_WB),5);
    bufp->fullBit(oldp+86,(vlSelf->PipelineCPU__DOT__reg_write_MEM_WB));
    bufp->fullIData(oldp+87,(vlSelf->PipelineCPU__DOT__pc_branch),32);
    bufp->fullBit(oldp+88,(((vlSelf->PipelineCPU__DOT__reg_readData1_mux 
                             == vlSelf->PipelineCPU__DOT__reg_readData2_mux)
                             ? 1U : 0U)));
    bufp->fullBit(oldp+89,((VL_LTS_III(32, vlSelf->PipelineCPU__DOT__reg_readData1_mux, vlSelf->PipelineCPU__DOT__reg_readData2_mux)
                             ? 1U : 0U)));
    bufp->fullBit(oldp+90,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 7U))));
    bufp->fullBit(oldp+91,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 2U))));
    bufp->fullBit(oldp+92,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 1U))));
    bufp->fullBit(oldp+93,((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl))));
    bufp->fullCData(oldp+94,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                    >> 5U))),2);
    bufp->fullCData(oldp+95,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                    >> 3U))),2);
    bufp->fullCData(oldp+96,(vlSelf->PipelineCPU__DOT__pc_sel),2);
    bufp->fullBit(oldp+97,(vlSelf->PipelineCPU__DOT__flushCtrl));
    bufp->fullBit(oldp+98,(vlSelf->PipelineCPU__DOT__PCorR1));
    bufp->fullIData(oldp+99,(vlSelf->PipelineCPU__DOT__reg_readData1_mux),32);
    bufp->fullIData(oldp+100,(vlSelf->PipelineCPU__DOT__reg_readData2_mux),32);
    bufp->fullCData(oldp+101,(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl),8);
    bufp->fullBit(oldp+102,(vlSelf->clk));
    bufp->fullBit(oldp+103,(vlSelf->start));
    bufp->fullIData(oldp+104,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+136,(((IData)(vlSelf->PipelineCPU__DOT__RePC)
                                ? vlSelf->PipelineCPU__DOT__pc_current
                                : ((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                    ? ((IData)(4U) 
                                       + vlSelf->PipelineCPU__DOT__pc_current)
                                    : ((1U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                        ? vlSelf->PipelineCPU__DOT__pc_branch
                                        : ((2U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                            ? vlSelf->PipelineCPU__DOT__pc_branch
                                            : 0U))))),32);
    bufp->fullIData(oldp+137,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+138,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+139,(vlSelf->PipelineCPU__DOT__mem_read_data),32);
    bufp->fullIData(oldp+140,(((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                ? vlSelf->PipelineCPU__DOT__reg_readData1_mux
                                : vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t)),32);
    bufp->fullIData(oldp+141,(((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)
                                : ((1U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                    ? vlSelf->PipelineCPU__DOT__pc_branch
                                    : ((2U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                        ? vlSelf->PipelineCPU__DOT__pc_branch
                                        : 0U)))),32);
    bufp->fullIData(oldp+142,(4U),32);
    bufp->fullSData(oldp+143,(0x100U),10);
    bufp->fullSData(oldp+144,(0U),10);
    bufp->fullIData(oldp+145,(0x20U),32);
}
