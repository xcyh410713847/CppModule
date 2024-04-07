// TestModule1.cppm

module;
#include <iostream>

export module TestModule7.Part2;

export namespace TestModule7::Part2
{
    class TestModule7Class
    {
    public:
        void Print()
        {
            std::cout << "TestModule7Class::Part2 \n";
        }
    };
}
