# TestModule7
add_library(TestModule7)
target_sources(TestModule7
    PUBLIC
    FILE_SET CXX_MODULES FILES
    TestModule7.cppm
    TestModule7_1.cppm
    TestModule7_2.cppm
)
target_link_libraries(${project_name} TestModule7)
