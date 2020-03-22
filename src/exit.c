#include "stdlib.h"

#include "platform/syscall.h"

void exit(int exit_code) {
    _Exit(exit_code);
    while (1) {}
}
