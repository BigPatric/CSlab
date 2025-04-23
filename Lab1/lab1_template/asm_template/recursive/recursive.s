fibo_asm:
    li t0, 2          
    bge a0, t0, fibo 
    ret              

fibo:
    addi sp, sp, -12 
    sw ra, 0(sp)     
    sw s0, 4(sp)     
    sw s1, 8(sp)     

    mv s0, a0        
    addi a0, s0, -1
    jal ra, fibo_asm  

    mv s1, a0        
    addi a0, s0, -2   
    jal ra, fibo_asm 

    add a0, s1, a0   

    lw ra, 0(sp)     
    lw s0, 4(sp)      
    lw s1, 8(sp)     
    addi sp, sp, 12   
    ret               