// Пользователь вводит строку символов и искомый символ,
// посчитать сколько раз он встречактся в строке.

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    setlocale(0, "");

    char string[20]; 
    char symbol;
    int counter = 0;
    cout << "Введите строку символов: ";
    cin>> string;
    cout << "Введите искомый символ: ";
    cin >> symbol;
    cout << "\n";
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == symbol)
        {
            ++counter;
        }
    }
    cout << "Символ: " << symbol << " встречается " << counter << " раз(а)." << endl;
    
    return 0;
}