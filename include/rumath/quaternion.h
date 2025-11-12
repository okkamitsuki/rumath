#ifndef RUMATH_QUATERNION_H
#define RUMATH_QUATERNION_H

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct rum_quaternion{
    float x;
    float y;
    float z;
    float w;
} rum_quaternion;

rum_quaternion rum_quaternion_add(rum_quaternion* a, rum_quaternion* b);
rum_quaternion rum_quaternion_sub(rum_quaternion* a, rum_quaternion* b);
rum_quaternion rum_quaternion_mul(rum_quaternion* a, rum_quaternion* b);
rum_quaternion rum_quaternion_div(rum_quaternion* a, rum_quaternion* b);

#ifdef  __cplusplus
}
#endif

#endif //RUMATH_QUATERNION_H