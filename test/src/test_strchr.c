#include "string.h"

int main2() {
    const char a[] = "abcda";
    if (strchr(a, ' ') != NULL) {
        return 1;
    }

    if (strchr(a, 'a') != a) {
        return 1;
    }

    if (strchr(a, 'b') != a + 1) {
        return 1;
    }

    if (strchr(a, 'c') != a + 2) {
        return 1;
    }

    if (strchr(a, 'd') != a + 3) {
        return 1;
    }

    if (strchr(a, '\0') != a + 5) {
        return 1;
    }

    return 0;
}
