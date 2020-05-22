#include "stdio.h"

#include "stddef.h"

#include "file.h"

static FILE _Stdin = {
    .fd = 0,
    .handle = NULL,
};

static FILE _Stdout = {
    .fd = 1,
    .handle = NULL,
};

static FILE _Stderr = {
    .fd = 2,
    .handle = NULL,
};

FILE *__stdin(void) {
    return &_Stdin;
}

FILE *__stdout(void) {
    return &_Stdout;
}

FILE *__stderr(void) {
    return &_Stderr;
}
