.global _Asm_write

.text
_Asm_write:
    # %rdi, rsi, and rdx are already set up by the caller.
    movq $1, %rax
    syscall
    ret
