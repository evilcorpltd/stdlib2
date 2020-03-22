.global _Exit

.text
_Exit:
    # %rdi already has the exit_code from the caller
    movq $60, %rax
    syscall
