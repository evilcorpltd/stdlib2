#define _USE_MATH_DEFINES
#include "math.h"

#define M_PI 3.14159265358979323846 // pi
#define M_PI_2 1.57079632679489661923 // pi / 2

#define ABS_MACRO(type, name) \
    type name(type x) {       \
        if (x >= 0) {         \
            return x;         \
        } else {              \
            return -x;        \
        }                     \
    }

ABS_MACRO(int, abs)
ABS_MACRO(double, fabs)
ABS_MACRO(float, fabsf)

#undef ABS_MACRO

double floor(double x) {
    // TODO{mls-m5}: Naive approach might not work for larger numbers and could
    // be slow
    long long num = (long long)x;
    if (x >= 0) {
        return (double)num;
    } else {
        return (double)(num - 1);
    }
}

double round(double x) {
    return floor(x + .5);
}

static double ffactorial(double x) {
    double factorial = 1;
    double d = 2;
    for (int i = 2; i <= x; ++i) {
        factorial *= d;
        ++d;
    }
    return factorial;
}

//! pow with integer exponentials
static double whole_pow(double x, int power) {
    double product = x;
    for (int i = 1; i < power; ++i) {
        product *= x;
    }
    return product;
}

double sin(double x) {
    // Fold angle to always be around 0
    x -= (M_PI * 2) * round(x / (M_PI * 2.));
    if (x > M_PI_2) {
        x = M_PI - x;
    } else if (x < -M_PI_2) {
        x = -M_PI - x;
    }

    // Tailor expansion around 0
    double ret = 0;
    double sign = 1;
    for (int i = 1; i < 20; i += 2) {
        ret += whole_pow(x, i) / ffactorial(i) * sign;
        sign *= -1;
    }
    return ret;
}

float sinf(float x) {
    // TODO{mls-m5} do float version when the double version is finalized
    return (float)sin(x);
}

double cos(double x) {
    return sin(x + M_PI_2);
}

float cosf(float x) {
    // TODO{mls-m5}: do float version when the double version is finalized
    return (float)cos(x);
}
