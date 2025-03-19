# extern int fibo_asm(int term)

.section .text
.global fibo_asm

fibo_asm:
    addi sp, sp, -8    # make space (change 32 to whatever space you want)
    sw ra, 4(sp)      # save ra
    sw s0, 0(sp)       # save s0

# /////////////////////////////////////////////////////////////////
    beq a0, zero, end1  # if term == 0, return 0
    li t1, 1            # if term == 1, return 1
    beq a0, t1, end2

    subi a0, a0, 1     # term - 1
    jal ra, fibo_asm    # fibo_asm(term - 1)

    add a0, t0, a0  # term + fibo_asm(term - 1)
    
# /////////////////////////////////////////////////////////////////
    lw ra, 4(sp)       # load ra
    lw s0, 0(sp)       # load s0
    addi sp, sp, 8     # release space
    jr ra               # return

end1:
    li a0, 0
    ret
end2:
    li a0, 1
    ret

