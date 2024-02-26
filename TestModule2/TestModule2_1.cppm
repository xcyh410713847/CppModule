// TestModule1.cppm

module;

#include <iostream>

export module TestModule2.Print1;

export void TestModule2_Print1()
{
    std::cout << "TestModule2_Print1 \n";
}
