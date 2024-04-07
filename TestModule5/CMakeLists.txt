# TestModule3
add_library(TestModule5)
target_sources(TestModule5
    PUBLIC
    FILE_SET CXX_MODULES FILES
    TestModule5.cppm
    Part1/TestModule5_1.cppm
    TestModule5_2.cppm
    Part1/TestModule5_1_1.cppm
    Part1/TestModule5_1_2.cppm
    Part3/TestModule5_3.cppm
    Part3/TestModule5_3_1.cppm
    Part3/TestModule5_3_2.cppm
)
target_link_libraries(${project_name} TestModule5)
