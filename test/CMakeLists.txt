project(test_stdlib2)

add_executable(${PROJECT_NAME}
    src/main.c
)

add_test(${PROJECT_NAME} ${PROJECT_NAME})

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        stdlib2
)
