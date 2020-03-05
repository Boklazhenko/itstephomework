//Подсчитать количество слов во введенном предложении

#include <iostream>
using namespace std;

int main()
{
    const int size = 256;
    int counter = 1, lineSize = 0;
    char line[size];
    cout << "Enter sentence: ";
    gets_s(line);
    lineSize = strlen(line);
    for (int i = 0; i < lineSize; ++i) {
        if ((line[i] == ' ') && (line[i + 1] != line[i])) {     // проверка на случай если несколько пробелов подряд.
            ++counter;
        }
    }
    cout << counter << " words in a sentence" << endl;
}
