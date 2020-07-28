add_library(header SHARED hello.cpp sum.cpp)

add_executable(bin_main main.cpp)

target_link_libraries(bin_main header)
