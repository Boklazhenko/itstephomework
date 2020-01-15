

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	srand(time(NULL));
	int const size = 10;
	int arr[size];
	int* pArr = arr;

	for (int i = 0; i < size; ++i)
	{
		*(pArr + i) = rand() % 100;
	}
	for (int i = 0; i < size; ++i)
	{
		cout <<*(pArr + i) << " ";
	}
	cout << endl;
	int Sum = 0;
	for (int i = 0; i < size; ++i)
	{
		Sum += *(pArr + i);
	}
	cout << "Sum=" << Sum << endl; 
	return 0;
}

