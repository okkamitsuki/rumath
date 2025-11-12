#include <rumath/projection.h>
#include <rumath/math.h>

rum_matrix4x4 rum_perspective_opengl(float fov_radians, float aspect_ratio, float near_plane, float far_plane) {
    rum_matrix4x4 result = rum_matrix4x4_zero();

    float tan_half_fov = rum_tan(fov_radians / 2.0f);
    float f = 1.0f / tan_half_fov;
    float range_inv = 1.0f / (near_plane - far_plane);

    result.data[0][0] = f / aspect_ratio;
    result.data[1][1] = f;
    result.data[2][2] = (far_plane + near_plane) * range_inv;
    result.data[2][3] = -1.0f;
    result.data[3][2] = 2.0f * far_plane * near_plane * range_inv;

    return result;
}

rum_matrix4x4 rum_orthographic(float left, float right,float bottom, float top, float near_plane, float far_plane) {
    rum_matrix4x4 result = rum_matrix4x4_identity();

    result.data[0][0] = 2.0f / (right - left);
    result.data[1][1] = 2.0f / (top - bottom);
    result.data[2][2] = -2.0f / (far_plane - near_plane);

    result.data[3][0] = -(right + left) / (right - left);
    result.data[3][1] = -(top + bottom) / (top - bottom);
    result.data[3][2] = -(far_plane + near_plane) / (far_plane - near_plane);

    return result;
}

rum_matrix4x4 rum_perspective_vulkan(float fov_radians, float aspect_ratio, float near_plane, float far_plane) {
    rum_matrix4x4 result = rum_matrix4x4_zero();

    float tan_half_fov = rum_tan(fov_radians / 2.0f);
    float f = 1.0f / tan_half_fov;
    float range_inv = 1.0f / (near_plane - far_plane);

    result.data[0][0] = f / aspect_ratio;
    result.data[1][1] = -f;
    result.data[2][2] = far_plane * range_inv;
    result.data[2][3] = -1.0f;
    result.data[3][2] = far_plane * near_plane * range_inv;

    return result;
}