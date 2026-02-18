#pragma once

#include <epoxy/gl.h>

/// Compile a single shader stage from source. Exits on failure.
GLuint compileShader(GLenum type, const char* source);

/// Link a vertex + fragment shader into a program. Exits on failure.
GLuint createShaderProgram(const char* vertexSrc, const char* fragmentSrc);
