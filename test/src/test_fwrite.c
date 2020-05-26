#include "stdio.h"

#include "test.h"

int main2() {
    const char a[][5] = {"aaaaa", "bbbbb", "ccccc"};
    ASSERT_INT_EQ(fwrite(a, sizeof a[0], 3, stdout), 3);
    return 0;
}
