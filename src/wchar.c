#include "wchar.h"

#ifdef _MSC_VER
#define restrict __restrict
#endif

int wcscmp(const wchar_t *lhs, const wchar_t *rhs) {
    for (size_t i = 0; lhs[i] != NULL || rhs[i] != NULL; ++i) {
        const int res = lhs[i] - rhs[i];
        if (res != 0) {
            return res;
        }
    }

    return 0;
}

wchar_t *wcscpy(wchar_t *restrict dest, const wchar_t *restrict src) {
    wchar_t *start = dest;

    for (; *src != L'\0'; ++src, ++dest) {
        *dest = *src;
    }

    *dest = L'\0';

    return start;
}

size_t wcslen(const wchar_t *str) {
    size_t len = 0;
    while (str[len] != L'\0') {
        ++len;
    }

    return len;
}

#ifdef _MSC_VER
#undef restrict
#endif
