#include "stdbool.h"
#include "stddef.h"
#include "stdlib.h"
#include "string.h"

struct S {
    char c;
    double d;
};

int main2() {
    bool a = false;
    bool b = !a;
    (void)b;

    ptrdiff_t ptrdiff = &a - &b;
    (void)ptrdiff;
    wchar_t wchar = L'?';
    (void)wchar;
    size_t size = 13;
    (void)size;

    if (offsetof(struct S, c) != 0) {
        exit(1);
    }

    if (offsetof(struct S, d) != 8) {
        exit(2);
    }

    exit(strlen("hello"));
    return 50;
}
