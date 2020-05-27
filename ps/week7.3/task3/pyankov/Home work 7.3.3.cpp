#include <iostream>


using namespace std;

int main()
{

	const int arrSize = 5;
	int arrOne[arrSize] = { 1,2,3,4,5 };
	int arrTwo[arrSize];

	int* pArrOne = arrOne;
	int* pArrTwo = arrTwo;
	int* x = &arrOne[arrSize - 1];

	for (int i = arrSize; i > 0; --i)
	{
		int a = *pArrOne;
		*pArrTwo = *x;
		++pArrTwo;
		--x;

	}

	for (int i = 0; i < arrSize; ++i)
	{
		cout << arrTwo[i] << " ";
	}




	cin.get();
	system("pause");
	return 0;
}
