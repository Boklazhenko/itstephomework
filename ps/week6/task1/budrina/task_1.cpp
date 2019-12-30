// Написать функцию, которая принимает два параметра: основание степени
//и показатель степени, и вычисляет степень числа на основе полученных данных.
#include <iostream>
using namespace std;
double myPow(double digit, double pow) {
    double key = 1;
    for (int i = 0; i < pow; ++i)
        key *= digit;
    return key;
}
int main()
{
    double digit, pow;
    cout << "Enter digit: ";
    cin >> digit;
    cout << "\n";
    cout << "Enter pow: ";
    cin >> pow;
    cout << "\n";
    long long res = myPow(digit, pow); //Может посчитать до 1 Квинтилиона. 1 000 000 000 000 000 000
    cout << "Res = " << res << "\n\n";
}