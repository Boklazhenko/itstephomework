#include <iostream>
#include <stdlib.h>

int main()
{
	char line[] = "saippuakivikauppias";
	int size = strlen(line);
	//strlwr(line);				//не работает тоже устаревшая функция выдает ошибку
	int space = ' ';
	int palindrome = (size - 1) / 2;
	int count = 0;
	int index = size - 1;
	for (int i = 0; i < size / 2; ++i) {
		if (line[i] == line[index - i])
			count++;
	}
	count == palindrome ? std::cout << "Line is palindrome" : std::cout << "Line is not palindrome";
}