//Дан текстовый файл.Посчитать сколько раз в нем встречается 
//заданное пользователем слово.

#include <iostream> 
#include <fstream> 
#include <string> 
#include <sstream>

using namespace std;

int main()
{
	ifstream fin("myFile.txt");
	if (!fin.is_open())
		cout << " Unable to open file\n";

	else {
		string line, word, word1;
		stringstream ss;
		ss << fin.rdbuf();
		line = ss.str();

		int i = 0, count = 0;
		while (line[i])
		{
			if (line[i] == '.') line[i] = ' ';
			i++;
		}
		cout << "Word:\n";
		cin >> word1;

		stringstream words(line);
		while (words >> word)
		{
			if (word == word1) count++;
		}

		cout << "count=" << count << "\n";
	}

	fin.close();

	return 0;
}