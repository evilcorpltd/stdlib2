#include "stdio.h"

int main2() {
    const char a[][5] = {"aaaaa", "bbbbb", "ccccc"};
    if (fwrite(a, sizeof a[0], 3, stdout) != 3) {
        return 1;
    }

    return 0;
}
