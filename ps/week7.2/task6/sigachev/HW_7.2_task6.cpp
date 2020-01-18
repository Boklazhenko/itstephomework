// Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b.
// Пользователь вводит a и b.Проиллюстрируйте работу функции примером.
#include <iostream>
using namespace std;

int sumNumber(int num1, int num2) {
    if (num2 == num1 - 1) 
        return 0;
    return num2 += sumNumber(num1, num2 - 1);    
}
int main()
{
    int firstNumber, secondNumber, max = 0;
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    if (firstNumber > secondNumber) {   // Если пользоваатель ввел числа как попало, здесь определяем какое больше. 
        max = firstNumber;
    }
    else {
        max = secondNumber;
        secondNumber = firstNumber;
    }
    cout << sumNumber(secondNumber, max);
}