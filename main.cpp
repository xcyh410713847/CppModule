// main.cpp

import TestModule1;
import TestModule2.Print1;
import TestModule2.Print2;
import TestModule3;
import TestModule4;

int main()
{
    TestModule1();

    TestModule2_Print1();
    TestModule2_Print2();

    TestModule3_Print1();
    TestModule3_Print2();

    TestModule4();

    return 0;
}