cmake_minimum_required(VERSION 3.10)
project(Invoicer C)

set(CMAKE_C_STANDARD 99)

find_package(OpenGL REQUIRED)

# Explicitně přidej MinGW include, ne linuxové!
include_directories(
    /usr/x86_64-w64-mingw32/include
    /usr/x86_64-w64-mingw32/include/GL
    ${CMAKE_SOURCE_DIR}
)

# Link na MinGW knihovny
link_directories(
    /usr/x86_64-w64-mingw32/lib
)

file(GLOB_RECURSE SOURCES
    "main.c"
    "nuklear_impl.c"
    "core/**/*.c"
    "interfaces/**/*.c"
)

add_compile_definitions(NK_INCLUDE_FIXED_TYPES=1)
add_executable(Invoicer ${SOURCES})

target_link_libraries(Invoicer
    glfw3
    glew32
    opengl32
    m
)
