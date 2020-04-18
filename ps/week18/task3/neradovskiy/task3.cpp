#include <iostream>
#include "Overcoat.h"

int main()
{
    Overcoat jaket("Jaket", 46, 250);
    jaket.print();
    Overcoat jaket2("blouse", 44, 25);
    jaket2.print();
    jaket2 = jaket;
    jaket2.print();
    if (jaket == jaket2)
        std::cout << "Jaket is equal jaket2" << std::endl;
    else {
        std::cout << "Jaket is not eqal jaket2" << std::endl;
    }
    jaket2.changePrice(8000);
    if (jaket > jaket2)
        std::cout << "Jaket is more expansive than jaket2" << std::endl;
    else {
        std::cout << "Jaket chaper jaket2" << std::endl;
    }
}