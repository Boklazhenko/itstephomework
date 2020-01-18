// Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь.
// Проиллюстрируйте работу функции примером.
#include <iostream>
using namespace std;

int starLine(int number) 
    {
        if (number < 1)
            return 1;
        cout << " * "; starLine(number - 1);
    }
int main()
{
    int numberStar;
    cout << "Enter the number of stars: ";
    cin >> numberStar;
    //for (int i = 0; i < numberStar; ++i) 
    //{
    //    cout << "* ";
    //}
    starLine(numberStar);
}
