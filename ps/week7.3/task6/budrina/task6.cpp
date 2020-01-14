// Используя указатели и оператор разыменования, обменять местами значения двух переменных.


#include <iostream>

using namespace std;

void swap(int* firstNum, int* secondNum)
{
    int temp = *firstNum;
    *firstNum = *secondNum;
    *secondNum = temp;
}

int main()
{
    int a, b;
    cout << "Enter first num A: "; // Введите первое число
    cin >> a;
    cout << "\nEnter second num B: "; // Введите второе число
    cin >> b;
 
    cout << "\nFirst number A = " << a << "\tSecond number B = " << b << endl;

    swap(&a, &b);

    cout << "\nSwap first number A = " << a << "\tSwap second number B = " << b << endl;
}