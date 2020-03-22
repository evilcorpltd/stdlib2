#include <windows.h>

void _Exit(int exit_code) {
    ExitProcess(exit_code);
}
