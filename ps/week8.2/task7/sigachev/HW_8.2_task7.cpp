//Дана строка символов.Заменить в ней все пробелы на табуляции.

#include <iostream>
using namespace std;

int main()
{
    int size;
    char line[] = "Hello World! Hello World! Hello World! Hello World!\n";
    size = strlen(line);
    for (int i = 0; i < size; ++i) {
        if (line[i] == ' ')
            line[i] = '\t';
    }
    cout << line << endl;
}