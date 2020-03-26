cmake_minimum_required(VERSION 3.13)

project(stdlib2 C ASM)


if(CMAKE_SYSTEM_PROCESSOR STREQUAL "i386")
    set(x86 1)
else()
    set(x86 0)
endif()

# Hack to fix MSVC's bad defaults.
STRING(REGEX REPLACE "[/|-]RTC(su|[1su])" "" CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG}")

add_library(${PROJECT_NAME}
    src/exit.c
    src/start.c
    src/string.c
    $<$<PLATFORM_ID:Windows>:
        src/platform/win_x86_64/_exit.c
    >
    $<$<AND:$<BOOL:${x86}>,$<PLATFORM_ID:Linux>>:
        src/platform/linux_x86/_exit.s
    >
    $<$<AND:$<NOT:${x86}>,$<PLATFORM_ID:Linux>>:
        src/platform/linux_x86_64/_exit.s
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
        $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:
            -nostdlib
        >
)

target_link_options(${PROJECT_NAME}
    PUBLIC
        $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:GNU>>:
            -nostdlib
        >
        $<$<CXX_COMPILER_ID:MSVC>:
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
