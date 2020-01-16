#include <iostream>

using namespace std;

void changeSymbol(char* line, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (line[i] == '.')
		{
			line[i] = '!';
		}
	}
}

int main()
{
	int size = 0;
	char line[256];
	cout << "Enter your line: \n";
	cin.getline(line, 256);

	while (line[size])//считаем размер введённой строки
	{
		++size;
	}

	changeSymbol(line, size);

	cout << line << endl;

	return 0;
}
