project(test_stdlib2)

function(make_test name)
    add_executable(${name} src/test_${name}.c)

    target_link_libraries(${name}
        PRIVATE
            stdlib2
    )

    add_test(${name} ${name})
endfunction()

make_test(exit)
make_test(offsetof)
make_test(strlen)
make_test(types)
