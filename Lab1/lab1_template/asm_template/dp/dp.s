# extern void entry(int *arr, int t, int *arr2)

.section .text
.global asm_dp

asm_dp:
    # TODO: You have to implement dynamic programming with assembly code
    # HINT: You might need to use "slli(shift left)" to implement multiplication
    # HINT: You might need to be careful of calculating the memory address you store in your register
    # arr* -> a0, t -> a1, arr2* -> a2
    li t0, 1 # i
    li t1, 0 # j    
    addi a1, a1, 1
loop1:
    bge t0, a1, end
    j loop2

loop2:
    bge t1, 6, ADJ
    # t2 for 2*j
    # t3 for arr[2*j]
    # t4 for arr[2*j+1]
    # t5 for arr2[i]
    slli t2, t1, 1 # 2*j
    add t3, a0, t2 # arr[2*j]
    lw t3, 0(t3)    # arr[2*j]
    lw t4, 4(t3)    # arr[2*j+1]
    sub t3, t0, t3  #i - arr[2*j]
    bge zero, t3, ADJ

    add t2, a1, t0 # arr2[i]
    lw t5, 0(t2)    # arr2[i]   
    add t3, a2, t3 # arr2 + i - arr[2*j]
    lw t6, 0(t3)    # arr2[i-arr[2*j]]
    add t6, t6, t4  # arr2[i-arr[2*j]] + arr[2*j+1]
    bge t2, t6, ADJ
    sw t6, 0(t2)    # arr2[i] = arr2[i-arr[2*j]] + arr[2*j+1]   

    j ADJ
ADI:
    addi t0, t0, 1
    j loop1
ADJ:
    addi t1, t1, 1
    j loop2 

end:
    ret