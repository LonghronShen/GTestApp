# Set the project name
project(student_exe C CXX)

file(GLOB_RECURSE src
    ${CMAKE_CURRENT_LIST_DIR}/*.h
    ${CMAKE_CURRENT_LIST_DIR}/*.c
    ${CMAKE_CURRENT_LIST_DIR}/*.cc
    ${CMAKE_CURRENT_LIST_DIR}/*.cpp
)

# Add an executable for testing purpose
add_executable(student-exe ${src})

target_link_libraries(student-exe
    PUBLIC student
)
