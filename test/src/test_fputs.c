#include "stdio.h"

#include "test.h"

int main2() {
    ASSERT_INT_GT(fputs("domo arigato mr robotto", stdout), 0);
    return 0;
}
