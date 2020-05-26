#include "string.h"

#include "test.h"

int main2() {
    char a[] = "This, is a-string";
    const char *p = strtok(a, " ,-");
    ASSERT_INT_EQ(strcmp(p, "This"), 0);

    p = strtok(NULL, " ,-");
    ASSERT_INT_EQ(strcmp(p, "is"), 0);

    p = strtok(NULL, " ,-");
    ASSERT_INT_EQ(strcmp(p, "a"), 0);

    p = strtok(NULL, " ,-");
    ASSERT_INT_EQ(strcmp(p, "string"), 0);

    p = strtok(NULL, " ,-");
    ASSERT_PTR_EQ(p, NULL);

    char b[] = "This, is a-string";
    p = strtok(b, "-");
    ASSERT_INT_EQ(strcmp(p, "This, is a"), 0);

    return 0;
}
