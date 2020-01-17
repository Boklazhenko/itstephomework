//Написать функцию, которая удаляет из строки все вхождения в нее заданного символа
//

#include <iostream>
using namespace std;
string removeSymbol(char symb, string str) {
	string temp = "";
	for (int i = 0; i < str[i] != '\0'; ++i)
	{
		if (str[i] != symb) {
			temp += str[i];
		}
	}
	str = temp;

	return str;
}


int main()
{
	cout << removeSymbol('a', "abca");
}