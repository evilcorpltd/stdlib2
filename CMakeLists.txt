cmake_minimum_required(VERSION 3.13)

project(stdlib2)

add_library(${PROJECT_NAME}
    src/exit.c
    src/start.c
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        include
)

target_link_options(${PROJECT_NAME}
    PUBLIC
        -nostdlib
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        $<$<BOOL:${WIN32}>:
            kernel32
        >
)

enable_testing()

add_subdirectory(test)
