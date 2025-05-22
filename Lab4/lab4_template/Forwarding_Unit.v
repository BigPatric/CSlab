module Forwarding_Unit (
    input wire [4:0] id_R1,    // Source register 1 in ID stage (for branch)
    input wire [4:0] id_R2,    // Source register 2 in ID stage (for branch)
    input wire [4:0] ex_R1,    // Source register 1 in EX stage
    input wire [4:0] ex_R2,    // Source register 2 in EX stage
    input wire [4:0] mem_Rd,   // Destination register in MEM stage
    input wire [4:0] wb_Rd,    // Destination register in WB stage
    input wire mem_RegWrite,   // Register write signal in MEM stage
    input wire wb_RegWrite,    // Register write signal in WB stage
    output reg id_ForwardA,    // Forward control for source 1 in ID stage (for branch)
    output reg id_ForwardB,    // Forward control for source 2 in ID stage (for branch)
    output reg [1:0] ex_ForwardA, // Forward control for source 1 in EX stage
    output reg [1:0] ex_ForwardB  // Forward control for source 2 in EX stage
);

    always @(*) begin
        id_ForwardA = 1'b0;
        id_ForwardB = 1'b0;
        ex_ForwardA = 2'b00;
        ex_ForwardB = 2'b00;

        // ID stage forwarding (for branch comparator)
        if (mem_RegWrite && (mem_Rd != 0) && (mem_Rd == id_R1))
            id_ForwardA = 1'b1;
        if (mem_RegWrite && (mem_Rd != 0) && (mem_Rd == id_R2))
            id_ForwardB = 1'b1;

        // EX stage forwarding (for ALU)
        if (mem_RegWrite && (mem_Rd != 0) && (mem_Rd == ex_R1))
            ex_ForwardA = 2'b10; // Forward from MEM
        else if (wb_RegWrite && (wb_Rd != 0) && (wb_Rd == ex_R1))
            ex_ForwardA = 2'b01; // Forward from WB

        if (mem_RegWrite && (mem_Rd != 0) && (mem_Rd == ex_R2))
            ex_ForwardB = 2'b10; // Forward from MEM
        else if (wb_RegWrite && (wb_Rd != 0) && (wb_Rd == ex_R2))
            ex_ForwardB = 2'b01; // Forward from WB
    end

endmodule
