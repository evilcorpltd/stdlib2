#include "platform/syscall.h"

int _Write(FILE *fd, const void *buf, size_t count) {
    (void)fd;
    (void)buf;
    (void)count;
    return -1;
}
