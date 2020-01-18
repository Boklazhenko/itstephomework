#include <iostream>
#include <stdlib.h>
#include <time.h>

int searchMinSumDipason(int arr[], int size, int& position);
//int searchMinSumDipason(int arr[], int size, int num, int& position);

int main()
{
	int count = 0;
	int p;
	srand(time(NULL));
	int const size = 100;
	int arr[size];
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 10;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	searchMinSumDipason(arr, size, p);

	std::cout << p << std::endl;
}

/*int searchMinSumDipason(int arr[], int size, int num, int& position)	//нашел решение в гугле, как работает вроде понял то что придумал
{																		// сам чуть ниже
	int sum = 0;
	for (int i = num; i < num + 10; ++i)
		sum += arr[i];
	//std::cout << "num: " << num << "; sum: " << sum << std::endl;
	if (size - num == 10)
	{
		position = num;
		return sum;
	}
	else
	{
		int sum2 = searchMinSumDipason(arr, size, num + 1, position);
		if (sum <= sum2)
		{
			position = num;
			return sum;
		}
		else
			return sum2;
	}
}
*/
int searchMinSumDipason(int arr[], int size, int& position) {
	int sum = 0;
	int index = size - 10;
	for (int i = size - 1; i > size - 11; --i) {
		sum += arr[i];
	}
	//std::cout << "Index: " << index << "; sum: " << sum << std::endl;
	if (size == 10) {
		position = index;
		return sum;
	}
	int sum2 = searchMinSumDipason(arr, size - 1, position);
	if (sum <= sum2) {
		position = index;
		return sum;
	}
	else
		return sum2;

}