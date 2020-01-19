// Используя указатели и оператор разыменования, обменять местами значения двух переменных.

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 9;
    cout << a << ", " << b << endl;
    int* pA = &a, * pB = &b, temp;
    temp = *pA; 
    *pA = *pB;
    *pB = temp;
    cout << a << ", " << b << endl;
}
