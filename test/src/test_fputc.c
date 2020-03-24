#include "stdio.h"

int main2() {
    for (char c = 'A'; c < 'Z'; ++c) {
        if (fputc(c, stdout) != c) {
            return 1;
        }
    }

    return 0;
}
