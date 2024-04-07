// TestModule1.cppm

module;
#include <iostream>

export module TestModule7.Part1;

export namespace TestModule7::Part1
{
    class TestModule7Class
    {
    public:
        void Print()
        {
            std::cout << "TestModule7Class::Part1 \n";
        }
    };
}
