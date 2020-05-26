#include "string.h"

#include "test.h"

int main2() {
    const char a[] = "aaaaa";
    const char b[] = "aaaaa";
    const char c[] = "ccccc";

    ASSERT_INT_EQ(strcmp(a, a), 0);
    ASSERT_INT_EQ(strcmp(a, b), 0);
    ASSERT_INT_LT(strcmp(a, c), 0);
    ASSERT_INT_GT(strcmp(c, a), 0);
    ASSERT_INT_GT(strcmp(a, "123"), 0);
    ASSERT_INT_GT(strcmp(a, "12347890101112"), 0);
    return 0;
}
