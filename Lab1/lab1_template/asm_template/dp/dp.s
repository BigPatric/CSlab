.section .text
.global asm_dp

asm_dp:
    li t0, 1          # i = 1
    addi a1, a1, 1    # t = t + 1 

loop1:
    bge t0, a1, end   # 如果 i >= t+1，結束
    li t1, 0          # 重置 j = 0

loop2:
    li t2, 6
    bge t1, t2, ADI   # if j >= 6，to next i loop

    # 計算 arr[2*j] 和 arr[2*j+1]
    slli t2, t1, 3    # t2 = j * 8 (2*j * 4)
    add t3, a0, t2    # t3 = arr + (2*j)*4
    lw t4, 0(t3)      # t4 = arr[2*j]
    lw t5, 4(t3)      # t5 = arr[2*j+1]

    sub t6, t0, t4    # t6 = i - arr[2*j]
    bltz t6, ADJ      # 如果 i - arr[2*j] < 0，跳過

    # 讀取 dp_array[i] 和 dp_array[i - arr[2*j]]
    slli t2, t0, 2    # t2 = i * 4
    add t2, a2, t2    # t2 = dp_array + i*4
    lw t3, 0(t2)      # t3 = dp_array[i]

    slli t6, t6, 2    # t6 = (i - arr[2*j]) * 4
    add t6, a2, t6    # t6 = dp_array + (i - arr[2*j])*4
    lw t4, 0(t6)      # t4 = dp_array[i - arr[2*j]]

    add t4, t4, t5    # t4 = dp_array[i - arr[2*j]] + arr[2*j+1]
    bge t3, t4, ADJ   # 如果 dp_array[i] >= t4，跳過更新

    sw t4, 0(t2)      # dp_array[i] = t4

ADJ:
    addi t1, t1, 1    # j++
    j loop2 

ADI:
    addi t0, t0, 1    # i++
    j loop1

end:
    ret