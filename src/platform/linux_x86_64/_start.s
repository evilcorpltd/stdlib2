.global _start

.text
_start:
   # From the 'System V Application Binary Interface'

   # From Figure 3.9: Initial Process Stack
   # %rbp: Unspecified at process initialization time,
   #       but should be set to zero to mark the depest stack frame
   # %rsp: Holds the address of the byte with lowest address which
   #       is part of the stack. Guaranteed to be 16-byte aligned at process entry.

   # From Figure 3.4: Register Usage
   # %rdi used to pass 1st argument to functions
   # %rsi used to pass 2nd argument to functions

   xor %rbp, %rbp
   movq (%rsp), %rdi # load argc
   lea 8(%rsp), %rsi # calc argv (pointer to the array on the stack)

   call _stdlib2_start

   hlt # should never get here
