.section .text
.global asm_dp

asm_dp:
    li t0, 1      # i = 1
    li t1, 0      # j = 0
    addi a1, a1, 1 # t = t + 1 

loop1:
    bge t0, a1, end
    li t1, 0      # 重置 j = 0

loop2:
    li t2, 6
    bge t1, t2, ADI
    # 計算 arr[2*j] 和 arr[2*j+1]
    slli t2, t1, 1  # 2*j
    slli t2, t2, 2  # (2*j) * 4 (轉換為 byte 位址)
    add t3, a0, t2  # 計算 arr + (2*j)
    lw t4, 0(t3)    # arr[2*j]
    lw t5, 4(t3)    # arr[2*j+1]

    sub t6, t0, t4  # i - arr[2*j]
    bge zero, t6, ADJ  # 如果 i - arr[2*j] < 0，跳過

    # 讀取 arr2[i] 和 arr2[i - arr[2*j]]
    slli t2, t0, 2  # i * 4
    add t2, a2, t2  # 計算 arr2 + i
    lw t3, 0(t2)    # 讀取 arr2[i]

    slli t6, t6, 2  # (i - arr[2*j]) * 4
    add t6, a2, t6  # 計算 arr2 + (i - arr[2*j])
    lw t4, 0(t6)    # 讀取 arr2[i - arr[2*j]]

    add t4, t4, t5  # arr2[i - arr[2*j]] + arr[2*j+1]
    bge t3, t4, ADJ  # 如果 arr2[i] >= 計算值，跳過更新

    sw t4, 0(t2)    # arr2[i] = arr2[i - arr[2*j]] + arr[2*j+1]

ADJ:
    addi t1, t1, 1
    j loop2 

ADI:
    addi t0, t0, 1
    j loop1

end:
    ret
