// Пользователь вводит строку символов и искомый символ, посчитать
//сколько раз он встречается в строке.

#include <iostream>
using namespace std;

 int countСhar(char *str, char character)
{
	int i = 0, count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == character)
		{
			++count;
		}
			++i;
	}
	return count;
}

int main()
{
	const int size = 100;
	char arr[size];
	char a;
	cout << "Enter any string but no more then " << size << "symbols" << endl;
	cin >> arr;
	cout << "Enter the character you want to count" << endl;
	cin >> a;
	cout << countСhar(arr, a);
	return 0;

}


