cmake_minimum_required(VERSION 3.16)
project(phylactery LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# ── Dependencies ──────────────────────────────────────────────
find_package(OpenGL REQUIRED)
find_package(glfw3  REQUIRED)
find_package(PkgConfig REQUIRED)

pkg_check_modules(EPOXY REQUIRED IMPORTED_TARGET epoxy)

# ── Executable ────────────────────────────────────────────────
add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        OpenGL::GL
        glfw
        PkgConfig::EPOXY
)
