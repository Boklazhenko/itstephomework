//Создайте класс Complex(комплексное число) или используйте уже созданный вами класс.Создайте перегруженные
//операторы для реализации арифметических операций для
//по работе с комплексными числами(операции + , -, *, / ).

#include "Complex.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    Complex k1, k2, k3, res;
    double s;
    /*double c;*/
    cin >> k1;
    cin >> k2;
    cout << "Введите вещественное число: ";
    cin >> s;
    k3 = k2;
    cout << "Первое комплексное число = " << k1;
    cout << "Второе комплексное число = " << k2;
    cout << "Вещественное число = " << s << endl;
    res = k1 + k2;
    cout << "k1 + k2 = "<< res;
    k2 = k3;
    res = k1 - k2;
    cout << "k1 - k2 = " << res;
    k2 = k3;
    res = k1 * k2;
    cout << "k1 * k2 = " << res;
    k2 = k3;
    res = k1 * s;
    cout << "const * k1 = " << res;
    res = s * k1;
    cout << "k1 * const = " << res;
    k1[0] = 6;
    k1[1] = 15;
    cout << "Новое комплексное число = " << k1[0];
    cout << "+i";
    cout << k1[1];
    cout << "\n";
    return 0;
}