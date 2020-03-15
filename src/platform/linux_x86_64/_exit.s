.global _exit

.text
_exit:
    # %rdi already has the exit_code from the caller
    movq $60, %rax
    syscall
