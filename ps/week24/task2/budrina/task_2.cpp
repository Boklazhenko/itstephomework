//Дан текстовый файл.Найти длину самой длинной строки.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream ifs("Text.txt");

    string cur_str, max_str;

    while (getline(ifs, cur_str))
    {
        if (cur_str.size() > max_str.size())
            max_str = cur_str;
    }

    cout << "Max size string " << max_str.size() << " - " << max_str << endl;

    ifs.close();

    return 0;
}