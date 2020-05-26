#include "string.h"

#include "test.h"

int main2() {
    const char a[] = "abcd1efgh2i";
    const char b[] = "123";
    const char c[] = "890";

    ASSERT_INT_EQ(strcspn(a, "123"), 4);
    ASSERT_INT_EQ(strcspn(a, "abc"), 0);
    ASSERT_INT_EQ(strcspn(a, "890"), strlen(a));

    return 0;
}
