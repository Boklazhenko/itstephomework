// hw9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
	string str1 = "niagara o roar again";
    int size = 0;
	for (int i = 0; str1[i] != '\0'; i++)
	{if(str1[i]!=' ')
		size++;
	}
	string str2;

	for (int i = 0; str1[i] != '\0'; ++i)

		if (str1[i] != ' ')
			 str2 += str1[i];

	str1 = str2;
	for (int i = 0;  i<size / 2; ++i)
	{
		int tmp = str2[i];
		str2[i] = str2[size - 1 - i];
		str2[size - 1 - i] = tmp;
	}

	bool ok = true;
	for (int i = 0; i < size; ++i)
	{
		if (str2[i] != str1[i]) ok = false;
			
	}
	if (ok == true)
		cout << "This line is a palindrome" << endl;
	else cout << "This line is not a palindrome" << endl;
	return 0;
}