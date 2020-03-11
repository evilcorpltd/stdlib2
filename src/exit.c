#include "stdlib.h"

void exit(int exit_code) {
#if _WIN64 || __CYGWIN__
    volatile register int rdi asm("%rcx") = exit_code;
    asm("call ExitProcess");
#else
    asm("movq $60, %rax");
    volatile register int rdi asm("%rdi") = exit_code;
    asm("syscall");
#endif
}
