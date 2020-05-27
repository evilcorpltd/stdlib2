#define _USE_MATH_DEFINES
#include "constants.h"
#include "math.h"
#include "test.h"

int main2() {
    const double small_number = 0.00000001;
    for (double a = 0.; a < 10; a += M_PI * 2) {
        ASSERT_FLOAT_NEAR(sin(a + 0.), 0., small_number);
        ASSERT_FLOAT_NEAR(sin(a + M_PI / 6.), 1. / 2., small_number);
        ASSERT_FLOAT_NEAR(sin(a + M_PI / -6.), -1. / 2., small_number);
        ASSERT_FLOAT_NEAR(sin(a + M_PI / 2), 1., small_number);
        ASSERT_FLOAT_NEAR(sin(a + -M_PI / 2), -1., small_number);
        ASSERT_FLOAT_NEAR(sin(a + M_PI), 0., small_number);

        ASSERT_FLOAT_NEAR(sin(a), sin(-a), small_number);
        ASSERT_FLOAT_NEAR(sin(a), sin(a + M_PI * 2), small_number);
    }

    return 0;
}
