#include "stdint.h"

#include "test.h"

int main2() {
    ASSERT_INT_EQ(sizeof(int8_t),   1);
    ASSERT_INT_EQ(sizeof(int16_t),  2);
    ASSERT_INT_EQ(sizeof(int32_t),  4);
    ASSERT_INT_EQ(sizeof(int64_t),  8);
    ASSERT_INT_EQ(sizeof(intmax_t), 8);

    ASSERT_INT_EQ(sizeof(uint8_t),   1);
    ASSERT_INT_EQ(sizeof(uint16_t),  2);
    ASSERT_INT_EQ(sizeof(uint32_t),  4);
    ASSERT_INT_EQ(sizeof(uint64_t),  8);
    ASSERT_INT_EQ(sizeof(uintmax_t), 8);

    ASSERT_INT_GE(sizeof(int_least8_t),   1);
    ASSERT_INT_GE(sizeof(int_least16_t),  2);
    ASSERT_INT_GE(sizeof(int_least32_t),  4);
    ASSERT_INT_GE(sizeof(int_least64_t),  8);

    ASSERT_INT_GE(sizeof(uint_least8_t),   1);
    ASSERT_INT_GE(sizeof(uint_least16_t),  2);
    ASSERT_INT_GE(sizeof(uint_least32_t),  4);
    ASSERT_INT_GE(sizeof(uint_least64_t),  8);
    return 0;
}
