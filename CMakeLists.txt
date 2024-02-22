cmake_minimum_required(VERSION 3.26)
project(CppModule CXX)

set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")

# Skip this line if you're using Clang (>= 16)
# include(cxx_modules_rules_clang.cmake)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_SCAN_FOR_MODULES ON)

add_library(TestModule)
target_sources(TestModule
    PUBLIC
    FILE_SET cxx_modules TYPE CXX_MODULES FILES
    TestModule.cppm
)
add_executable(CppModule main.cpp)
target_link_libraries(CppModule TestModule)