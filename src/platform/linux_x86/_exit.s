.global _Exit

.text
_Exit:
    # Exit code is first argument on the stack
    movl 4(%esp), %ebx # ebx should contain the return code
    movl $1, %eax      # System call number 1: exit()
    int  $0x80         # Invoke system call
