#ifndef TEST_H_
#define TEST_H_

#include "stdbool.h"
#include "stdio.h"
#include "string.h"

#define TEST_SUITE(name) puts(""); puts(name); int test_suite_result = 0

#define TEST_CASE(test_func) do {\
    fputs(#test_func ": ", stdout);\
    int test_case_result = test_func();\
    test_suite_result += test_case_result;\
    if (test_case_result) puts("Failure"); else puts("Success");\
} while (false)

#define TEST_RESULT test_suite_result ? 1 : 0

// TODO(robinlinden): The assert macros should print line and args on failure.
#define ASSERT_STR_EQ(a, b)\
        do {\
            if ((a) == NULL || (b) == NULL) {\
                if ((a) != (b)) return 1;\
            } else if (strcmp((a), (b)) != 0) {\
                return 1;\
            }\
        } while (false)

// These could be the same macro right now, but once we start printing things
// they can't be. (Because MSVC doesn't support _Generic.)
#define ASSERT_INT_EQ(a, b) do { if ((a) != (b)) return 1; } while (false)
#define ASSERT_INT_GT(a, b) do { if ((a) <= (b)) return 1; } while (false)
#define ASSERT_INT_LT(a, b) do { if ((a) >= (b)) return 1; } while (false)
#define ASSERT_PTR_EQ(a, b) do { if ((a) != (b)) return 1; } while (false)

#endif
