cmake_minimum_required (VERSION 3.8)

enable_testing()

find_package(GTest REQUIRED)

set(TARGET "test")
add_executable(${TARGET} test_utils.cpp)

target_link_libraries(${TARGET} PRIVATE
	GTest::GTest
	GTest::Main
	Threads::Threads
)
