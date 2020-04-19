#include "wchar.h"

#include "test.h"

int main2() {
    ASSERT_INT_EQ(wcslen(L"hellö wörld"), 11);
    ASSERT_INT_EQ(wcslen(L"ämä\0zing"), 3);
    return 0;
}
