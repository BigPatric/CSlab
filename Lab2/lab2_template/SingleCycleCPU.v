module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// The rst signal is active low, which means the module will reset if the rst signal is zero.
// And you should follow this design.

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

// Wires for interconnections
wire [31:0] pc_current, pc_next, pc_plus4, pc_branch;
wire [31:0] instruction;
wire [31:0] imm_gen_out;
wire [31:0] reg_read_data1, reg_read_data2;
wire [31:0] alu_result, mem_read_data, write_data;
wire [31:0] alu_src_b;
wire [3:0] alu_control;
wire [2:0] funct3;
wire [6:0] opcode;
wire funct7;
wire branch_eq, branch_lt, mem_read, mem_write, alu_src, reg_write, mem_to_reg;
wire [1:0] alu_op;
wire [1:0] write_data_sel;
wire [1:0] pc_sel;


assign opcode = instruction[6:0];
assign funct3 = instruction[14:12];
assign funct7 = instruction[30];



PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(pc_next),
    .pc_o(pc_current)
);

Adder m_Adder_1(
    .a(pc_current),
    .b(32'h4),
    .sum(pc_plus4)
);


InstructionMemory m_InstMem(
    .readAddr(pc_current),
    .inst(instruction)
);

Control m_Control(
    .opcode(opcode),
    .funct3(funct3),
    .BrEq(branch_eq),
    .BrLT(branch_lt),
    .memRead(mem_read),
    .memtoReg(mem_to_reg),
    .ALUOp(alu_op),
    .memWrite(mem_write),
    .ALUSrc(alu_src),
    .regWrite(reg_write),
    .PCSel(pc_sel)
);

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(reg_write),
    .readReg1(instruction[19:15]),
    .readReg2(instruction[24:20]),
    .writeReg(instruction[11:7]),
    .writeData(write_data),
    .readData1(reg_read_data1),
    .readData2(reg_read_data2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

BranchComp m_BranchComp(
    .A(reg_read_data1),
    .B(reg_read_data2),
    .BrEq(branch_eq),
    .BrLT(branch_lt)
);

ImmGen m_ImmGen(
    .inst(instruction[31:20]),
    .imm(imm_gen_out)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(imm_gen_out),
    .o(pc_branch)
);

Adder m_Adder_2(
    .a(pc_current),
    .b(pc_branch),
    .sum(pc_branch)
);

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(pc_sel),
    .s0(pc_current),
    .s1(pc_plus4),
    .s2(pc_branch),
    .out(pc_next)
);


Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(alu_src),
    .s0(reg_read_data2),
    .s1(imm_gen_out),
    .out(alu_src_b)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(alu_op),
    .funct7(funct7),
    .funct3(funct3),
    .ALUCtl(alu_control)
);

ALU m_ALU(
    .ALUctl(alu_control),
    .A(reg_read_data1),
    .B(alu_src_b),
    .ALUOut(alu_result),
    .zero(branch_eq)
);


DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(mem_write),
    .memRead(mem_read),
    .address(alu_result),
    .writeData(reg_read_data2),
    .readData(mem_read_data)
);


Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(write_data_sel),
    .s0(alu_result),
    .s1(mem_read_data),
    .s2(32'b0),
    .out(write_data)
);

endmodule
