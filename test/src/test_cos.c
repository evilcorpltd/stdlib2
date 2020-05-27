#define _USE_MATH_DEFINES
#include "constants.h"
#include "math.h"
#include "test.h"

int main2() {
    const double small_number = 0.00000001;
    for (double a = 0.; a < 10; a += M_PI * 2) {
        ASSERT_FLOAT_NEAR(cos(a), 1, small_number);
        ASSERT_FLOAT_NEAR(cos(a + M_PI_2), 0, small_number);
        ASSERT_FLOAT_NEAR(cos(a - M_PI_2), 0, small_number);
        ASSERT_FLOAT_NEAR(cos(a + M_PI), -1, small_number);
    }

    return 0;
}
