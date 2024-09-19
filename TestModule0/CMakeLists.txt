# TestModule0
add_library(TestModule0)
target_sources(TestModule0
    PUBLIC
    FILE_SET CXX_MODULES FILES
    TestModule0.cppm
)
target_link_libraries(${project_name} TestModule0)
