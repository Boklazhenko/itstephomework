// Написать функцию, которая вставляет в строку в указанную позицию заданный символ.

#include <iostream>
#include<iterator>
using namespace std;

void Insert(char* s, int len, int k, char ch)
{
    for (int i = len; i > k - 2; i--)
        s[i + 1] = s[i];
    s[k - 1] = ch;
}

int main()
{
    int k, len = 0;
    char s[256], ch;
    cout << "String:\n";
    cin.getline(s, 256);
    cout << "Symbol:\n";
    cin >> ch;
    cout << "Position:\n";
    cin >> k;

    while (s[len])
    {
        len++;
    }

    Insert(s, len, k, ch);
    cout << s << "\n";
    return 0;
}


    