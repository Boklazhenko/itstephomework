#include <iostream>

int main()
{
    std::cout << "Enter num: ";
    int num;
    std::cin >> num;
    int* pNum = &num;
    if (*pNum > 0)
        std::cout << "Num is bigger zero";
    else if (*pNum == 0)
        std::cout << "Num is 0";
    else
        std::cout << "Num is less than zero";
}