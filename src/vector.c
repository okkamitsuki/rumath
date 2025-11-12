#include <rumath/vector.h>


rum_vector2 rum_vector2_create(float x, float y) {
    const rum_vector2 result = {x, y};
    return result;
}

rum_vector2 rum_vector2_zero(void) {
    const rum_vector2 result = {0.0f, 0.0f};
    return result;
}

rum_vector2 rum_vector2_one(void) {
    const rum_vector2 result = {1.0f, 1.0f};
    return result;
}

rum_vector2 rum_vector2_add(const rum_vector2* a, const rum_vector2* b) {
    rum_vector2 result;
    result.x = a->x + b->x;
    result.y = a->y + b->y;
    return result;
}

rum_vector2 rum_vector2_subtract(const rum_vector2* a, const rum_vector2* b) {
    rum_vector2 result;
    result.x = a->x - b->x;
    result.y = a->y - b->y;
    return result;
}

rum_vector2 rum_vector2_multiply(const rum_vector2* a, const rum_vector2* b) {
    rum_vector2 result;
    result.x = a->x * b->x;
    result.y = a->y * b->y;
    return result;
}

rum_vector2 rum_vector2_divide(const rum_vector2* a, const rum_vector2* b) {
    rum_vector2 result;
    result.x = a->x / b->x;
    result.y = a->y / b->y;
    return result;
}

rum_vector2 rum_vector2_scale(const rum_vector2* a, float scalar) {
    rum_vector2 result;
    result.x = a->x * scalar;
    result.y = a->y * scalar;
    return result;
}


rum_vector3 rum_vector3_create(float x, float y, float z) {
    const rum_vector3 result = {x, y, z};
    return result;
}

rum_vector3 rum_vector3_zero(void) {
    const rum_vector3 result = {0.0f, 0.0f, 0.0f};
    return result;
}

rum_vector3 rum_vector3_one(void) {
    const rum_vector3 result = {1.0f, 1.0f, 1.0f};
    return result;
}

rum_vector3 rum_vector3_add(const rum_vector3* a, const rum_vector3* b) {
    rum_vector3 result;
    result.x = a->x + b->x;
    result.y = a->y + b->y;
    result.z = a->z + b->z;
    return result;
}

rum_vector3 rum_vector3_subtract(const rum_vector3* a, const rum_vector3* b) {
    rum_vector3 result;
    result.x = a->x - b->x;
    result.y = a->y - b->y;
    result.z = a->z - b->z;
    return result;
}

rum_vector3 rum_vector3_multiply(const rum_vector3* a, const rum_vector3* b) {
    rum_vector3 result;
    result.x = a->x * b->x;
    result.y = a->y * b->y;
    result.z = a->z * b->z;
    return result;
}

rum_vector3 rum_vector3_divide(const rum_vector3* a, const rum_vector3* b) {
    rum_vector3 result;
    result.x = a->x / b->x;
    result.y = a->y / b->y;
    result.z = a->z / b->z;
    return result;
}

rum_vector3 rum_vector3_scale(const rum_vector3* a, float scalar) {
    rum_vector3 result;
    result.x = a->x * scalar;
    result.y = a->y * scalar;
    result.z = a->z * scalar;
    return result;
}


rum_vector4 rum_vector4_create(float x, float y, float z, float w) {
    const rum_vector4 result = {x, y, z, w};
    return result;
}

rum_vector4 rum_vector4_zero(void) {
    const rum_vector4 result = {0.0f, 0.0f, 0.0f, 0.0f};
    return result;
}

rum_vector4 rum_vector4_one(void) {
    const rum_vector4 result = {1.0f, 1.0f, 1.0f, 1.0f};
    return result;
}

rum_vector4 rum_vector4_add(const rum_vector4* a, const rum_vector4* b) {
    rum_vector4 result;
    result.x = a->x + b->x;
    result.y = a->y + b->y;
    result.z = a->z + b->z;
    result.w = a->w + b->w;
    return result;
}

rum_vector4 rum_vector4_subtract(const rum_vector4* a, const rum_vector4* b) {
    rum_vector4 result;
    result.x = a->x - b->x;
    result.y = a->y - b->y;
    result.z = a->z - b->z;
    result.w = a->w - b->w;
    return result;
}

rum_vector4 rum_vector4_multiply(const rum_vector4* a, const rum_vector4* b) {
    rum_vector4 result;
    result.x = a->x * b->x;
    result.y = a->y * b->y;
    result.z = a->z * b->z;
    result.w = a->w * b->w;
    return result;
}

rum_vector4 rum_vector4_divide(const rum_vector4* a, const rum_vector4* b) {
    rum_vector4 result;
    result.x = a->x / b->x;
    result.y = a->y / b->y;
    result.z = a->z / b->z;
    result.w = a->w / b->w;
    return result;
}

rum_vector4 rum_vector4_scale(const rum_vector4* a, float scalar) {
    rum_vector4 result;
    result.x = a->x * scalar;
    result.y = a->y * scalar;
    result.z = a->z * scalar;
    result.w = a->w * scalar;
    return result;
}