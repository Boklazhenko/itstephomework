//Написать функцию, которая удаляет из строки символ с заданным номером.

#include <iostream>
using namespace std;

void deleteSimbol(char* line, int size, int num) {
	char* line2 = new char[size];
	for (int i = 0; i < size; ++i) {
		if (i < num - 1) {
			line2[i] = line[i];
		}
		else {
			line2[i] = line[i + 1];
		}
	}
	cout << line2 << endl;
	delete[] line2;		// Освободил память. Не уверен, нужно или нет?
}

void main() {	
	char str[] = "Hello, world!";
	int num, counter;
	counter = strlen(str);
	cout << str << endl;
	while (true) {
		cout << "Enter symbol number: ";
		cin >> num;
		if (0 >= num || num > counter) {
			cout << "Your entered wrong number. Try again.\n";
		}
		else {
			break;
		}
	}
	deleteSimbol(str, counter, num);	
}