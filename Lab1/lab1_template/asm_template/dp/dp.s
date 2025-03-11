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
    li t2, 1 # const 1
    li t3, 6 # const 6
    addi a1, a1, 1 # t+1
    
loop1:
    blt t0, a1, loop2
    j end
loop2:
    blt t1, t3, inner_loop
    j ADDI
inner_loop:
    slli t4, t1, 1 # j * 2
    add t5, a0, t4 # arr + j * 2
    lw t6, 0(t5) # arr[j]
    sub t7, t1, t0 # j - i
    blt x0, t7, ADDJ # if 0 < j - i -> j++
    
    add t8, a2, t1 # arr2 + j
    add t9, t4, t6
    add t10, a0, t9 # arr + j * 2 + 1
    lw t11, 0(t10) # arr[j+1]

    add t12, a2, t0 # arr2 + i - arr[j]
    lw t13, 0(t12) # arr2[i - arr[j]]

    add t14, a2, t1 # arr2 + j
    lw t15, 0(t14) # arr2[j]
 
    add t16, t13, t11 # arr2[i - arr[j]] + arr2[j]
    bge t15, t16, ADDJ 
    sw t16, 0(t14) # 將 t16 的值存回 arr2[j]
    
    j ADDJ
ADDI:
    addi t0, t0, 1
    li t1, 0 # reset j
    j loop1
ADDJ:
    addi t1, t1, 1
    j loop2
end:
    mv a0, t0
    ret
