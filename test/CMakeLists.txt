enable_testing()

set(TARGET "MyTest")
add_executable(${TARGET} test_utils.cpp)

add_test(
	NAME ${TARGET}
	WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
	COMMAND ${TARGET}
)
