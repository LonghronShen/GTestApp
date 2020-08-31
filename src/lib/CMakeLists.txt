cmake_minimum_required(VERSION 3.16)

# Set the project name
project (student C CXX)

file(GLOB_RECURSE src
    ${CMAKE_CURRENT_LIST_DIR}/*.h
    ${CMAKE_CURRENT_LIST_DIR}/*.hpp

    ${CMAKE_CURRENT_LIST_DIR}/*.c
	${CMAKE_CURRENT_LIST_DIR}/*.cc
	${CMAKE_CURRENT_LIST_DIR}/*.cpp
)

file(GLOB_RECURSE public_headers
    ${CMAKE_CURRENT_LIST_DIR}/include/*.h
    ${CMAKE_CURRENT_LIST_DIR}/include/*.hpp
)

include_directories(
    ${CMAKE_CURRENT_LIST_DIR}/include
)

# Add an library for the example classes
add_library(student
    STATIC ${src}
)

target_include_directories(student
    PUBLIC "${CMAKE_CURRENT_LIST_DIR}/include/"
)
