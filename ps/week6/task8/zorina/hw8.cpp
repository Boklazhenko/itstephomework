// Написать перегруженные функции и протестировать их в основной программе:
// Нахождения максимального значения в одномерном массиве;
// Нахождения максимального значения двух целых;
// Нахождения максимального значения трёх целых;
//

#include <iostream>
using namespace std;
int findTheMax(int size, int arr[])
{
	int max = arr[0];
	for (int i = 0; i < size; ++i) 
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
int findTheMax(int num1, int num2)
{
	int max = num1;
	if (num1 < num2)
		max = num2;
	return max;
}
int findTheMax(int num1, int num2, int num3)//я решила создать массив из трех элементов и так найти максимум из 3 целых чисел
{
	int arr[] = { num1,num2,num3 };
	int max = arr[0];
	for (int i = 0; i < 3; ++i)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int main()
{
	const int size = 5;
	int arr[5] = { 12,45,64,345,32 };
	cout << "Maximal array`s element is " << findTheMax(5, arr)<<endl;
	cout << "Maximal out of two numbers is "<<findTheMax(34, 2)<<endl;
	cout << "Maximal out of three numbers is " << findTheMax(24, 56, 323)<<endl;
}

