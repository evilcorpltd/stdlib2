#include "stddef.h"

#include "test.h"

struct S {
    char c;
    float d;
};

int main2() {
    ASSERT_INT_EQ(offsetof(struct S, c), 0);
    ASSERT_INT_EQ(offsetof(struct S, d), 4);
    return 0;
}
