#include "string.h"

#include "test.h"

int main2() {
    ASSERT_INT_EQ(strlen("hello world"), 11);
    ASSERT_INT_EQ(strlen("ama\0zing"), 3);
    return 0;
}
