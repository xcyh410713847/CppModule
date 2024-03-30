# TestModule4
add_library(TestModule4)
target_sources(TestModule4
    PUBLIC
    FILE_SET CXX_MODULES FILES
    TestModule4.ixx
)
target_link_libraries(${project_name} TestModule4)
