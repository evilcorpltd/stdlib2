#include "time.h"

#include "test.h"

int main2() {
    ASSERT_INT_EQ(sizeof(time_t), 8);
    return 0;
}