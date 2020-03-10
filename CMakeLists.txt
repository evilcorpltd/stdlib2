cmake_minimum_required(VERSION 3.15)

project(stdlib2)

add_library(${PROJECT_NAME}
    src/start.c
)

target_link_options(${PROJECT_NAME}
    PUBLIC
        -nostartfiles
)

enable_testing()

add_subdirectory(test)
