# TestModule3
add_library(TestModule5)
target_sources(TestModule5
    PUBLIC
    FILE_SET CXX_MODULES FILES
    TestModule5.cppm
    TestModule5_1.cppm
    TestModule5_2.cppm
)
target_link_libraries(${project_name} TestModule5)
