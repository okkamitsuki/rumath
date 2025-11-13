#ifndef RUMATH_VECTOR_EXTENSION_H
#define RUMATH_VECTOR_EXTENSION_H

#include <rumath/vector.h>

#ifdef  __cplusplus
extern "C" {
#endif

    rum_vector2 rum_vector2_normalize(rum_vector2* vector);
    float rum_vector2_magnitude(rum_vector2* vector);
    float rum_vector2_dot(rum_vector2* a, rum_vector2* b);
    float rum_vector2_distance(rum_vector2* a, rum_vector2* b);
    float rum_vector2_cross(rum_vector2* a, rum_vector2* b);

#ifdef  __cplusplus
}
#endif


#endif //RUMATH_VECTOR_EXTENSION_H