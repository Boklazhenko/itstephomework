#include <iostream>

void insertSimb(char line[], int& size, int index, char simb) {
	++size;
	for (int i = size - 1; i > index; --i) {
		line[i] = line[i - 1];
	}
	line[index] = simb;
}

int main()
{
	char simb = 'A';
	int size = 13;
	char* line = new char[size];
	line = "Hello World!";
	insertSimb(line, size, 4, simb);
	std::cout << line;
}