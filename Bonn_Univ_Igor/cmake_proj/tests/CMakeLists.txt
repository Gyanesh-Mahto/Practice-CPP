add_subdirectory(/usr/src/gtest
		${PROJECT_BINARY_DIR}/gtest)

include(CTest)

add_executable(test_sum test_sum.cpp)

target_link_libraries(test_sum
			header
			gtest gtest_main)
add_test(test_sum tests/test_sum)
