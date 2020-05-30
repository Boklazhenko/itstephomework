#include "ComplexNum.h"

int main()
{
    ComplexNum a(1, 1);
    ComplexNum b = a;
    ComplexNum c = a + b;
    c.print();
    std::cout << ComplexNum::getCount() << std::endl;
    c = a * b;
    c.print();
    std::cout << ComplexNum::getCount() << std::endl;
    c = a / b;
    c.print();
    std::cout << ComplexNum::getCount() << std::endl;
    c = a - b;
    c.print();
    std::cout << ComplexNum::getCount() << std::endl;
    c = b;
    c.print();
    std::cout << ComplexNum::getCount() << std::endl;
}
