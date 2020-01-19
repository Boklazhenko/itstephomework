// Написать примитивный калькулятор, пользуясь только указателями.

#include <iostream>
using namespace std;

double calc(double num1, double num2, int action) {
    double* pNum1 = &num1, *pNum2 = &num2;
    int* pAction = &action;
    if (*pAction == 1)
        return *pNum1 + *pNum2;
    if (*pAction == 2)
        return *pNum1 - *pNum2;
    if (*pAction == 3)
        return *pNum1 * *pNum2;
    if (*pAction == 4)
        return *pNum1 / *pNum2;
}
int main()
{
    double firstNumber, secondNumber;
    int action;
    cout << "Enter first number: " << endl;
    cin >> firstNumber;
    cout << "Enter second number: " << endl;
    cin >> secondNumber;
    while (true) {
        cout << "Select an action: \n";
        cout << "Enter 1 - with action '+'\n"
            << "Enter 2 - with action '-'\n"
            << "Enter 3 - with action '*'\n"
            << "Enter 4 - with action '/'\n";
        cin >> action;
        if (secondNumber < 0 && action == 4) {
            cout << "Cannot be divided by zero! Choose another action\n";
        }
        else if (0 >= action || action > 4) {
            cout << "Input error, try again";
        }
        else {
            break;
        }
    }
    cout << "Result: " << calc(firstNumber, secondNumber, action);    
}