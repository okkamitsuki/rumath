#ifndef RUMATH_PROJECTION_H
#define RUMATH_PROJECTION_H
#include <rumath/matrix.h>

#ifdef  __cplusplus
extern "C" {
#endif

    rum_matrix4x4 rum_perspective_opengl(float fov_degrees, float aspect_ratio, float near_plane, float far_plane);
    rum_matrix4x4 rum_orthographic_opengl(float left, float right,float bottom, float top, float near_plane, float far_plane);
    rum_matrix4x4 rum_perspective_vulkan(float fov_degrees, float aspect_ratio, float near_plane, float far_plane);
    rum_matrix4x4 rum_orthographic_vulkan(float left, float right, float bottom, float top, float near_plane, float far_plane);

#ifdef  __cplusplus
}
#endif

#endif //RUMATH_PROJECTION_H