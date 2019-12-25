// Задание 7. (неделя 6)
// Написать функцию, определяющую количество положительных, 
// отрицательных и нулевых элементов передаваемого ей массива

#include <iostream>
//#include <stdlib.h>
using namespace std;

void findNumber(int array[], int size)
{
	int positive = 0; int negative = 0; int zero = 0;
	for (int i = 0; i < size; ++i)
	{
		if (array[i] > 0) ++positive;
		if (array[i] < 0) ++negative;
		if (array[i]==0) ++zero;
	}
	cout << "Number of positive elements: " << positive<<endl;
	cout << "Number of negative elements: " << negative << endl;
	cout<<	"Number of zero: "	<< zero<<endl;
	return;
}
int main()
{
	const int size = 10;
	int array[size] = { 21,0,50,-9,0,17,-9,3,4 };
	for (int i = 0; i < size; ++i)
		cout << array[i] << "\t";
	findNumber(array, size);
}

