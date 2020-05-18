#include "platform/syscall.h"

FILE *__stdin(void) {
    return NULL;
}

FILE *__stdout(void) {
    return NULL;
}

FILE *__stderr(void) {
    return NULL;
}

int _Write(FILE *fd, const void *buf, size_t count) {
    (void)fd;
    (void)buf;
    (void)count;
    return -1;
}
