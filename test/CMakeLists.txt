enable_testing()

set(TARGET "MyTest")
add_executable(${TARGET} test_utils.cpp)

add_test(NAME ${TARGET} COMMAND ${TARGET})
