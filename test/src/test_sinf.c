#define _USE_MATH_DEFINES
#include "constants.h"
#include "math.h"
#include "test.h"

int main2() {
    const double small_number = 0.00001;
    for (int i = 0; i < 10; ++i) {
        double a = (double)i / 10 * M_PI * 2;
        ASSERT_FLOAT_NEAR((float)sin(a), sinf(a), small_number);
    }
    return 0;
}
