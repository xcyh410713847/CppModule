// TestModule1.cppm

module;

#include <iostream>

export module TestModule2.Print2;

export void TestModule2_Print2()
{
    std::cout << "TestModule2_Print2 \n";
}
