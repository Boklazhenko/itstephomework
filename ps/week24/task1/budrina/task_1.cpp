//Дан текстовый файл.Удалить из него последнюю строку.
//Результат записать в другой файл.

#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main()
{
	ifstream fin("myFile.txt");
	ofstream fout("out.txt");
	string str;
	string str2;
	int k = 0;
	if (!fin.is_open()) {
		cout << "Error open file." << endl;
	}
	else {
		while (getline(fin, str))
		{
			k++;
			cout << str << "\n"; // сделала для наглядности

		}
		cout << "================================\n";
		fin.clear();
		fin.seekg(0);// Вовращаемся к началу файла
		for (int i = k - 1; i > 0; --i)
		{
			getline(fin, str2);
			fout << str2 << "\n";
			cout << str2 << "\n";   //для наглядности
		}
	}

	fin.close();
	fout.close();

	return 0;
}


