#include "wchar.h"

#include "string.h"

#include "test.h"

int main2() {
    const wchar_t a[] = L"hello world";
    wchar_t b[20];

    ASSERT_PTR_EQ(wcscpy(b, a), b);
    ASSERT_INT_EQ(wcslen(a), wcslen(b));
    ASSERT_INT_EQ(memcmp(a, b, sizeof(a)), 0);

    wcscpy(b, L"");
    ASSERT_WCHAR_EQ(b[0], L'\0');

    return 0;
}
