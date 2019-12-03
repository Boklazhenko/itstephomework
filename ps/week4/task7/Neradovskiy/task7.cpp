#include <iostream>

int main()
{
	const int size = 5;
	int firstArr[size] = { 0, 1, 2, 3, 4 };
	int	secondArr[size] = { 5, 6, 7, 8, 9 };
	int sumArr[size];
	for (int i = 0; i < size; ++i)
		sumArr[i] = firstArr[i] + secondArr[i];
	
}		