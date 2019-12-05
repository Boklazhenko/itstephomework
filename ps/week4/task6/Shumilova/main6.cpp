// Задание 6. (неделя 4)
//Написать программу, копирующую последовательно 
//элементы одного массива размером 10 элементов 
//в 2 массива размером 5 элементов каждый.

#include <iostream>
using namespace std;
int main()
{
	const int size = 10;
	int big_array[size] = { 1,3,5,7,9,2,0,4,6,8 };
	int small_array[5];
	int little_array[5];
	
	cout << "Big array: "; 
	for (int i = 0; i < size; ++i)
	{
		cout << big_array[i] << ", ";//выводим Big array: 1,3,5,7,9,
	}
	
	cout << "\n\nSmall array: "; 
	for (int i = 0; i < 5; ++i)
	{
		small_array[i]=big_array[i];
		cout <<small_array[i]<<", ";//выводим Small array: 1,3,5,7,9,
	}
	cout << "\n\nLittle array: "; 
	for (int i = 0; i < 5; ++i)
	{
		little_array[i] = big_array[i+5];
		cout  << little_array[i] << ", ";//выводим Little array: 2,0,4,6,8,
	}
	cout << "\n\n";
	
}

