//Дан текстовый файл.Найти и заменить в нем заданное
//слово.Что искать и на что заменять определяется пользователем

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(0, "");
    string file = "myFile.txt";

    ifstream fin;
    fin.open(file);
    if (!fin.is_open())
    {
        cout << "Error. File not found." << endl;
    }
    else
    {
        cout << " Enter a word to replace: " << endl;
        string word_source;
        cin >> word_source;
        cout << " Enter a word to insert: " << endl;
        string word_dest;
        cin >> word_dest;

        string temp; int count = 0;
        temp = "";
        while (fin)
        {
            string str;
            getline(fin, str, '\n');
            if (!fin) break;
            cout << str << endl;
            size_t position = 0;

            while (position != std::string::npos)
            {
                size_t position_start = position;
                position = str.find(word_source, position);

                if (position != std::string::npos)
                {   //std::cout << "    >>>Слово найдено!\n";
                    count++;
                    temp += str.substr(position_start,
                        position - position_start);
                    
                    temp += word_dest;
                    position += word_source.size();
                }
                else
                {
                    temp += str.substr(position_start,
                        position - position_start);
                }
            }
            temp += "\n";
        }
        fin.close();

        ofstream fout("myFileOut.txt");
        fout << temp.substr(0, temp.size());
        fout.close();

        cout << "Вcего было заменено " << count << " слов(а).\n";
        cout << "\nТекст на выходе------------------------------------------:\n"
            << temp << "\n";
    }
    return 0;
}