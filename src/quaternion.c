#include <rumath/quaternion.h>

rum_quaternion rum_quaternion_create(float x, float y, float z, float w) {
    rum_quaternion result = {x,y,z,w};
    return result;
}

rum_quaternion rum_quaternion_identity(void) {
    rum_quaternion result = {0.0f, 0.0f, 0.0f, 1.0f};
    return result;
}

rum_quaternion rum_quaternion_zero(void) {
    rum_quaternion result = {0.0f, 0.0f, 0.0f, 0.0f};
    return result;
}

rum_quaternion rum_quaternion_add(rum_quaternion* a, rum_quaternion* b) {
    rum_quaternion result;
    result.x = a->x + b->x;
    result.y = a->y + b->y;
    result.z = a->z + b->z;
    result.w = a->w + b->w;
    return result;
}

rum_quaternion rum_quaternion_sub(rum_quaternion* a, rum_quaternion* b) {
    rum_quaternion result;
    result.x = a->x - b->x;
    result.y = a->y - b->y;
    result.z = a->z - b->z;
    result.w = a->w - b->w;
    return result;
}

rum_quaternion rum_quaternion_mul(rum_quaternion* a, rum_quaternion* b) {
    rum_quaternion result;

    // q1 * q2
    // Formule:
    // w = w1*w2 - x1*x2 - y1*y2 - z1*z2
    // x = w1*x2 + x1*w2 + y1*z2 - z1*y2
    // y = w1*y2 - x1*z2 + y1*w2 + z1*x2
    // z = w1*z2 + x1*y2 - y1*x2 + z1*w2

    result.w = a->w * b->w - a->x * b->x - a->y * b->y - a->z * b->z;
    result.x = a->w * b->x + a->x * b->w + a->y * b->z - a->z * b->y;
    result.y = a->w * b->y - a->x * b->z + a->y * b->w + a->z * b->x;
    result.z = a->w * b->z + a->x * b->y - a->y * b->x + a->z * b->w;

    return result;
}

rum_quaternion rum_quaternion_scale(rum_quaternion* a, float b) {
    rum_quaternion result;
    result.x = a->x * b;
    result.y = a->y * b;
    result.z = a->z * b;
    result.w = a->w * b;
    return result;
}