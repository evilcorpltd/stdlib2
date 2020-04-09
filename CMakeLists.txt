cmake_minimum_required(VERSION 3.13)

project(stdlib2 LANGUAGES C)

include(cmake/platform_setup.cmake)
include(cmake/compiler_workarounds.cmake)

add_subdirectory(warnings)

add_library(${PROJECT_NAME}
    src/exit.c
    src/stdlib2_start.c
    src/stdio.c
    src/string.c
    $<$<PLATFORM_ID:Windows>:
        src/platform/win_x86_64/_exit.c
        src/platform/win_x86_64/_fd.c
        src/platform/win_x86_64/_write.c
        src/platform/win_x86_64/start.c
    >
    $<$<PLATFORM_ID:Linux>:
        src/platform/linux/_fd.c
    >
    $<$<AND:$<BOOL:${x86}>,$<PLATFORM_ID:Linux>>:
        src/platform/linux_x86/_exit.s
        src/platform/linux_x86/_start.s
        src/platform/linux_x86/stubs.c
    >
    $<$<AND:$<NOT:${x86}>,$<PLATFORM_ID:Linux>>:
        src/platform/linux_x86_64/_asm_write.s
        src/platform/linux_x86_64/_exit.s
        src/platform/linux_x86_64/_start.s
        src/platform/linux_x86_64/_write.c
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
        stdlib2::warnings
        $<$<PLATFORM_ID:Windows>:kernel32>
)

enable_testing()

add_subdirectory(test)
