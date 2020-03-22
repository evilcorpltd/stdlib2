#include <windows.h>

void _exit(int exit_code) {
    ExitProcess(exit_code);
}
