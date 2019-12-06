#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const int size = 10;
	int big_array[size] = { 2,5,7,6,0,1,3,4,8,9 };
	int firstSmall_array[5];
	int secondSmall_array[5];

	cout << "Большой массив: ";
	for (int i = 0; i < size; ++i)
	{
		cout << big_array[i] << ", ";//выводим big_array: 2,5,7,6,0,1,3,4,8,9
	}

	cout << "\n\nПервый малый массив: ";
	for (int i = 0; i < 5; ++i)
	{
		firstSmall_array[i] = big_array[i];
		cout << firstSmall_array[i] << ", ";//выводим firstSmall_array: 2,5,7,6,0
	}
	cout << "\n\nВторой малый массив: ";
	for (int i = 0; i < 5; ++i)
	{
		secondSmall_array[i] = big_array[i + 5];
		cout << secondSmall_array[i] << ", ";//выводим secondSmall_array: 1,3,4,8,9
	}
	cout << "\n\n";

}