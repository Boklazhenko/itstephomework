#include <iostream>

using namespace std;

int main()
{
	const int size = 5;
	int firstArray[size] = { 11,22,33,44,55 };
	int secondArray[size] = { 73,25,854,62,85 };
	int thirdArray[size];

	for (int i = 0; i < size; ++i)
	{
		thirdArray[i] = firstArray[i] + secondArray[i];
		
		cout << "Third array: " << thirdArray[i] << endl;
	}
}

