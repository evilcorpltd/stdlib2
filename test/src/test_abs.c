#include "math.h"
#include "test.h"

int main2() {
    ASSERT_INT_GT(abs(-1), 0);
    ASSERT_INT_EQ(abs(-10), 10);
    ASSERT_INT_EQ(abs(39), 39);
    return 0;
}
