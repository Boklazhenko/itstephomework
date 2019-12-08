#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int arraySize = 12;			// указывает размер массива в данном случае 12 месяцев 			
	int A[arraySize];// объявление массива
	
	cout << "Введите прибыль за каждый  месяц. \n\n";
	for (int j = 0; j < arraySize; ++j)		//создаю цикл повторяющийся 12 раз (arraySize)
	{
		cout << "Месяц " << j + 1 << " = ";			//ввод элементов массива
		cin >> A[j];
	}
	int  secondMonth = A[0];// индекс максимального значения
	int firstMonth = A[0];// индекс минимального значения
	cout << "\nВведите первый месяц диапазона ";
	cin >> firstMonth;
	cout << "\nВведите второй месяц диапазона ";
	cin >> secondMonth;
	
	int index_max = 0; //максимальное значение в диапазоне
	int index_min = 0;  // минимальное значение в диапазоне
	int min_elem = A[firstMonth];// минимальное значение в массиве
	int max_elem = A[secondMonth]; // максимальное значение в массиве

	for (int j = firstMonth; j < secondMonth; ++j)
	{
		if (max_elem < A[j])
		{
			max_elem = A[j];
			index_max = j+1; // +1 чтобы значение шло с единицы.
		}
		
		if (min_elem > A[j])
		{ 
			min_elem = A[j];
			index_min = j+1;  // +1 чтобы значение шло с единицы.
		}

	}
	cout << "\n\t********************************************\n\n";
	cout << "Максимальная прибыль была в  " << index_max << " месяце и составила : " << max_elem << " руб." << '\n';

	cout << "\nМинимальная прибыль  была в  " << index_min << " месяце и составила : " << min_elem << " руб." << '\n';

	return 0;
}
