#include <iostream>
#include "Flat.h"

int main()
{
    Flat home("Malkova 30", 32, 1000);
    home.print();
    Flat bar("Lenina 2a", 150, 1);
    bar.print();
    home = bar;
    if (home == bar)
        std::cout << "Home == bar" << std::endl;
    bar.changePrice(100);
    if (home < bar)
        std::cout << "Home < bar" << std::endl;
}