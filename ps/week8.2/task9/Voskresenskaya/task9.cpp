// Дана строка символов. Необходимо проверить является ли эта строка палиндромом.

#include <iostream>
using namespace std;

int main()
{
	int const size = 20;
	char str[]="Niagara o roar again";
	char str2 [size];

	for (int i = 0; i <size; ++i)
	{
		str2[i] = str[i];
	}
	for (int i = 0; i < size / 2; ++i)
	{
		int tmp = str2[i];
		str2[i] = str[size - 1 - i];
		str[size - 1 - i] = tmp;
	}
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (str2[i] = str[i])
		++count;
	}
	if (count = size)
		cout << "This line is a palindrome" << endl;
	else cout << "This line is not a palindrome" << endl;
	return 0;
}

