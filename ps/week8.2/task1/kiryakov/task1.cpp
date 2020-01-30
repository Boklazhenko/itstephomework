#include <iostream>
using namespace std;
void delSimb(char str[], int simb) {
    for (int i = simb; str[i] != '\0'; ++i)
        str[i] = str[i + 1];
}

int main()
{
    char line[] = "Home Work";
    delSimb(line, 0);
    cout << line;
}