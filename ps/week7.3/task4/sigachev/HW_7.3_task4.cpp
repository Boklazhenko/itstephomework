// Используя указатели и оператор разыменования, определить наибольшее из двух чисел

#include <iostream>
using namespace std;

int findMax(int* pA, int* pB) {
    if (*pA > * pB) {
        return *pA;
    }
    else if (*pA < *pB) {
        return *pB;
    }
    else
        cout << "Numbers are equal: ";
    return *pA;
}
int main()
{
    int a = 8, b = 8;
    cout << findMax(&a, &b);
}

