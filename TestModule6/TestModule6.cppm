// TestModule1.cppm

module;

#include <iostream>

export module TestModule6;

export class TestModule6Class
{
public:
    void Print1()
    {
        std::cout << "TestModule6Class::Print1 \n";
    }

    void Print2()
    {
        std::cout << "TestModule6Class::Print2 \n";
    }
};