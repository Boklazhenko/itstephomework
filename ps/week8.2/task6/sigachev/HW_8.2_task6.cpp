//Пользователь вводит строку.Определить количество букв, количество цифр и количество остальных символов, присутствующих в строке.
//Рекомендации:
//Для проверки, что символ является числом, не обязательно сравнивать его со всеми 10 - ю цифрами, достаточно сравнить код 
//символа с диапазоном кодов цифр.Код символа 0 – 48, 1 – 49, 2 – 50 …. 9 – 57.

#include <iostream>
using namespace std;

int main()
{
	const int size = 256;
	int lineSize, counterLetter = 0, counterNumber = 0, counterOther = 0;
	char line[size];
	cout << "Input string: ";
	gets_s(line);
	lineSize = strlen(line);
	for (int i = 0; i < lineSize; ++i) {
		if ((48 <= ((int)line[i])) && (((int)line[i]) <= 57)) {
			++counterNumber;
		}
		if (((65 <= ((int)line[i])) && (((int)line[i]) <= 90))
			|| ((97 <= ((int)line[i])) && (((int)line[i]) <= 122))) {
			++counterLetter;
		}
		if (((0 <= ((int)line[i])) && (((int)line[i]) < 48))
			|| ((57 < ((int)line[i])) && (((int)line[i]) < 65))
			|| ((90 < ((int)line[i])) && (((int)line[i]) <= 255))) {
			++counterOther;
		}
	}
	cout << endl;
	cout << "Number of digits " << counterNumber << endl;
	cout << "Number of letters " << counterLetter << endl;
	cout << "Number of other characters" << counterOther << endl;

}