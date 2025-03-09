# extern int asm_entry(int *arr, int size);

.section .text
.global asm_entry

asm_entry:
    # TODO: You have to implement the xor_trick function with assembly language
    # arr* -> a0, size -> a1
    li t0, 0 # result
    li t1, 0 # counter

loop:
    bge t1, a1, end
    slli t2, t1, 2
    add t2, a0, t2
    lw t3, 0(t2)
    xor  t0, t0, t3
    addi t1, t1, 1
    j loop
end:
    mv a0, t0  # the return value
    ret