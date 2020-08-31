project(test1)

enable_testing()

file(GLOB_RECURSE test_src
        ${CMAKE_CURRENT_LIST_DIR}/*.h
        ${CMAKE_CURRENT_LIST_DIR}/*.c
        ${CMAKE_CURRENT_LIST_DIR}/*.cc
        ${CMAKE_CURRENT_LIST_DIR}/*.cpp
)

add_executable(${PROJECT_NAME} ${test_src})

target_link_libraries(${PROJECT_NAME}
        gtest_main
        student)

gtest_discover_tests(${PROJECT_NAME})