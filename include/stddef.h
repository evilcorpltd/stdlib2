#ifndef _STDDEF_H_
#define _STDDEF_H_

#undef NULL
#define NULL 0

#ifdef _MSC_VER

// UB, but works in MSVC.
#undef offsetof
#define offsetof(type, member) ((size_t)&(((type *)0)->member))

typedef unsigned short wchar_t;

#ifdef _WIN64
typedef unsigned long long size_t;
typedef long long ptrdiff_t;
#else
typedef unsigned int size_t;
typedef int ptrdiff_t;
#endif

#else

#undef offsetof
#define offsetof(type, member) __builtin_offsetof(type, member)

typedef __PTRDIFF_TYPE__ ptrdiff_t;
typedef __WCHAR_TYPE__ wchar_t;
typedef __SIZE_TYPE__ size_t;

#endif

#endif
