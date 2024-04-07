cmake_minimum_required(VERSION 3.26)

set(project_name CppModule)

project(${project_name})

# 支持C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 禁用编译器的扩展
set(CMAKE_CXX_EXTENSIONS OFF)

# 开启模块支持
set(CMAKE_CXX_SCAN_FOR_MODULES ON)

add_executable(${project_name} main.cpp)

add_subdirectory(TestModule1)
add_subdirectory(TestModule2)
add_subdirectory(TestModule3)
add_subdirectory(TestModule4)
add_subdirectory(TestModule5)
