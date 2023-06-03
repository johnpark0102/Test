set(TARGET "app")
add_executable (${TARGET} "main.cpp")

target_link_libraries(${TARGET} PRIVATE Threads::Threads)

# TODO: 필요한 경우 테스트를 추가하고 대상을 설치합니다.
