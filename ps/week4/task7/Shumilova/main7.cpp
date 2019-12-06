// Задание 7. (неделя 4)
//Напишите программу, которая выполняет 
//поэлементную сумму двух массивов 
//и результат заносит в третий массив


#include <iostream>
using namespace std;
int main()
{
	const int size = 5;
	int first_array[size];
	int second_array[size];
	int amount_array[size];

	cout << "Enter first array: \n"; //введите первый массив
	for (int i = 0; i < size; ++i)
		cin >> first_array[i];

	cout << "Enter second array: \n"; // введите второй массив
	for (int i = 0; i < size; ++i)
		cin >> second_array[i];
	
	for (int i = 0; i < size; ++i)
		amount_array[i] = first_array[i] + second_array[i];
		
	cout << "\nSum of two arrays: "; //сумма двух массивов:
	for (int i = 0; i < size; ++i)
	{
		cout << amount_array[i] << ", ";
	}
	cout << "\n\n";
	
}

