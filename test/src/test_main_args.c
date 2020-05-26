#include "stdbool.h"

#include "test.h"

int main2(int argc, char *argv[]) {
    ASSERT_INT_EQ(argc, 3);
    ASSERT_STR_EQ(argv[1], "hej");
    ASSERT_STR_EQ(argv[2], "san");
    return 0;
}
