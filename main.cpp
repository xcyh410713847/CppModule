﻿// main.cpp

import TestModule1;
import TestModule2.Print1;
import TestModule2.Print2;
import TestModule3;
import TestModule4;
import TestModule5;
import TestModule6;

int main()
{
    TestModule1();

    TestModule2_Print1();
    TestModule2_Print2();

    TestModule3_Print1();
    TestModule3_Print2();

    TestModule4();

    TestModule5_Print1_1();
    TestModule5_Print1_2();
    TestModule5_Print2();
    TestModule5_Print3_1();
    TestModule5_Print3_2();

    TestModule6Class testModule6Class;
    testModule6Class.Print1();
    testModule6Class.Print2();

    return 0;
}