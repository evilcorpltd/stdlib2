cmake_minimum_required(VERSION 3.13)

project(stdlib2 C ASM)

include(cmake/platform_setup.cmake)
include(cmake/compiler_workarounds.cmake)

add_library(${PROJECT_NAME}
    src/exit.c
    src/stdlib2_start.c
    src/string.c
    $<$<PLATFORM_ID:Windows>:
        src/platform/win_x86_64/_exit.c
        src/start.c
    >
    $<$<AND:$<BOOL:${x86}>,$<PLATFORM_ID:Linux>>:
        src/platform/linux_x86/_exit.s
        src/platform/linux_x86/_start.s
    >
    $<$<AND:$<NOT:${x86}>,$<PLATFORM_ID:Linux>>:
        src/platform/linux_x86_64/_exit.s
        src/platform/linux_x86_64/_start.s
    >
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        include
    PRIVATE
        src
)

target_compile_options(${PROJECT_NAME}
    PUBLIC
        $<$<OR:$<C_COMPILER_ID:Clang>,$<C_COMPILER_ID:GNU>>:
            -nostdlib
        >
        $<$<C_COMPILER_ID:MSVC>:
            /GS-
        >
)

target_link_options(${PROJECT_NAME}
    PUBLIC
        $<$<OR:$<C_COMPILER_ID:Clang>,$<C_COMPILER_ID:GNU>>:
            -nostdlib
        >
        $<$<C_COMPILER_ID:MSVC>:
            /NODEFAULTLIB
            /ENTRY:_start
        >
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        $<$<PLATFORM_ID:Windows>:kernel32>
)

enable_testing()

add_subdirectory(test)
