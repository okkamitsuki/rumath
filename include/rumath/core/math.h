#ifndef RUMATH_MATH_H
#define RUMATH_MATH_H

#ifdef  __cplusplus
extern "C" {
#endif

// Constants
#define RUM_PI 3.14159265358979323846f
#define RUM_PI_2 1.57079632679489661923f

    float rum_sqrt(float x);
    float rum_mod(float x, float y);
    float rum_abs(float x);

    float rum_sin(float x);
    float rum_cos(float x);
    float rum_tan(float x);

    float rum_radians(float degrees);
    float rum_degrees(float radians);

    float rum_clamp(float x, float min, float max);

#ifdef  __cplusplus
}
#endif

#endif //RUMATH_MATH_H