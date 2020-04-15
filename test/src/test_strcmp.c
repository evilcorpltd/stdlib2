#include "string.h"

int main2() {
    const char a[] = "aaaaa";
    const char b[] = "aaaaa";
    const char c[] = "ccccc";
    if (strcmp(a, a) != 0) {
        return 1;
    }

    if (strcmp(a, b) != 0) {
        return 1;
    }

    if (strcmp(a, c) >= 0) {
        return 1;
    }

    if (strcmp(c, a) <= 0) {
        return 1;
    }

    if (strcmp(a, "123") <= 0) {
        return 1;
    }

    if (strcmp(a, "12347890101112") <= 0) {
        return 1;
    }

    return 0;
}
