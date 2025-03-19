# extern int fibo_asm(int term)

.section .text
.global fibo_asm

fibo_asm:
    addi sp, sp, -32    # make space (change 32 to whatever space you want)
    sw ra, 28(sp)       # save ra
    sw s0, 24(sp)       # save s0
    addi s0, sp, 32     # move s0 to new position

    li s0, 0            #answer
# /////////////////////////////////////////////////////////////////
    beq a0, zero, end1  # if term == 0, return 0
    li t1, 1            # if term == 1, return 1
    beq a0, t1, end2

    addi a0, a0, -1     # term - 1
    jal ra, fibo_asm    # fibo_asm(term - 1)
    add s0, s0, a0      # s0 += fibo_asm(term - 1)

# /////////////////////////////////////////////////////////////////
    lw ra, 28(sp)       # load ra
    lw s0, 24(sp)       # load s0
    addi sp, sp, 32     # release space
    mv a0, s0           # return s0
    jr ra               # return

end1:
    li a0, 0
    ret
end2:
    li a0, 1
    ret

