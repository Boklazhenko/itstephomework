// Написать программу, которая заменяет все символы точки "." в строке, введенной пользователем,
// на символы восклицательного знака"!"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '.') {
            str[i] = '!';
            continue;
        }
    }
    cout << str << "\n";
}

