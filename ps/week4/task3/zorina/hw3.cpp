// В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы.

#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int ar[size]={1,4,675,4234,-65};//т.к. мы не знаем функции, заполнила массив случайными числами, вообще посмотрела, что необходимо 
	                                 // использовать фунцию rand()
	int max = ar[0];
	int min = ar[0];
	for (int i = 1; i < size; ++i) {
		if (min > ar[i])
			min = ar[i];
		if (max < ar[i])
			max = ar[i];
	}
	cout << min << endl;
	cout << max << endl;
}

