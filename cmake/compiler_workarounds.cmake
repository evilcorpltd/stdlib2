# Hack to fix MSVC's bad defaults.
STRING(REGEX REPLACE "[/|-]RTC(su|[1su])" "" CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG}")
