#include <iostream>

void delSimb(char str[], int simb) {
    for (int i = simb; str[i] != '\0'; ++i)
        str[i] = str[i + 1];
}

int main()
{
    char line[] = "Hello";
    delSimb(line, 0);
    std::cout << line;
}