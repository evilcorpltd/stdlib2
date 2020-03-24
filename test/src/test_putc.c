#include "stdio.h"

int main2() {
    for (char c = 'a'; c < 'z'; ++c) {
        if (putc(c, stdout) != c) {
            return 1;
        }
    }

    return 0;
}
