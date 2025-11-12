#include <rumath/matrix.h>


// Constructor identity rum_matrix2x2
// {1,0}
// {0,1}
rum_matrix2x2 rum_matrix2x2_identity(void) {
    const rum_matrix2x2 result = {{
        {1.0f, 0.0f},
        {0.0f, 1.0f}
    }};
    return result;
}

// Constructor zero rum_matrix2x2
// {0,0}
// {0,0}
rum_matrix2x2 rum_matrix2x2_zero(void) {
    const rum_matrix2x2 result = {0.0f};
    return result;
}

// rum_matrix2x2 + rum_matrix2x2
// {a00 + b00, a01 + b01}
// {a10 + b10, a11 + b11}
rum_matrix2x2 rum_matrix2x2_add(const rum_matrix2x2* a, const rum_matrix2x2* b) {
    rum_matrix2x2 result;
    result.data[0][0] = a->data[0][0] + b->data[0][0];
    result.data[0][1] = a->data[0][1] + b->data[0][1];

    result.data[1][0] = a->data[1][0] + b->data[1][0];
    result.data[1][1] = a->data[1][1] + b->data[1][1];
    return result;
}

// rum_matrix2x2 - rum_matrix2x2
// {a00 - b00, a01 - b01}
// {a10 - b10, a11 - b11}
rum_matrix2x2 rum_matrix2x2_subtract(const rum_matrix2x2* a, const rum_matrix2x2* b) {
    rum_matrix2x2 result;
    result.data[0][0] = a->data[0][0] - b->data[0][0];
    result.data[0][1] = a->data[0][1] - b->data[0][1];

    result.data[1][0] = a->data[1][0] - b->data[1][0];
    result.data[1][1] = a->data[1][1] - b->data[1][1];
    return result;
}

// rum_matrix2x2 * rum_matrix2x2
// {a00*b00 + a01*b10, a00*b01 + a01*b11}
// {a10*b00 + a11*b10, a10*b01 + a11*b11}
rum_matrix2x2 rum_matrix2x2_multiply(const rum_matrix2x2* a, const rum_matrix2x2* b) {
    rum_matrix2x2 result;
    result.data[0][0] = a->data[0][0]*b->data[0][0] + a->data[0][1]*b->data[1][0];
    result.data[0][1] = a->data[0][0]*b->data[0][1] + a->data[0][1]*b->data[1][1];

    result.data[1][0] = a->data[1][0]*b->data[0][0] + a->data[1][1]*b->data[1][0];
    result.data[1][1] = a->data[1][0]*b->data[0][1] + a->data[1][1]*b->data[1][1];
    return result;
}

// rum_matrix2x2 * scalar
// {a00 * s, a01 * s}
// {a10 * s, a11 * s}
rum_matrix2x2 rum_matrix2x2_scale(const rum_matrix2x2* a, float scalar) {
    rum_matrix2x2 result;
    result.data[0][0] = a->data[0][0] * scalar;
    result.data[0][1] = a->data[0][1] * scalar;

    result.data[1][0] = a->data[1][0] * scalar;
    result.data[1][1] = a->data[1][1] * scalar;
    return result;
}

// Constructor identity rum_matrix3x3
// {1,0,0}
// {0,1,0}
// {0,0,1}
rum_matrix3x3 rum_matrix3x3_identity(void) {
    const rum_matrix3x3 result = {{
        {1.0f, 0.0f, 0.0f},
        {0.0f, 1.0f, 0.0f},
        {0.0f, 0.0f, 1.0f}
    }};
    return result;
}

// Constructor zero rum_matrix3x3
// {0,0,0}
// {0,0,0}
// {0,0,0}
rum_matrix3x3 rum_matrix3x3_zero(void) {
    const rum_matrix3x3 result = {0.0f};
    return result;
}

// rum_matrix3x3 + rum_matrix3x3
// {a00 + b00, a01 + b01, a02 + b02}
// {a10 + b10, a11 + b11, a12 + b12}
// {a20 + b20, a21 + b21, a22 + b22}
rum_matrix3x3 rum_matrix3x3_add(const rum_matrix3x3* a, const rum_matrix3x3* b) {
    rum_matrix3x3 result;
    result.data[0][0] = a->data[0][0] + b->data[0][0];
    result.data[0][1] = a->data[0][1] + b->data[0][1];
    result.data[0][2] = a->data[0][2] + b->data[0][2];

    result.data[1][0] = a->data[1][0] + b->data[1][0];
    result.data[1][1] = a->data[1][1] + b->data[1][1];
    result.data[1][2] = a->data[1][2] + b->data[1][2];

    result.data[2][0] = a->data[2][0] + b->data[2][0];
    result.data[2][1] = a->data[2][1] + b->data[2][1];
    result.data[2][2] = a->data[2][2] + b->data[2][2];
    return result;
}

// rum_matrix3x3 - rum_matrix3x3
// {a00 - b00, a01 - b01, a02 - b02}
// {a10 - b10, a11 - b11, a12 - b12}
// {a20 - b20, a21 - b21, a22 - b22}
rum_matrix3x3 rum_matrix3x3_subtract(const rum_matrix3x3* a, const rum_matrix3x3* b) {
    rum_matrix3x3 result;
    result.data[0][0] = a->data[0][0] - b->data[0][0];
    result.data[0][1] = a->data[0][1] - b->data[0][1];
    result.data[0][2] = a->data[0][2] - b->data[0][2];

    result.data[1][0] = a->data[1][0] - b->data[1][0];
    result.data[1][1] = a->data[1][1] - b->data[1][1];
    result.data[1][2] = a->data[1][2] - b->data[1][2];

    result.data[2][0] = a->data[2][0] - b->data[2][0];
    result.data[2][1] = a->data[2][1] - b->data[2][1];
    result.data[2][2] = a->data[2][2] - b->data[2][2];
    return result;
}

// rum_matrix3x3 * rum_matrix3x3
// {
//   a00*b00 + a01*b10 + a02*b20,
//   a00*b01 + a01*b11 + a02*b21,
//   a00*b02 + a01*b12 + a02*b22
// }
// {
//   a10*b00 + a11*b10 + a12*b20,
//   a10*b01 + a11*b11 + a12*b21,
//   a10*b02 + a11*b12 + a12*b22
// }
// {
//   a20*b00 + a21*b10 + a22*b20,
//   a20*b01 + a21*b11 + a22*b21,
//   a20*b02 + a21*b12 + a22*b22
// }
rum_matrix3x3 rum_matrix3x3_multiply(const rum_matrix3x3* a, const rum_matrix3x3* b) {
    rum_matrix3x3 result;
    // Row 0
    result.data[0][0] = a->data[0][0]*b->data[0][0] + a->data[0][1]*b->data[1][0] + a->data[0][2]*b->data[2][0];
    result.data[0][1] = a->data[0][0]*b->data[0][1] + a->data[0][1]*b->data[1][1] + a->data[0][2]*b->data[2][1];
    result.data[0][2] = a->data[0][0]*b->data[0][2] + a->data[0][1]*b->data[1][2] + a->data[0][2]*b->data[2][2];

    // Row 1
    result.data[1][0] = a->data[1][0]*b->data[0][0] + a->data[1][1]*b->data[1][0] + a->data[1][2]*b->data[2][0];
    result.data[1][1] = a->data[1][0]*b->data[0][1] + a->data[1][1]*b->data[1][1] + a->data[1][2]*b->data[2][1];
    result.data[1][2] = a->data[1][0]*b->data[0][2] + a->data[1][1]*b->data[1][2] + a->data[1][2]*b->data[2][2];

    // Row 2
    result.data[2][0] = a->data[2][0]*b->data[0][0] + a->data[2][1]*b->data[1][0] + a->data[2][2]*b->data[2][0];
    result.data[2][1] = a->data[2][0]*b->data[0][1] + a->data[2][1]*b->data[1][1] + a->data[2][2]*b->data[2][1];
    result.data[2][2] = a->data[2][0]*b->data[0][2] + a->data[2][1]*b->data[1][2] + a->data[2][2]*b->data[2][2];

    return result;
}

// rum_matrix3x3 * scalar
// {a00 * s, a01 * s, a02 * s}
// {a10 * s, a11 * s, a12 * s}
// {a20 * s, a21 * s, a22 * s}
rum_matrix3x3 rum_matrix3x3_scale(const rum_matrix3x3* a, float scalar) {
    rum_matrix3x3 result;
    result.data[0][0] = a->data[0][0] * scalar;
    result.data[0][1] = a->data[0][1] * scalar;
    result.data[0][2] = a->data[0][2] * scalar;

    result.data[1][0] = a->data[1][0] * scalar;
    result.data[1][1] = a->data[1][1] * scalar;
    result.data[1][2] = a->data[1][2] * scalar;

    result.data[2][0] = a->data[2][0] * scalar;
    result.data[2][1] = a->data[2][1] * scalar;
    result.data[2][2] = a->data[2][2] * scalar;
    return result;
}

// Constructor identity rum_matrix4x4
// {1,0,0,0}
// {0,1,0,0}
// {0,0,1,0}
// {0,0,0,1}
rum_matrix4x4 rum_matrix4x4_identity(void) {
    const rum_matrix4x4 result = {{
        {1.0f, 0.0f, 0.0f, 0.0f},
        {0.0f, 1.0f, 0.0f, 0.0f},
        {0.0f, 0.0f, 1.0f, 0.0f},
        {0.0f, 0.0f, 0.0f, 1.0f}
    }};
    return result;
}

// Constructor zero rum_matrix4x4
// {0,0,0,0}
// {0,0,0,0}
// {0,0,0,0}
// {0,0,0,0}
rum_matrix4x4 rum_matrix4x4_zero(void) {
    const rum_matrix4x4 result = {0.0f};
    return result;
}

// rum_matrix4x4 + rum_matrix4x4
// {a00 + b00, a01 + b01, a02 + b02, a03 + b03}
// {a10 + b10, a11 + b11, a12 + b12, a13 + b13}
// {a20 + b20, a21 + b21, a22 + b22, a23 + b23}
// {a30 + b30, a31 + b31, a32 + b32, a33 + b33}
rum_matrix4x4 rum_matrix4x4_add(const rum_matrix4x4* a, const rum_matrix4x4* b) {
    rum_matrix4x4 result;
    result.data[0][0] = a->data[0][0] + b->data[0][0];
    result.data[0][1] = a->data[0][1] + b->data[0][1];
    result.data[0][2] = a->data[0][2] + b->data[0][2];
    result.data[0][3] = a->data[0][3] + b->data[0][3];

    result.data[1][0] = a->data[1][0] + b->data[1][0];
    result.data[1][1] = a->data[1][1] + b->data[1][1];
    result.data[1][2] = a->data[1][2] + b->data[1][2];
    result.data[1][3] = a->data[1][3] + b->data[1][3];

    result.data[2][0] = a->data[2][0] + b->data[2][0];
    result.data[2][1] = a->data[2][1] + b->data[2][1];
    result.data[2][2] = a->data[2][2] + b->data[2][2];
    result.data[2][3] = a->data[2][3] + b->data[2][3];

    result.data[3][0] = a->data[3][0] + b->data[3][0];
    result.data[3][1] = a->data[3][1] + b->data[3][1];
    result.data[3][2] = a->data[3][2] + b->data[3][2];
    result.data[3][3] = a->data[3][3] + b->data[3][3];

    return result;
}

// rum_matrix4x4 - rum_matrix4x4
// {a00 - b00, a01 - b01, a02 - b02, a03 - b03}
// {a10 - b10, a11 - b11, a12 - b12, a13 - b13}
// {a20 - b20, a21 - b21, a22 - b22, a23 - b23}
// {a30 - b30, a31 - b31, a32 - b32, a33 - b33}
rum_matrix4x4 rum_matrix4x4_subtract(const rum_matrix4x4* a, const rum_matrix4x4* b) {
    rum_matrix4x4 result;
    result.data[0][0] = a->data[0][0] - b->data[0][0];
    result.data[0][1] = a->data[0][1] - b->data[0][1];
    result.data[0][2] = a->data[0][2] - b->data[0][2];
    result.data[0][3] = a->data[0][3] - b->data[0][3];

    result.data[1][0] = a->data[1][0] - b->data[1][0];
    result.data[1][1] = a->data[1][1] - b->data[1][1];
    result.data[1][2] = a->data[1][2] - b->data[1][2];
    result.data[1][3] = a->data[1][3] - b->data[1][3];

    result.data[2][0] = a->data[2][0] - b->data[2][0];
    result.data[2][1] = a->data[2][1] - b->data[2][1];
    result.data[2][2] = a->data[2][2] - b->data[2][2];
    result.data[2][3] = a->data[2][3] - b->data[2][3];

    result.data[3][0] = a->data[3][0] - b->data[3][0];
    result.data[3][1] = a->data[3][1] - b->data[3][1];
    result.data[3][2] = a->data[3][2] - b->data[3][2];
    result.data[3][3] = a->data[3][3] - b->data[3][3];

    return result;
}

// rum_matrix4x4 * rum_matrix4x4
// {
//   a00*b00 + a01*b10 + a02*b20 + a03*b30,
//   a00*b01 + a01*b11 + a02*b21 + a03*b31,
//   a00*b02 + a01*b12 + a02*b22 + a03*b32,
//   a00*b03 + a01*b13 + a02*b23 + a03*b33
// }
// {
//   a10*b00 + a11*b10 + a12*b20 + a13*b30,
//   a10*b01 + a11*b11 + a12*b21 + a13*b31,
//   a10*b02 + a11*b12 + a12*b22 + a13*b32,
//   a10*b03 + a11*b13 + a12*b23 + a13*b33
// }
// {
//   a20*b00 + a21*b10 + a22*b20 + a23*b30,
//   a20*b01 + a21*b11 + a22*b21 + a23*b31,
//   a20*b02 + a21*b12 + a22*b22 + a23*b32,
//   a20*b03 + a21*b13 + a22*b23 + a23*b33
// }
// {
//   a30*b00 + a31*b10 + a32*b20 + a33*b30,
//   a30*b01 + a31*b11 + a32*b21 + a33*b31,
//   a30*b02 + a31*b12 + a32*b22 + a33*b32,
//   a30*b03 + a31*b13 + a32*b23 + a33*b33
// }
rum_matrix4x4 rum_matrix4x4_multiply(const rum_matrix4x4* a, const rum_matrix4x4* b) {
    rum_matrix4x4 result;

    // Row 0
    result.data[0][0] = a->data[0][0]*b->data[0][0] + a->data[0][1]*b->data[1][0] + a->data[0][2]*b->data[2][0] + a->data[0][3]*b->data[3][0];
    result.data[0][1] = a->data[0][0]*b->data[0][1] + a->data[0][1]*b->data[1][1] + a->data[0][2]*b->data[2][1] + a->data[0][3]*b->data[3][1];
    result.data[0][2] = a->data[0][0]*b->data[0][2] + a->data[0][1]*b->data[1][2] + a->data[0][2]*b->data[2][2] + a->data[0][3]*b->data[3][2];
    result.data[0][3] = a->data[0][0]*b->data[0][3] + a->data[0][1]*b->data[1][3] + a->data[0][2]*b->data[2][3] + a->data[0][3]*b->data[3][3];

    // Row 1
    result.data[1][0] = a->data[1][0]*b->data[0][0] + a->data[1][1]*b->data[1][0] + a->data[1][2]*b->data[2][0] + a->data[1][3]*b->data[3][0];
    result.data[1][1] = a->data[1][0]*b->data[0][1] + a->data[1][1]*b->data[1][1] + a->data[1][2]*b->data[2][1] + a->data[1][3]*b->data[3][1];
    result.data[1][2] = a->data[1][0]*b->data[0][2] + a->data[1][1]*b->data[1][2] + a->data[1][2]*b->data[2][2] + a->data[1][3]*b->data[3][2];
    result.data[1][3] = a->data[1][0]*b->data[0][3] + a->data[1][1]*b->data[1][3] + a->data[1][2]*b->data[2][3] + a->data[1][3]*b->data[3][3];

    // Row 2
    result.data[2][0] = a->data[2][0]*b->data[0][0] + a->data[2][1]*b->data[1][0] + a->data[2][2]*b->data[2][0] + a->data[2][3]*b->data[3][0];
    result.data[2][1] = a->data[2][0]*b->data[0][1] + a->data[2][1]*b->data[1][1] + a->data[2][2]*b->data[2][1] + a->data[2][3]*b->data[3][1];
    result.data[2][2] = a->data[2][0]*b->data[0][2] + a->data[2][1]*b->data[1][2] + a->data[2][2]*b->data[2][2] + a->data[2][3]*b->data[3][2];
    result.data[2][3] = a->data[2][0]*b->data[0][3] + a->data[2][1]*b->data[1][3] + a->data[2][2]*b->data[2][3] + a->data[2][3]*b->data[3][3];

    // Row 3
    result.data[3][0] = a->data[3][0]*b->data[0][0] + a->data[3][1]*b->data[1][0] + a->data[3][2]*b->data[2][0] + a->data[3][3]*b->data[3][0];
    result.data[3][1] = a->data[3][0]*b->data[0][1] + a->data[3][1]*b->data[1][1] + a->data[3][2]*b->data[2][1] + a->data[3][3]*b->data[3][1];
    result.data[3][2] = a->data[3][0]*b->data[0][2] + a->data[3][1]*b->data[1][2] + a->data[3][2]*b->data[2][2] + a->data[3][3]*b->data[3][2];
    result.data[3][3] = a->data[3][0]*b->data[0][3] + a->data[3][1]*b->data[1][3] + a->data[3][2]*b->data[2][3] + a->data[3][3]*b->data[3][3];

    return result;
}

// rum_matrix4x4 * scalar
// {a00 * s, a01 * s, a02 * s, a03 * s}
// {a10 * s, a11 * s, a12 * s, a13 * s}
// {a20 * s, a21 * s, a22 * s, a23 * s}
// {a30 * s, a31 * s, a32 * s, a33 * s}
rum_matrix4x4 rum_matrix4x4_scale(const rum_matrix4x4* a, float scalar) {
    rum_matrix4x4 result;
    result.data[0][0] = a->data[0][0] * scalar;
    result.data[0][1] = a->data[0][1] * scalar;
    result.data[0][2] = a->data[0][2] * scalar;
    result.data[0][3] = a->data[0][3] * scalar;

    result.data[1][0] = a->data[1][0] * scalar;
    result.data[1][1] = a->data[1][1] * scalar;
    result.data[1][2] = a->data[1][2] * scalar;
    result.data[1][3] = a->data[1][3] * scalar;

    result.data[2][0] = a->data[2][0] * scalar;
    result.data[2][1] = a->data[2][1] * scalar;
    result.data[2][2] = a->data[2][2] * scalar;
    result.data[2][3] = a->data[2][3] * scalar;

    result.data[3][0] = a->data[3][0] * scalar;
    result.data[3][1] = a->data[3][1] * scalar;
    result.data[3][2] = a->data[3][2] * scalar;
    result.data[3][3] = a->data[3][3] * scalar;

    return result;
}

