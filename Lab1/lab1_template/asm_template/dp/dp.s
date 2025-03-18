.section .text
.global asm_dp

asm_dp:
    li t0, 1          # i = 1
    addi a1, a1, 1    # t = t + 1 

loop1:
    bge t0, a1, end   # if i >= t+1，end
    li t1, 0          # reset j = 0

loop2:
    li t2, 6
    bge t1, t2, ADI   # if j >= 6，to next i loop

    # read arr[2*j] & arr[2*j+1]
    slli t2, t1, 3    # t2 = j * 8 (2*j * 4)
    add t3, a0, t2    # t3 = arr + (2*j)*4
    lw t4, 0(t3)      # t4 = arr[2*j]
    lw t5, 4(t3)      # t5 = arr[2*j+1]

    sub t6, t0, t4    # t6 = i - arr[2*j]
    bltz t6, ADJ      # if i - arr[2*j] < 0，continue

    # read dp_array[i] & dp_array[i - arr[2*j]]
    slli t2, t0, 2    # t2 = i * 4
    add t2, a2, t2    # t2 = dp_array + i*4
    lw t3, 0(t2)      # t3 = dp_array[i]

    slli t6, t6, 2    # t6 = (i - arr[2*j]) * 4
    add t6, a2, t6    # t6 = dp_array + (i - arr[2*j])*4
    lw t4, 0(t6)      # t4 = dp_array[i - arr[2*j]]

    add t4, t4, t5    # t4 = dp_array[i - arr[2*j]] + arr[2*j+1]
    bge t3, t4, ADJ   # if dp_array[i] >= t4，no update 

    sw t4, 0(t2)      # dp_array[i] = t4

ADJ:
    addi t1, t1, 1    # j++
    j loop2 

ADI:
    addi t0, t0, 1    # i++
    j loop1

end:
    ret