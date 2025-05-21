#ifndef NUKLEAR_IMPL_H
#define NUKLEAR_IMPL_H

// Musí být před GLFW, GLEW, OpenGL!
#define NK_INCLUDE_FIXED_TYPES
#define NK_INCLUDE_STANDARD_IO
#define NK_INCLUDE_STANDARD_VARARGS
#define NK_INCLUDE_DEFAULT_ALLOCATOR
#define NK_INCLUDE_VERTEX_BUFFER_OUTPUT
#define NK_INCLUDE_FONT_BAKING
#define NK_INCLUDE_DEFAULT_FONT

// ⬇️ Přidej tyto includy
#include <GL/glew.h>     // GLEW musí být jako první!
#include <GLFW/glfw3.h>

// Poté až Nuklear
#include "nuklear.h"
#include "nuklear_glfw_gl3.h"

#endif
