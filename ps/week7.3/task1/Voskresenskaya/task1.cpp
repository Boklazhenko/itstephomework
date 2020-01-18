

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int const size = 10;
	int ar1[size];
	int ar2[size];

	int* pArr1 = ar1;
	int* pArr2 = ar2;

	for (int i = 0; i < size; ++i)
	{
		*(pArr1+i) = rand() % 100;
	}

	for (int i = 0; i < size; ++i)
	{
		cout << *(pArr1 +i) << " ";
	}
	cout << endl;

	for (int i = 0; i < size; ++i)
	{
		*(pArr2 + i) = *(pArr1 + i);
	}

	for (int i = 0; i < size; ++i)
	{
		cout << *(pArr2 + i) << " ";
	}
	return 0;
}



