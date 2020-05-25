.global _Asm_write

.text
_Asm_write:
    movl 4(%esp), %ebx # ebx: fd
    movl 8(%esp), %ecx # ecx: buf
    movl 12(%esp), %edx # edx: count
    movl $4, %eax # 4: write
    int $0x80
    ret
