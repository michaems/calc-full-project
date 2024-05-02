#include <iostream>
#include "calc.h"

int main()
{
    int s = Calc::sum(10, 15);
    int m = Calc::multiply(10, 15);

    std::cout<<"Sum: "<<s<<std::endl;
    std::cout<<"Mult: "<<m<<std::endl;

    return 0;
}