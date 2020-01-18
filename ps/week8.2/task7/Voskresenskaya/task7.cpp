// Дана строка символов. Заменить в ней все пробелы на табуляции.


#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str="In this sentence, you need to change the space character on the tab";
	for (int i = 1; i < str.size(); ++i)
	{
		if (str[i] != ' ')
		{
			continue;
		}
		else
		{
			str[i] = '\t';
		}
	}
	cout << str;
	return 0;
}

