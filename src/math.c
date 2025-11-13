#include <rumath/math.h>

float rum_sqrt(float x) {
    if (x <= 0.0f) return 0.0f;

    float guess = x * 0.5f;
    guess = 0.5f * (guess + x / guess);
    guess = 0.5f * (guess + x / guess);
    guess = 0.5f * (guess + x / guess);
    guess = 0.5f * (guess + x / guess);

    return guess;
}


float rum_abs(float x) {
    return (x < 0) ? -x : x;
}

float rum_mod(float x, float y) {
    return x - (int)(x / y) * y;
}

float rum_sin(float x) {
    x = rum_mod(x, 2.0f * RUM_PI);
    if (x > RUM_PI) x -= 2.0f * RUM_PI;
    if (x < -RUM_PI) x += 2.0f * RUM_PI;

    float x2 = x * x;
    float x3 = x * x2;
    float x5 = x3 * x2;
    float x7 = x5 * x2;
    float x9 = x7 * x2;

    return x - x3/6.0f + x5/120.0f - x7/5040.0f + x9/362880.0f;
}

float rum_cos(float x) {
    x = rum_mod(x, 2.0f * RUM_PI);
    if (x > RUM_PI) x -= 2.0f * RUM_PI;
    if (x < -RUM_PI) x += 2.0f * RUM_PI;

    float x2 = x * x;
    float x4 = x2 * x2;
    float x6 = x4 * x2;
    float x8 = x6 * x2;

    return 1.0f - x2/2.0f + x4/24.0f - x6/720.0f + x8/40320.0f;
}

float rum_tan(float x) {
    float cos_val = rum_cos(x);
    if (rum_abs(cos_val) < 1e-6f) {
        return (x > 0) ? 1e6f : -1e6f;
    }
    return rum_sin(x) / cos_val;
}

float rum_radians(float degrees) {
    return degrees * RUM_PI / 180.0f;
}

float rum_degrees(float radians) {
    return radians * 180.0f / RUM_PI;
}

float rum_clamp(float x, float min, float max) {
    return (x < min) ? min : (x > max) ? max : x;
}