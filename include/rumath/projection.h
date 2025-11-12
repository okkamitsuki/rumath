#ifndef RUMATH_PROJECTION_H
#define RUMATH_PROJECTION_H
#include <rumath/matrix.h>

rum_matrix4x4 rum_perspective_opengl(float fov_degrees, float aspect_ratio, float near_plane, float far_plane);
rum_matrix4x4 rum_perspective_vulkan(float fov_degrees, float aspect_ratio, float near_plane, float far_plane);

#endif //RUMATH_PROJECTION_H