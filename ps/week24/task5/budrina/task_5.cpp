//Создайте программу «Простейший файловый менеджер» :
//1. Создание нового файла в текущем каталоге;
//2. Удаление файла из текущего каталога;
//3. Переименование файла в текущем каталоге;
//4. Перемещение файла из текущего каталога в указанный
//пользователем каталог;
//5. Вывод содержимого указанного пользователем файла
//из текущего каталога на экран.

#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(0, "rus");

	int key;
	cout << "\tФайловый менеджер" << endl;
	cout << " 1. Создание нового файла в текущем каталоге" << endl;
	cout << " 2. Удаление файла из текущего каталога" << endl;
	cout << " 3. Переименование файла в текущем каталоге" << endl;
	cout << " 4. Перемещение файла из текущего каталога в новый" << endl;
	cout << " 5. Вывод содержимого указанного пользователем файла на экран" << endl;
	cin >> key;
	ofstream fout;
	ifstream fin;
	string s1, s2;
	switch (key)
	{
	case 1:
		cout << "Введите имя файла в текущем каталоге:(test.txt)" << endl;
		cin >> s1;
		fout.open(s1);
		if (!fout)
			cout << "Ошибка открытия файла!" << endl;
		else {
			cout << "Файл " << s1 << " создан." << endl;
		}
		break;
	case 2:
		cout << " Удалите файл в текущем каталоге:(test.txt)" << endl;
		cin >> s1;
		fout.open(s1);
		if (!fout)
		{
			cout << "Ошибка открытия файла! \n";
		}
		else {
			fout.close();
			remove(s1.c_str());
			cout << "Файл " << s1 << " удалён! \n";

		}
		break;
	case 3:
		cout << " Введите имя файла для переименовывания (text.txt)" << endl;
		cin >> s1;
		cout << "Введите новое имя файла " << endl;
		cin >> s2;
		rename(s1.c_str(), s2.c_str());
		cout << "Файл " << s1 << " переименован в файл " << s2 << endl;

		break;

	case 4:
		cout << " Введите файл для перемещения (text.txt) " << endl;
		cin >> s1;
		cout << "Введите новую директорию (D:\\myTest\\text.txt) " << endl;
		cin >> s2;
		rename(s1.c_str(), s2.c_str());
		cout << "Файл " << s1 << " перемещен в " << s2 << endl;


		break;

	case 5:
		cout << "Введите имя файла в текущем каталоге:(test.txt)" << endl;
		cin >> s1;
		fin.open(s1);
			if (!fin.is_open())
			{
				cout << "Error open file! \n";
			}
			else {
				cout << "File open! \n";
				string str;
				while (!fin.eof()) {
					getline(fin, str);
					cout << str << endl;
				}
			}
			fin.close();
		break;
	}

	return 0;
}


