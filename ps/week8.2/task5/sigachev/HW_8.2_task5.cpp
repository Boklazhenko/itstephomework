//Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается в строке.

#include <iostream>
using namespace std;

void main()
{
	const int size = 256;
	int lineSize, counter = 0;
	char symbol;
	char line[size];
	cout << "Input string: ";
	gets_s(line);
	cout << "Enter symbol: ";		// Пробелы не считает(
	cin >> symbol;
	cout << endl;
	lineSize = strlen(line);
	for (int i = 0; i < lineSize; ++i) {
		if (line[i] == symbol) {
			++counter;
		}
	}
	cout << "Symbol amount - " << counter << endl;
}