#include <iostream>

void deleteSimbFull(char str[], int& size, char simb) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] == simb) {
			--size;
			continue;
		}
		str[count++] = str[i];
	}
	str[count] = '\0';							//в итоге размерность строки не менялась потому добавил size
}

int main()
{
	int size = 13;
	char line[13] = "Hello World!";
	char simb = 'l';
	deleteSimbFull(line, size, simb);
	std::cout << line << std::endl;
}