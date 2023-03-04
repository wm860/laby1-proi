#include <iostream>
#include "adder.h"

int main()
{
    std::cout << "Hello world" << std::endl;

    Adder my_adder(100.0, 20.0);
    std::cout << my_adder.sum() << std::endl;

    //int num1 = 10;
    //unsigned num2 = 10;
    //std::cout << (num1 == num2);


    return 0;
}
