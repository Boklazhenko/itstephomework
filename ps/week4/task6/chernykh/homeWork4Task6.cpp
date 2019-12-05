#include <iostream>

using namespace std;

int main()
{
	const int size = 10;
	int firstArray[size] = { 11,22,33,44,55,66,77,88, 99, 127 };
	int secondArray[5];
	int thirdArray[5];

	for (int i = 0; i < size; ++i)
	{
		firstArray[i];

		if (i < 5)
		{
			secondArray[i] = firstArray[i];

			cout << "second: " << secondArray[i] << endl;//Run-Time Check Failure #2 - Stack around the variable 'secondArray' was corrupted.
		}
		if (i >= 5)
		{
			thirdArray[i] = firstArray[i];

			cout << "third: " << thirdArray[i] << endl;
			//цифры выводятся, но я не знаю почему ошибка
		}
	}
}

