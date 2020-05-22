#include "platform/syscall.h"

#include "file.h"

// TODO(robinlinden): ssize_t
extern long _Asm_write(int, const void *, size_t);

int _Write(FILE *fd, const void *buf, size_t count) {
    return _Asm_write(fd->fd, buf, count);
}
