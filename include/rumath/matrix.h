#ifndef RUMATH_MATRIX4X4_H
#define RUMATH_MATRIX4X4_H

#ifdef  __cplusplus
extern "C" {
#endif

typedef struct rum_matrix2x2 {
    float data[2][2];
} rum_matrix2x2;

rum_matrix2x2 rum_matrix2x2_identity(void);
rum_matrix2x2 rum_matrix2x2_zero(void);

rum_matrix2x2 rum_matrix2x2_add(const rum_matrix2x2* a, const rum_matrix2x2* b);
rum_matrix2x2 rum_matrix2x2_sub(const rum_matrix2x2* a, const rum_matrix2x2* b);
rum_matrix2x2 rum_matrix2x2_mul(const rum_matrix2x2* a, const rum_matrix2x2* b);
rum_matrix2x2 rum_matrix2x2_scale(const rum_matrix2x2* a, float scalar);


typedef struct rum_matrix3x3 {
    float data[3][3];
} rum_matrix3x3;

rum_matrix3x3 rum_matrix3x3_identity(void);
rum_matrix3x3 rum_matrix3x3_zero(void);

rum_matrix3x3 rum_matrix3x3_add(const rum_matrix3x3* a, const rum_matrix3x3* b);
rum_matrix3x3 rum_matrix3x3_sub(const rum_matrix3x3* a, const rum_matrix3x3* b);
rum_matrix3x3 rum_matrix3x3_mul(const rum_matrix3x3* a, const rum_matrix3x3* b);
rum_matrix3x3 rum_matrix3x3_scale(const rum_matrix3x3* a, float scalar);

typedef struct rum_matrix4x4 {
    float data[4][4];
} rum_matrix4x4;

rum_matrix4x4 rum_matrix4x4_identity(void);
rum_matrix4x4 rum_matrix4x4_zero(void);

rum_matrix4x4 rum_matrix4x4_add(const rum_matrix4x4* a, const rum_matrix4x4* b);
rum_matrix4x4 rum_matrix4x4_sub(const rum_matrix4x4* a, const rum_matrix4x4* b);
rum_matrix4x4 rum_matrix4x4_mul(const rum_matrix4x4* a, const rum_matrix4x4* b);
rum_matrix4x4 rum_matrix4x4_scale(const rum_matrix4x4* a, float scalar);

#ifdef  __cplusplus
}
#endif


#endif //RUMATH_MATRIX4X4_H