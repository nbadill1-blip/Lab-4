
.section .data
.section .bss
.global sum_nums
.section .text

sum_nums:

    # %rsi holds the second arguement, array size
    # %rdi holds the first arguement, array pointer

    pushq %rbp
    movq %rsp, %rbp

    mov $0, %eax    # increment, starting at 0
    mov $0, %ecx    # accumulation, starting at 0 

.L2:

    cmpl %esi, %ecx
    jge .L3

    movl (%rdi, %rcx, 4), %edx  # have a register store the number at this index
    add %edx, %eax

    add $1, %ecx
    jmp .L2

.L3:
    popq %rbp
    ret



