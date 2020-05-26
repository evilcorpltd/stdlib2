#include "string.h"

#include "test.h"

int main2() {
    const char a[] = "abcda";
    ASSERT_PTR_EQ(memchr(a, ' ', sizeof(a)), NULL);
    ASSERT_PTR_EQ(memchr(a, 'a', sizeof(a)), a);
    ASSERT_PTR_EQ(memchr(a, 'b', sizeof(a)), a + 1);
    ASSERT_PTR_EQ(memchr(a, 'c', sizeof(a)), a + 2);
    ASSERT_PTR_EQ(memchr(a, 'd', sizeof(a)), a + 3);
    return 0;
}
