//Написать функцию, которая определяет, является ли «счастливым» шестизначное число.
#include <iostream>
using namespace std;

void luckyNamber(int number) 
{
    int firstHalf = 0, secondHalf = 0;
    for (int i = 0; i < 3; ++i) 
    {
        firstHalf += number % 10;
        number /=10;
    }
    for (int i = 0; i < 3; ++i) 
    {
        secondHalf += number % 10;
        number /= 10;
    }
    cout << "\nYour number is" << (firstHalf == secondHalf ? " " : " not ") << "lucky!" << endl;
}

int main()
{
    int number = 0;
    while (100000 > number || number > 999999)
    {
        cout << "\nEnter a six digit number ";
        cin >> number;
        if (100000 > number || number > 999999) 
        {
            cout << "Wrong number. Try again." << endl;
        }
    }
    luckyNamber(number);
}
