# TestModule2

add_library(TestModule2)
target_sources(TestModule2
    PUBLIC
    FILE_SET CXX_MODULES FILES
    TestModule2_1.cppm
    TestModule2_2.cppm
)
target_link_libraries(${project_name} TestModule2)
