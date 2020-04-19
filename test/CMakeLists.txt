project(test_stdlib2)

function(make_test name)
    add_executable(test_${name} src/test_${name}.c)

    target_link_libraries(test_${name}
        PRIVATE
            stdlib2
    )

    add_test(NAME test_${name}
        COMMAND test_${name} ${ARGN}
    )
endfunction()

make_test(exit)
make_test(main_args "hej" "san")
make_test(memchr)
make_test(memcmp)
make_test(memcpy)
make_test(memset)
make_test(offsetof)
make_test(strchr)
make_test(strlen)
make_test(types)

if (WIN32)
   # Missing support for args on Windows
   set_tests_properties(test_main_args PROPERTIES WILL_FAIL TRUE)
endif()
