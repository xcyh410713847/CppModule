// TestModule1.cppm

module;
// #include <iostream>

export module TestModule5.Part1;
export import TestModule5.Part1.Test1;
export import TestModule5.Part1.Test2;


export void TestModule5_Print1()
{
    // std::cout << "TestModule5_Print1 \n";
}
