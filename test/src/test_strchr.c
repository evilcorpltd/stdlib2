#include "string.h"

#include "test.h"

static const char a[] = "abcda";

int char_not_found() {
    ASSERT_PTR_EQ(strchr(a, ' '), NULL);
    return 0;
}

int char_found() {
    ASSERT_PTR_EQ(strchr(a, 'a'), a);
    ASSERT_PTR_EQ(strchr(a, 'b'), a + 1);
    ASSERT_PTR_EQ(strchr(a, 'c'), a + 2);
    ASSERT_PTR_EQ(strchr(a, 'd'), a + 3);
    ASSERT_PTR_EQ(strchr(a, '\0'), a + 5);
    return 0;
}

int main2() {
    TEST_SUITE("strchr");
    TEST_CASE(char_not_found);
    TEST_CASE(char_found);
    return TEST_RESULT;
}
