#include "stdio.h"

#include "string.h"

#include "platform/syscall.h"

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
