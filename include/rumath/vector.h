#ifndef RUMATH_VECTOR_H
#define RUMATH_VECTOR_H

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct rum_vector2 {
    float x;
    float y;
} rum_vector2;

rum_vector2 rum_vector2_create(float x, float y);
rum_vector2 rum_vector2_zero(void);
rum_vector2 rum_vector2_one(void);

rum_vector2 rum_vector2_add(const rum_vector2* a, const rum_vector2* b);
rum_vector2 rum_vector2_subtract(const rum_vector2* a, const rum_vector2* b);
rum_vector2 rum_vector2_multiply(const rum_vector2* a, const rum_vector2* b);
rum_vector2 rum_vector2_divide(const rum_vector2* a, const rum_vector2* b);
rum_vector2 rum_vector2_scale(const rum_vector2* a, float scalar);

typedef struct rum_vector3 {
    float x;
    float y;
    float z;
} rum_vector3;

rum_vector3 rum_vector3_create(float x, float y, float z);
rum_vector3 rum_vector3_zero(void);
rum_vector3 rum_vector3_one(void);

rum_vector3 rum_vector3_add(const rum_vector3* a, const rum_vector3* b);
rum_vector3 rum_vector3_subtract(const rum_vector3* a, const rum_vector3* b);
rum_vector3 rum_vector3_multiply(const rum_vector3* a, const rum_vector3* b);
rum_vector3 rum_vector3_divide(const rum_vector3* a, const rum_vector3* b);
rum_vector3 rum_vector3_scale(const rum_vector3* a, float scalar);

typedef struct rum_vector4 {
    float x;
    float y;
    float z;
    float w;
} rum_vector4;

rum_vector4 rum_vector4_create(float x, float y, float z, float w);
rum_vector4 rum_vector4_zero(void);
rum_vector4 rum_vector4_one(void);

rum_vector4 rum_vector4_add(const rum_vector4* a, const rum_vector4* b);
rum_vector4 rum_vector4_subtract(const rum_vector4* a, const rum_vector4* b);
rum_vector4 rum_vector4_multiply(const rum_vector4* a, const rum_vector4* b);
rum_vector4 rum_vector4_divide(const rum_vector4* a, const rum_vector4* b);
rum_vector4 rum_vector4_scale(const rum_vector4* a, float scalar);

#ifdef  __cplusplus
}
#endif

#endif //RUMATH_VECTOR_H