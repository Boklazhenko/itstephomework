#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const int size = 5;
	int first_array[size];
	int second_array[size];
	int amount_array[size];

	cout << "Введите первый массив: \n"; 
	for (int i = 0; i < size; ++i)
		cin >> first_array[i];

	cout << "Введите второй массив: \n"; 
	for (int i = 0; i < size; ++i)
		cin >> second_array[i];

	for (int i = 0; i < size; ++i)
		amount_array[i] = first_array[i] + second_array[i];

	cout << "\nСумма двух массивов: "; 
	for (int i = 0; i < size; ++i)
	{
		cout << amount_array[i] << ", ";
	}
	cout << "\n\n";
	return 0;

}