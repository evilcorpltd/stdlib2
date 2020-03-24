#ifndef _PLATFORM_SYSCALL_H_
#define _PLATFORM_SYSCALL_H_

#include "stddef.h"
#include "stdio.h"

FILE *__stdin(void);
FILE *__stdout(void);
FILE *__stderr(void);

void _Exit(int exit_code);

// Returns the number of bytes written.
// Returns -1 on failure.
int _Write(FILE *fd, const void *buf, size_t count);

#endif
