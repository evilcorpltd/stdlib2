#ifndef _WCHAR_H_
#define _WCHAR_H_

// TODO(robinlinden): Don't include everything from stddef.h. [CX]
#include "stddef.h"

#ifdef _MSC_VER
#define restrict __restrict
#endif

int wcscmp(const wchar_t *lhs, const wchar_t *rhs);
wchar_t *wcscpy(wchar_t *restrict dest, const wchar_t *restrict src);
size_t wcslen(const wchar_t *str);

#ifdef _MSC_VER
#undef restrict
#endif

#endif
