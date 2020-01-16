// Пользователь вводит строку. Определить количество букв, 
//количество цифр и количество остальных символов, присутствующих в строке.

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cout << "Enter offers" << endl;
	getline(cin, str);
	int countAlf = 0;
	int countDig = 0;
	int countSpac = 0;
	int countAlnum = 0;
	for (int i = 0; i < str.size(); ++i)
	{
		if (isalpha(str[i]))
		{
			++countAlf;
		}
		else if  (isdigit(str[i]))
		{
			++countDig;
		}
		else if (isspace(str[i]))
		{
			++countSpac;
		}
		else
		{
			++countAlnum;
		}
	}
	cout << "Number of letters in a sentence= " << countAlf<< endl;
	cout << "Number of digits in a sentence= " << countDig << endl;
	cout << "Number of supply gaps = " << countSpac << endl;
	cout << "Number of characters in a sentence = " << countAlnum << endl;
	return 0;
}

