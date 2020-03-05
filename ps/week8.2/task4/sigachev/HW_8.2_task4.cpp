//Написать программу, которая заменяет все символы точки "." в строке, введенной
//пользователем, на символы восклицательного знака "!".

#include <iostream>
using namespace std;
void main()
{
	const int size = 256;
	int counter;
	char line[size]; 
	cout << "Input string: ";
	gets_s(line);
	cout << endl; 
	counter = strlen(line);
	for (int i = 0; i < counter + 1; ++i) {
		if (line[i] == '.') {
			line[i] = '!';
		}
	}
	cout << line;
}