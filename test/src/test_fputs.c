#include "stdio.h"

int main2() {
    if (fputs("domo arigato mr robotto", stdout) <= 0) {
        return 1;
    }

    return 0;
}
