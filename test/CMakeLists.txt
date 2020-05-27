project(test_stdlib2 LANGUAGES C)

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
make_test(fputc)
make_test(fputs)
make_test(fwrite)
make_test(main_args "hej" "san")
make_test(memchr)
make_test(memcmp)
make_test(memcpy)
make_test(memset)
make_test(offsetof)
make_test(putc)
make_test(puts)
make_test(stdint)
make_test(strchr)
make_test(strcspn)
make_test(strlen)
make_test(strcmp)
make_test(strtok)
make_test(types)
