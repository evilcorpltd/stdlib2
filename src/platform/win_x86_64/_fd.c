#include "stdio.h"

#include "file.h"

#include <windows.h>

static FILE _Stdin = {
    .fd = FD_NOT_SET,
    .handle = NULL,
};

static FILE _Stdout = {
    .fd = FD_NOT_SET,
    .handle = NULL,
};

static FILE _Stderr = {
    .fd = FD_NOT_SET,
    .handle = NULL,
};

FILE *__stdin(void) {
    if (_Stdin.fd == FD_NOT_SET) {
        _Stdin.fd = STD_INPUT_HANDLE;
        _Stdin.handle = GetStdHandle(_Stdin.fd);
    }

    return &_Stdin;
}

FILE *__stdout(void) {
    if (_Stdout.fd == FD_NOT_SET) {
        _Stdout.fd = STD_OUTPUT_HANDLE;
        _Stdout.handle = GetStdHandle(_Stdout.fd);
    }

    return &_Stdout;
}

FILE *__stderr(void) {
    if (_Stderr.fd == FD_NOT_SET) {
        _Stderr.fd = STD_ERROR_HANDLE;
        _Stderr.handle = GetStdHandle(_Stderr.fd);
    }

    return &_Stderr;
}
