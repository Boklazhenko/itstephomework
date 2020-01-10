// Используя указатели и оператор разыменования, определить наибольшее из двух чисел.

#include <iostream>
using namespace std;

int digit(int* num1, int* num2)
{
    cout << "\nA = " << *num1 << "\n";
    cout << "B = " << *num2 << "\n";

    if (*num1 > *num2)
    return 1;

    if (*num1 < *num2)
    return -1;

    if (*num1 == *num2)
    return 0;
}
int main ()

{
    int a, b, res;
    cout << "Enter first num A: "; // Введите первое число
    cin >> a;
    cout << "\nEnter second num B: "; // Введите второе число
    cin >> b;
    res = digit(&a, &b);
    if (res == 1)
        cout << "\nA > B" << endl;
    if (res == -1)
        cout << "\nA < B" << endl;
    if (res == 0)
        cout << "\nA = B" << endl;
}


    
