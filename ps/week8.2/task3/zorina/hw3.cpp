// Написать функцию, которая вставляет в строку в указанную позицию заданный символ.
//

#include <iostream>
#include<string>
using namespace std;
string addChar(string str, int charIndex, char simbol) {
    int index = 0;
    while (str[index] != '\0') 
        ++index;
    str += " ";
    for (int i = index; i > charIndex; --i) 
        str[i] = str[i - 1];
       
    str[charIndex] = simbol;
    return str;
}

int main()
{
    cout << addChar("aaaaaaaaac", 3, 'b');
}