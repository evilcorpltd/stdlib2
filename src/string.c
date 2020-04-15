#include "string.h"

void *memchr(const void *s, int c, size_t n) {
    const unsigned char *s_ = s;
    const unsigned char c_ = (unsigned char)c;

    for (size_t i = 0; i < n; ++i) {
        if (s_[i] == c_) {
            return (void *)(s_ + i);
        }
    }

    return NULL;
}

int memcmp(const void *lhs, const void *rhs, size_t count) {
    const unsigned char *lhs_ = lhs;
    const unsigned char *rhs_ = rhs;

    for (size_t i = 0; i < count; ++i) {
        const int res = lhs_[i] - rhs_[i];
        if (res != 0) {
            return res;
        }
    }

    return 0;
}

void *memcpy(void *s1, const void *s2, size_t n) {
    unsigned char *s1_ = s1;
    const unsigned char *s2_ = s2;
    for (size_t i = 0; i < n; ++i) {
        s1_[i] = s2_[i];
    }

    return s1;
}

void *memset(void *s, int c, size_t n) {
    unsigned char *s_ = s;
    const unsigned char c_ = (unsigned char)c;
    for (size_t i = 0; i < n; ++i) {
        s_[i] = c_;
    }
    return s;
}

char *strchr(const char *s, int c) {
    const char c_ = (char)c;
    do {
        if (*s == c_) {
            return (char *)s;
        }
    } while (*s++ != '\0');
    return NULL;
}

int strcmp(const char *lhs, const char *rhs) {
    for (; *lhs == *rhs; ++lhs, ++rhs) {
        if (*lhs == '\0') {
            return 0;
        }
    }
    const int res = *lhs - *rhs;
    return res;
}

size_t strcspn(const char *s1, const char *s2) {
    size_t res = 0;
    while (*s1 != '\0') {
        if (strchr(s2, *s1) == NULL) {
            ++s1;
            ++res;
        } else {
            return res;
        }
    }
    return res;
}

size_t strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0') {
        ++len;
    }

    return len;
}

char *strtok(char *s, const char *delim) {
    static char *last;

    if (s == NULL) {
        s = last;
    }
    int ch;
    do {
        ch = *s++;
        if (ch == '\0') {
            return NULL;
        }
    } while (strchr(delim, ch));
    --s;
    last = s + strcspn(s, delim);
    if (*last != '\0') {
        *last++ = '\0';
    }
    return s;
}
