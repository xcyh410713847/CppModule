# TestModule3
add_library(TestModule3)
target_sources(TestModule3
    PUBLIC
    FILE_SET CXX_MODULES FILES
    TestModule3.cppm
    TestModule3_1.cppm
    TestModule3_2.cppm
)
target_link_libraries(${project_name} TestModule3)
