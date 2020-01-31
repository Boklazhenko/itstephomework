//Написать функцию, которая вставляет в строку в указанную позицию заданный символ.

// Не совсем понял условие, сделал два варианта

#include <iostream>
using namespace std;

//************  Раздвигает строку вставляя символ  ***********************

void insertSimbol(char* line, int size, char symb, int post) {
	char* line2 = new char[size];
	for (int i = 0, j = 0; i < size + 2; ++i, ++j) {
		if (i == (post - 1)) {
			line2[i] = symb;
			--j;
		}
		else {
			line2[i] = line[j];
		}
	}
	cout << line2 << endl;
	//delete[] line2;		// Пришлось закоментировать, т.к. VS выдавал ошибку
}
//*************   замещает символ   *************************

void replaceSimbol(char* line, int size, char symb, int post) {
	char* line2 = new char[size];
	for (int i = 0; i < size + 1; ++i) {
		if (i == (post - 1)) {
			line2[i] = symb;
		}
		else {
			line2[i] = line[i];
		}
	}
	cout << line2 << endl;
	//delete[] line2;		// Пришлось закоментировать, т.к. VS выдавал ошибку
}

void main() {
	char str[] = "Hello, world!";
	int counter, position;
	char symbol;
	counter = strlen(str);
	cout << str << endl;
	cout << "Enter symbol: ";  
	cin >> symbol;
	cout << "Enter position: ";  // Проверку на корректность введеной указанной позиции символа не стал делать
	cin >> position;
	cout << endl;
	insertSimbol(str, counter, symbol, position);
	replaceSimbol(str, counter, symbol, position);
}