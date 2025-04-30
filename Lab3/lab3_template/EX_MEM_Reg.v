module EX_MEM_Reg (
    input wire clk,
    input wire rst,
    input wire [31:0] alu_result_i,
    input wire [31:0] pc_4_i,
    input wire [31:0] readData2_i,
    input wire [4:0] write_reg_i,
    
    input wire mem_write_i,//M
    input wire mem_read_i,

    input wire [1:0] mem_to_reg_i, // WB
    input wire regWrite_i,

    output reg [31:0] alu_result_o,
    output reg [31:0] pc_4_o,
    output reg [31:0] readData2_o,
    output reg [4:0] write_reg_o,
    output reg regWrite_o,
    output reg mem_write_o,
    output reg mem_read_o,
    output reg [1:0] mem_to_reg_o // WB
    
);
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            alu_result_o <= 32'b0;
            pc_4_o <= 32'b0;
            readData2_o <= 32'b0;
            write_reg_o <= 5'b0;
            regWrite_o <= 1'b0;
            mem_write_o <= 1'b0;
            mem_read_o <= 1'b0;
            mem_to_reg_o <= 2'b0;
        end
        else begin
            alu_result_o <= alu_result_i;
            pc_4_o <= pc_4_i;
            readData2_o <= readData2_i;
            write_reg_o <= write_reg_i;
            regWrite_o <= regWrite_i;
            mem_write_o <= mem_write_i;
            mem_read_o <= mem_read_i;
            mem_to_reg_o <= mem_to_reg_i;
        end
    end
endmodule
