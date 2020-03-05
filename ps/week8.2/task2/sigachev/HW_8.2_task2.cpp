//Написать функцию, которая удаляет из строки все вхождения в нее заданного символа
#include <iostream>
using namespace std;

void deleteSimbol(char* line, int size, char symb) {
	char* line2 = new char[size];
	for (int j = 0, i = 0; j < size + 1;) {
		if (line[j] != symb) {
			line2[i] = line[j];
			++i;
			++j;
		}
		else {
			++j;
		}
	}
	cout << line2 << endl;
	delete[] line2;		// Освободил память. Не уверен, нужно или нет?
}

void main() {
	char str[] = "Hello, world!";
	int counter;
	char symbol;
	counter = strlen(str);
	cout << str << endl;
	cout << "Enter symbol: ";
	cin >> symbol;
	deleteSimbol(str, counter, symbol);
}