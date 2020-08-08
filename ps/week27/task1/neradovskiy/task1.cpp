#include <iostream>
#include "LinearEquaion.h"
#include "QuadraticEquation.h"

int main()
{
    Linear test(5, 7);
    Quadratic test2(1, 25, 0);
    std::cout << test.findRoot() << std::endl;
    std::cout << test2.findRoot() << std::endl;
}