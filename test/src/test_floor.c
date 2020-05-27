#define _USE_MATH_DEFINES
#include "constants.h"
#include "math.h"
#include "test.h"

int main2() {
    const double smallNumber = .000001;
    ASSERT_FLOAT_NEAR(floor(.5), 0, smallNumber);
    ASSERT_FLOAT_NEAR(floor(-.5), -1, smallNumber);
    ASSERT_FLOAT_NEAR(floor(0 / M_PI_2), 0, smallNumber);
    return 0;
}
