#include "wchar.h"

#include "test.h"

int main2() {
    const wchar_t a[] = L"aaaaa";
    const wchar_t b[] = L"b";
    const wchar_t bb[] = L"bb";
    const wchar_t c[] = L"ccccc";
    const wchar_t aa[] = L"äääää";
    const wchar_t oe[] = L"ööööö";

    // Equal strings compare equal.
    ASSERT_INT_EQ(wcscmp(a, a), 0);
    ASSERT_INT_EQ(wcscmp(oe, oe), 0);

    // Shorter strings come before longer ones.
    ASSERT_INT_LT(wcscmp(b, bb), 0);

    // The lexographical order is correct.
    ASSERT_INT_LT(wcscmp(a, c), 0);
    ASSERT_INT_GT(wcscmp(c, a), 0);
    ASSERT_INT_GT(wcscmp(aa, a), 0);
    ASSERT_INT_GT(wcscmp(oe, a), 0);
    ASSERT_INT_LT(wcscmp(aa, oe), 0);

    return 0;
}
