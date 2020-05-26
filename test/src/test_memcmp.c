#include "string.h"

#include "test.h"

int main2() {
    const char a[] = "aaaaa";
    const char c[] = "ccccc";
    ASSERT_INT_EQ(memcmp(a, a, sizeof(a)), 0);
    ASSERT_INT_LT(memcmp(a, c, sizeof(a)), 0);
    ASSERT_INT_GT(memcmp(c, a, sizeof(a)), 0);
    return 0;
}
