// Написать программу, которая заменяет все символы точки "." 
//в строке, введенной пользователем, на символы восклицательного знака "!".


#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	for (int i = 1; i < str.size(); ++i)
	{
		if (str[i] != '.')
		{
			continue;
		}
		else
		{
			str[i] = '!';
		}
	}
	cout << str;
	return 0;
}
