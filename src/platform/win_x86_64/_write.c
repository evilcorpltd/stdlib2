#include "platform/syscall.h"

#include "stddef.h"

#include "file.h"

#include <windows.h>

int _Write(FILE *fd, const void *buf, size_t count) {
    DWORD written;

    if (!WriteFile(fd->handle, buf, count, &written, NULL)) {
        return -1;
    }

    return written;
}
