#include "string.h"

int main2() {
    const char a[] = "hello world";
    char b[20];

    memcpy(b, a, sizeof(a));

    if (strlen(a) != strlen(b)) {
        return 1;
    }

    if (memcmp(a, b, sizeof(a)) != 0) {
        return 1;
    }

    return 0;
}
