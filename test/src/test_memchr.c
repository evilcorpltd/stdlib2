#include "string.h"

int main2() {
    const char a[] = "abcda";
    if (memchr(a, ' ', sizeof(a)) != NULL) {
        return 1;
    }

    if (memchr(a, 'a', sizeof(a)) != a) {
        return 1;
    }

    if (memchr(a, 'b', sizeof(a)) != a + 1) {
        return 1;
    }

    if (memchr(a, 'c', sizeof(a)) != a + 2) {
        return 1;
    }

    if (memchr(a, 'd', sizeof(a)) != a + 3) {
        return 1;
    }

    return 0;
}
