#include "stddef.h"

struct S {
    char c;
    double d;
};

int main2() {
    if (offsetof(struct S, c) != 0) {
        return 1;
    }

    if (offsetof(struct S, d) != 8) {
        return 1;
    }

    return 0;
}
