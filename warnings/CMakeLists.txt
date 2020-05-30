project(stdlib2_warnings LANGUAGES C)

add_library(${PROJECT_NAME} INTERFACE)
add_library(stdlib2::warnings ALIAS ${PROJECT_NAME})

target_compile_options(${PROJECT_NAME} INTERFACE
    $<$<OR:$<C_COMPILER_ID:Clang>,$<C_COMPILER_ID:GNU>>:
        -Wall;
        -Werror;
        -Wextra;
    >
    $<$<C_COMPILER_ID:Clang>:
        -Wpedantic;
    >
    $<$<C_COMPILER_ID:GNU>:
        -pedantic-errors;
    >
    $<$<C_COMPILER_ID:MSVC>:
        /permissive-;
        /W4;
        /WX;
    >
)
