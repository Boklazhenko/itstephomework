#include <iostream>

int main()
{
    int a = 10;
    int b = 4;
    int* pA = &a;
    int* pB = &b;
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
    std::cout << "A: " << a << "\nB: " << b;;
}
