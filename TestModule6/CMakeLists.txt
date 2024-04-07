# TestModule6
add_library(TestModule6)
target_sources(TestModule6
    PUBLIC
    FILE_SET CXX_MODULES FILES
    TestModule6.cppm
)
target_link_libraries(${project_name} TestModule6)
