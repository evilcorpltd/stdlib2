#include "string.h"

#include "test.h"

int main2() {
    char a[] = "hello world";

    ASSERT_PTR_EQ(memset(a, '5', 4), a);

    const char a_expected[] = "5555o world";
    ASSERT_INT_EQ(memcmp(a, a_expected, sizeof(a)), 0);

    memset(a, 'A', strlen(a));
    const char a2_expected[] = "AAAAAAAAAAA";
    ASSERT_INT_EQ(memcmp(a, a2_expected, sizeof(a)), 0);

    return 0;
}
