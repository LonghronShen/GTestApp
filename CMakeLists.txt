cmake_minimum_required(VERSION 3.17)

# include(CMakeDetermineSystem)

# if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
#     if(CMAKE_HOST_SYSTEM_PROCESSOR MATCHES "^[Xx]86$")
#         set(VCPKG_TARGET_TRIPLET "x86-windows-static" CACHE STRING "VCPKG_TARGET_TRIPLET" FORCE)
#     elseif(CMAKE_HOST_SYSTEM_PROCESSOR MATCHES "^[Aa][Mm][Dd]64$")
#         set(VCPKG_TARGET_TRIPLET "x64-windows-static" CACHE STRING "VCPKG_TARGET_TRIPLET" FORCE)
#     elseif(CMAKE_HOST_SYSTEM_PROCESSOR MATCHES "^[Aa][Rr][Mm]$")
#         set(VCPKG_TARGET_TRIPLET "arm-windows-static" CACHE STRING "VCPKG_TARGET_TRIPLET" FORCE)
#     elseif(CMAKE_HOST_SYSTEM_PROCESSOR MATCHES "^[Aa][Rr][Mm]64$")
#         set(VCPKG_TARGET_TRIPLET "arm64-windows-static" CACHE STRING "VCPKG_TARGET_TRIPLET" FORCE)
#     else()
#         message(AUTHOR_WARNING "Failed to determine the system arch.")
#     endif()
#     message(STATUS "Using vcpkg for ${VCPKG_TARGET_TRIPLET}, ${CMAKE_HOST_SYSTEM_PROCESSOR}")
#     set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "CMAKE_TOOLCHAIN_FILE" FORCE)
# endif()

project(GTestApp)

set(CMAKE_CXX_STANDARD 17 CACHE STRING "Set to 11 or 14 to enable C++11 or C++17 builds, respectively." FORCE)
set(CMAKE_C_STANDARD 11 CACHE STRING "Set to 99 or 11 to enable C99 or C11 builds, respectively." FORCE)
set_property(GLOBAL PROPERTY CXX_STANDARD_REQUIRED ON)

find_package(Threads REQUIRED)

find_package(GTest)
if(GTest_FOUND)
    include_directories(${GTEST_INCLUDE_DIRS})
else()
    add_subdirectory(external/gtest)
endif()

add_subdirectory(src)
add_subdirectory(test)