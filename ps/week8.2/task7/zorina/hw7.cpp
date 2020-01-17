// Дана строка символов. Заменить в ней все пробелы на табуляции.
//

#include <iostream>
using namespace std;

int main()
{
	char str[256] = "To be or not to be";
	int size = 0;

	for (int i = 0; str[i] != '\0'; ++i) {
		++size;
	}
	for (int i = 0; i < size; ++i)
	{
		if (str[i] == ' ')
			str[i] = '\t';
	}
	cout << str;
}
