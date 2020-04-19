#ifndef _STRING_H_
#define _STRING_H_

// TODO(robinlinden): Only make NULL and size_t available. [XSI]
#include "stddef.h"

void *memchr(const void *s, int c, size_t n);
int memcmp(const void *lhs, const void *rhs, size_t count);
void *memcpy(void *dst, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
char *strchr(const char *s, int c);
int strcmp(const char *lhs, const char *rhs);
size_t strcspn(const char *s1, const char *s2);
size_t strlen(const char *str);

#endif
