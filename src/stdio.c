#include "stdio.h"

#include "string.h"

#include "platform/syscall.h"

#ifdef _MSC_VER
#define restrict __restrict
#endif

// TODO(robinlinden): Set error indicator on stream.
int fputc(int ch, FILE *stream) {
    unsigned char c = ch;
    int r = _Write(stream, &c, 1);
    if (r < 0) {
        return EOF;
    }

    return c;
}

int fputs(const char *str, FILE *stream) {
    int r = _Write(stream, str, strlen(str));
    if (r < 0) {
        return EOF;
    }

    return r;
}

size_t fwrite(const void *restrict buffer, size_t size, size_t count, FILE *restrict stream) {
    if (count == 0 || size == 0) {
        return 0;
    }

    const unsigned char *const b = buffer;
    for (size_t i = 0; i < count; ++i) {
        if (_Write(stream, b + i * size, size) < 0) {
            return i;
        }
    }

    return count;
}

int putc(int ch, FILE *stream) {
    return fputc(ch, stream);
}

// TODO(robinlinden): Set error indicator on stream.
int puts(const char *str) {
    int r = _Write(stdout, str, strlen(str));
    if (r < 0) {
        return EOF;
    }

    r = _Write(stdout, "\n", 1);
    if (r < 0) {
        return EOF;
    }

    return r;
}

#ifdef _MSC_VER
#undef restrict
#endif
