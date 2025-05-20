module ImmGen (
    /* verilator lint_off UNUSEDSIGNAL */
    input [31:0] inst,
    output reg signed [31:0] imm
);
    // ImmGen generate imm value base opcode
    always @(*)begin
        case (inst[6:0]) // opcode
            7'b0010011: // I-type
                imm = ({{20{inst[31]}},inst[31:20]});
            7'b0000011:
                imm = ({{20{inst[31]}},inst[31:20]});
            7'b1100111:
                imm = ({{20{inst[31]}},inst[31:20]});
            7'b0100011: // S-type
                imm = ({{20{inst[31]}},inst[31:25], inst[11:7]});
            7'b1100011: // B-type
                imm = ({{20{inst[31]}},inst[31], inst[7], inst[30:25], inst[11:8]});
            7'b0110111:
                imm = ({inst[31:12], 12'b0});
            7'b0010111: // U-type
                imm = ({inst[31:12], 12'b0});
            7'b1101111: // J-type
                imm = ({{12{inst[31]}},inst[31], inst[19:12], inst[20], inst[30:21]});
            default: // default case
                imm = 32'b0; // Set to zero or handle as needed
        endcase
    end
endmodule

