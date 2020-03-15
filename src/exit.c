#include "stdlib.h"

#include "platform/syscall.h"

void exit(int exit_code) {
    _exit(exit_code);
    while (1) {}
}
