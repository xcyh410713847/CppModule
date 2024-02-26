cmake_minimum_required(VERSION 3.26)
project(CppModule)

# 支持C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 禁用编译器的扩展
set(CMAKE_CXX_EXTENSIONS OFF)

# 开启模块支持
set(CMAKE_CXX_SCAN_FOR_MODULES ON)

add_library(TestModule)

target_sources(TestModule
    PUBLIC
    FILE_SET cxx_modules TYPE CXX_MODULES FILES
    TestModule.cppm
)

add_executable(CppModule main.cpp)
target_link_libraries(CppModule TestModule)
