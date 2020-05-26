#include "string.h"

#include "test.h"

int main2() {
    const char a[] = "hello world";
    char b[20];

    ASSERT_PTR_EQ(memcpy(b, a, sizeof(a)), b);
    ASSERT_INT_EQ(strlen(a), strlen(b));
    ASSERT_INT_EQ(memcmp(a, b, sizeof(a)), 0);
    return 0;
}
