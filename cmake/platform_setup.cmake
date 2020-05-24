if(NOT WIN32)
    enable_language(ASM)
endif()

if(CMAKE_SYSTEM_PROCESSOR STREQUAL "i386")
    set(x86 1)
else()
    set(x86 0)
endif()
