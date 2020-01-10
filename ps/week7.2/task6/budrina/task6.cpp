// Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от а до b.
// Напишите пример.

#include <iostream>
using namespace std;

int summa(int a, int b) {

    if (b == a - 1) 
        return 0;
    return b + summa(a, b - 1);
}

int main()
{
    setlocale(0, "");
    int a, b;
    cout << "Введите 1-ое число диапазона: ";
    cin >> a;
    cout << "Введите последнее число диапазона: ";
    cin >> b;
    cout << "Сумма чисел введенного диапазона = ";
    cout << summa(a, b);
    cout << "\n\n";
    return 0;
}