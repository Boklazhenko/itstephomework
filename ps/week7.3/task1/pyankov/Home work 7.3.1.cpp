#include <iostream>


using namespace std;

int main()
{

	const int arrSize = 10;
	int arrOne[arrSize] = { 1,2,3,4,5,6,7,8,9,10 };
	int arrTwo[arrSize];

	int* pArrOne = arrOne;
	int* pArrTwo = arrTwo;


	for (int i = 0; i < arrSize; ++i)
	{
		*(pArrTwo + i) = *(pArrOne + i);
	}


	for (int i = 0; i < arrSize; ++i)
	{
		cout << *(arrTwo + i) << " ";
	}


	cin.get();
	system("pause");
	return 0;
}
