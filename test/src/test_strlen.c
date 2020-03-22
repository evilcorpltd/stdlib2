#include "string.h"

int main2() {
    if (strlen("hello world") != 11) {
        return 1;
    }

    if (strlen("ama\0zing") != 3) {
        return 1;
    }

    return 0;
}
