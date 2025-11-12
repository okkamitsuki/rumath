cmake_minimum_required(VERSION 4.0)
project(rumath C)

set(CMAKE_C_STANDARD 99)

set(ROOT_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(SRC_DIR ${ROOT_DIR}/src)
set(INCLUDE_DIR ${ROOT_DIR}/include)

add_library(rumath STATIC
            ${SRC_DIR}/matrix.c
            ${SRC_DIR}/vector.c
            ${SRC_DIR}/math.c
            ${SRC_DIR}/projection.c
            ${SRC_DIR}/vector_extension.c
)

target_include_directories(rumath PUBLIC ${INCLUDE_DIR})
