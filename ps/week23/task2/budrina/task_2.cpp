
//Дан текстовый файл.Необходимо создать новый файл
//и записать в него следующую статистику по исходному файлу :
//■ Количество строк;
//■ Количество гласных букв;
//■ Количество согласных букв;
//■ Количество цифр.

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "File.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int sym = symFile();
    int str = strFile();
    int vow = vowelsFile();
    int cons = consonantsFile();
    int num = numbFile();
    // для наглядности вывела в консоль
    cout << "Символов в Файле: " << sym << endl;
    cout << "Строк в Файле: " << str << endl;
    cout << "Гласных в Файле: " << vow << endl;
    cout << "Согласных в Файле: " << cons << endl;
    cout << "Чисел в Файле: " << num << endl;
    // запись в файл
    ofstream out("out.txt");
    out << "Символов в Файле: " << sym << endl;
    out << "Строк в Файле: " << str << endl;
    out << "Гласных в Файле: " << vow << endl;
    out << "Согласных в Файле: " << cons << endl;
    out << "Чисел в Файле: " << num << endl;
    out.close();

    cout << endl;
	
	return 0;
}

