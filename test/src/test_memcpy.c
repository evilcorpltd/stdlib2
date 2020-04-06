#include "string.h"

int main2() {
    const char a[] = "hello world";
    char b[20];

    char *ret = memcpy(b, a, sizeof(a));

    if (ret != b) {
        return 1;
    }

    if (strlen(a) != strlen(b)) {
        return 1;
    }

    if (memcmp(a, b, sizeof(a)) != 0) {
        return 1;
    }

    return 0;
}
