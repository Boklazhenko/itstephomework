// Написать программу, которая заменяет все символы точки "." в строке, введенной пользователем, на символы восклицательного знака "!".
//

#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	char str[256];
	cout << "Input the text\n";
	cin.getline(str, 256);
	for (int i = 0; str[i] != '\0'; ++i) {
		++size;
	}
	for (int i = 0; i < size; ++i)
	{
		if (str[i] == '.')
			str[i] = '!';
	}

	cout << str;
}