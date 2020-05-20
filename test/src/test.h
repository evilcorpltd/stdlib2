#ifndef TEST_H_
#define TEST_H_

#include "stdbool.h"
#include "stdio.h"
#include "string.h"

#define TEST_SUITE(name) puts(""); puts(name); int test_suite_result = 0;

#define TEST_CASE(test_func) {\
    fputs(#test_func ": ", stdout);\
    int test_case_result = test_func();\
    test_suite_result += test_case_result;\
    if (test_case_result) puts("Failure"); else puts("Success");\
}

#define TEST_RESULT test_suite_result ? 1 : 0;

#define ASSERT_PTR_EQ(a, b) if (a != b) return 1;

#define ASSERT_STR_EQ(a, b)\
        if (a == NULL || b == NULL) {\
            if (a != b) return 1;\
        } else if (strcmp(a, b) != 0) {\
            return 1;\
        }
#endif
