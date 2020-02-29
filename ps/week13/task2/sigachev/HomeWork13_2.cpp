// С помощью директивы #define написать следующие макросы:
// Нахождение меньшего из двух чисел;
// Нахождение большего из двух чисел;
//    Возведение числа в квадрат;
//    Возведение числа в степень;
//    Проверка числа на четность;
//    Проверка числа на нечетность;

#define MIN ((a) < (b) ? (a) : (b))
#define MAX ((a) > (b) ? (a) : (b))
#include <iostream>
#define SQUARE (a*a)
#define DEGREE (pow(a,d))
#define EVEN (a%2 == 0 ? "" : " not")
#define ODD (a%2 == 1 ? "" : " not")

using namespace std;

int main()          // Меню выбора действий делать не стал.
{
    int a, b, d;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;
    cout << "Enter degree: " << endl;
    cin >> d;
    cout << "The minimum of the entered numbers is " << MIN << endl;
    cout << "The maximum of the entered numbers is " << MAX << endl;
    cout << SQUARE << endl;
    cout << DEGREE << endl;
    cout << "The number " << a << EVEN << " even!" << endl;
    cout << "The number " << a << ODD << " odd!" << endl;
}

