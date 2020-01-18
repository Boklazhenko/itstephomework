#include <iostream>

using namespace std;

void insertSymbol(char *line, int size, int indexToAdd, char symbolToAdd)
{
	for (int i = size; i > indexToAdd - 2; --i)
	{
		line[i + 1] = line[i];
	}
	line[indexToAdd - 1] = symbolToAdd;
}

int main()
{
	int indexToAdd, size = 0;
	char line[256], symbolToAdd;
	cout << "Enter your line: \n";
	cin.getline(line, 256);
	cout << "Enter your symbol: \n";
	cin >> symbolToAdd;
	cout << "Enter index to add: \n";
	cin >> indexToAdd;

	while (line[size])//считаем размер строки
	{
		++size;
	}

	insertSymbol(line, size, indexToAdd, symbolToAdd);

	cout << line << "\n";

	return 0;
}