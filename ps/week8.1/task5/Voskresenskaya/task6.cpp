// решение задачи 5: Дан массив: А[M] (M вводится с клавиатуры). 
//Необходимо удалить из массива четные или нечетные значения. 
//Пользователь вводит данные в массив, а также с помощью меню 
//решает, что нужно удалить.
#include <iostream>
#include <cstdlib>
using namespace std;

void fillArray(int* const arr, const int size)
{

	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 100;
	}
}
void showArray(int* const arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void distOddEveArray(int* const arr, const int size)
{

	cout << "Enter 1 if you want to delete odd values ​​or 2 if you want to delete odd values" << endl;
	int a;
	cin >> a;
	if (a == 1)
	{
		int count = 0;
		for (int i = 0; i < size; ++i)
		{
			if (arr[i] % 2 != 0)
			{
				++count;
			}
		}
		int firstSize = count;
		int* firstArr = new int[count];
		int a = 0;
		for (int i = 0; i < size; ++i)
		{
			if (arr[i] % 2 != 0)
			{
				firstArr[a] = arr[i];
				++a;
			}
		}
		showArray(firstArr, firstSize);
		delete[]firstArr;
	}
	else if (a == 2)
	{
		int count = 0;
		for (int i = 0; i < size; ++i)
		{
			if (arr[i] % 2 == 0)
			{
				++count;
			}
		}
		int firstSize = count;
		int* firstArr = new int[count];
		int a = 0;
		for (int i = 0; i < size; ++i)
		{
			if (arr[i] % 2 == 0)
			{
				firstArr[a] = arr[i];
				++a;
			}
		}
		showArray(firstArr, firstSize);
		delete[]firstArr;
	}
	else
	{
		cout << "error" << endl;
	}
}
int main()
{
    int M;
	cout << "Enter  array size" << endl;
	cin >> M;
	int* firstArr = new int[M];
	fillArray(firstArr, M);
	showArray(firstArr, M);
	distOddEveArray(firstArr, M);
	return 0;
}


