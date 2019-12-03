
#include <iostream>

int main()
{
	const int firstSize = 10;
	const int secondSize = 5;
	int firstArr[firstSize];

	for (int i = 0; i < firstSize; ++i)
		firstArr[i] = i;
	int secondArr[secondSize], thirdArr[secondSize];
	for (int i = 0; i < secondSize; ++i)
		secondArr[i] = firstArr[i];
	for (int i = 5; i < 10; ++i)
		thirdArr[i - 5] = firstArr[i];
}