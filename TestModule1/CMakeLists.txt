# TestModule1
add_library(TestModule1)
target_sources(TestModule1
    PUBLIC
    FILE_SET CXX_MODULES FILES
    TestModule1.cppm
)
target_link_libraries(${project_name} TestModule1)
