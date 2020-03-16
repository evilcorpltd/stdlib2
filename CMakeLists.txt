cmake_minimum_required(VERSION 3.13)

project(stdlib2 C ASM)

add_library(${PROJECT_NAME}
    src/exit.c
    src/start.c
    $<$<PLATFORM_ID:Windows>:
        src/platform/win_x86_64/_exit.s
    >
    $<$<PLATFORM_ID:Linux>:
        src/platform/linux_x86_64/_exit.s
    >
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        include
    PRIVATE
        src
)

target_link_options(${PROJECT_NAME}
    PUBLIC
        -nostdlib
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        $<$<PLATFORM_ID:Windows>:kernel32>
)

enable_testing()

add_subdirectory(test)
