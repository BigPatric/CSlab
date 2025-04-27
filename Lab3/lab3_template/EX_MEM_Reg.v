module EX_MEM_Reg (
    input wire clk,
    input wire rst,
    input wire [31:0] alu_result_i,
    input wire [31:0] branch_addr_i,
    input wire [31:0] reg_write_data_i,
    input wire alu_zero_i,
    input wire mem_read_i,
    input wire mem_write_i,
    input wire reg_write_i, 

    output reg [31:0] alu_result_o,
    output reg [31:0] branch_addr_o,
    output reg [31:0] reg_write_data_o,
    output reg alu_zero_o,
    output reg mem_read_o,
    output reg mem_write_o,
    output reg reg_write_o
);
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            alu_result_o <= 32'b0;
            branch_addr_o <= 32'b0;
            reg_write_data_o <= 32'b0;
            alu_zero_o <= 1'b0;
            mem_read_o <= 1'b0;
            mem_write_o <= 1'b0;
            reg_write_o <= 1'b0;
        end 
        else begin
            alu_result_o <= alu_result_i;
            branch_addr_o <= branch_addr_i;
            reg_write_data_o <= reg_write_data_i;
            alu_zero_o <= alu_zero_i;
            mem_read_o <= mem_read_i;
            mem_write_o <= mem_write_i;
            reg_write_o <= reg_write_i;
        end
    end

endmodule
