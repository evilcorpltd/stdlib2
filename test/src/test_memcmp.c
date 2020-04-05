#include "string.h"

int main2() {
    const char a[] = "aaaaa";
    const char c[] = "ccccc";
    if (memcmp(a, a, sizeof(a)) != 0) {
        return 1;
    }

    if (memcmp(a, c, sizeof(a)) >= 0) {
        return 1;
    }

    if (memcmp(c, a, sizeof(a)) <= 0) {
        return 1;
    }

    return 0;
}
