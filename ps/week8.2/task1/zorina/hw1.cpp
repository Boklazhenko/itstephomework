// Написать функцию, которая удаляет из строки символ с заданным номером.
//

#include <iostream>

void removeChar(char str[], int charNum) {
    for (int i = charNum;str[i]!='\0' ;++i)
        str[i] = str[i + 1];
}

int main()
{
    char str[] = "I like a dog\n";
    removeChar(str, 7);
    std::cout << str;
}