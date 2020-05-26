#include "stdio.h"

#include "test.h"

int main2() {
    for (char c = 'a'; c < 'z'; ++c) {
        ASSERT_INT_EQ(putc(c, stdout), c);
    }

    return 0;
}
