#include "stddef.h"
#include "stdlib.h"

#include "windows_workaround.h"

int _stdlib2_start();

enum { kMaxArgs = 64 };

// Adapted from http://stackoverflow.com/a/13281447/4612829
static int CommandLineToArgvA_simple(LPSTR command_line, char *argv[]) {
    int argc = 0;
    char *next_arg = strtok(command_line, " ");
    while (next_arg && argc < kMaxArgs - 1) {
        argv[argc++] = next_arg;
        next_arg = strtok(NULL, " ");
    }
    argv[argc] = NULL;
    return argc;
}

void _start() {
    char *argv[kMaxArgs];
    int argc = CommandLineToArgvA_simple(GetCommandLine(), argv);

    exit(_stdlib2_start(argc, argv));
}
