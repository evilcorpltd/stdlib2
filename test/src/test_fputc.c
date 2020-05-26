#include "stdio.h"

#include "test.h"

int main2() {
    for (char c = 'A'; c < 'Z'; ++c) {
        ASSERT_INT_EQ(fputc(c, stdout), c);
    }

    return 0;
}
