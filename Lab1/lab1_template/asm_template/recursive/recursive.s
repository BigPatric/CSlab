# extern int fibo_asm(int term)

.section .text
.global fibo_asm

fibo_asm:
    li t0, 2
    bge a0, t0, fibo # >= 2
    ret              # if e < 2 -> return n ie: 0 or 1
fibo:
#   use 64 bit registers (sign-extention)
    addi sp, sp, -24
    sd ra, 0(sp)
    sd s0, 8(sp)
    sd s1, 16(sp)

    mv s0, a0     # s0 = n
    addi a0, s0, -1 #n-1
    call fibo_asm

    mv s1, a0 # s1 = fibo(n-1)
    addi a0, s0, -2 # n-2
    call fibo_asm

    add a0, s1, a0 # (return)a0 = (s1)fibo(n-1) + (a0 from line 23)fibo(n-2) 

    ld ra, 0(sp)
    ld s0, 8(sp)
    ld s1, 16(sp)
    addi sp, sp, 24 # release stack
    ret
