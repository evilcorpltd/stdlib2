#include "stdbool.h"
#include "stddef.h"
#include "stdlib.h"

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

    return 0;
}
