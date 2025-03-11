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
    
    add a1, 1, a1 # t+1
    
loop1:
    bge t0, t1, end
    j loop2
loop2:
    bge t1, 6, ADDI
    slli t11, t1, 1 # j * 2
    add t2, a0, t11 # arr + j * 2
    lw t2, 0(t2) # arr[j]
    sub t3, t1, t0 # j - i
    bge 0, t3, ADDJ# if 0 >= i-arr[j] -> j++
    
    add t22, a2, t11 # arr + j * 2 + 1
    add t11, 1, t11
    add t2, a0, t11 # arr + j * 2 + 1
    lw t2, 0(t2) # arr[j+1]

    add t3, a2, t3 # arr2 + i-arr[j]
    lw t4, 0(t3) # arr2[i-arr[j]]

    add t5, a2, t1 # arr2 + j
    lw t6, 0(t5) # arr2[j]
 
    add t7, t4, t2 # arr2[i-arr[j]] + arr2[j]
    bge t6, t7, ADDJ 
    lw t6, 0(t7)
    
    j ADDJ
ADDI:
    add t0, 1, t0
    li t1, 0 # reset j
    j loop1
ADDJ:
    add t1, 1, t1
    j loop2
end:
    mv a0, t0
    ret
