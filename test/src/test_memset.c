#include "string.h"

int main2() {
    char a[] = "hello world";

    char *ret = memset(a, '5', 4);

    if (ret != a) {
        return 1;
    }

    const char a_expected[] = "5555o world";
    if (memcmp(a, a_expected, sizeof(a)) != 0) {
        return 1;
    }

    memset(a, 'A', strlen(a));
    const char a2_expected[] = "AAAAAAAAAAA";
    if (memcmp(a, a2_expected, sizeof(a)) != 0) {
        return 1;
    }

    return 0;
}
