.global _start

.text
_start:
   # From the 'SYSTEM V APPLICATION BINARY INTERFACE Intel386 Architecture'

   # From Figure 3.31: Initial Process Stack
   # %ebp: Unspecified at process initialization time,
   #       but should be set to zero to mark the deepest stack frame.
   # %esp: Holds the address of the byte with lowest address which
   #       is part of the stack. Guaranteed to be word aligned at process entry.

   # From Figure 3.15: Standard Stack Frame
   # Stack is word aligned
   # Argument words are pushed onto the stack in reverse order (that is, the
   # rightmost argument in C call syntax has the highest address)

   xorl %ebp, %ebp
   movl 0(%esp), %edi # save argc
   lea 4(%esp), %esi  # save argv (pointer to the array on the stack)

   pushl %esi
   pushl %edi
   call _stdlib2_start
