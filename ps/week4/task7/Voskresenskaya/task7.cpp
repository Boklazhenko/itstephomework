
#include <iostream>
using namespace std;
int main()
{
	int firstarr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int secondarr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr[10];

	for (int i = 0; i < 10; ++i)
	{
		arr[i] = firstarr[i] + secondarr[i];
		cout << arr[i] << endl;
	}

	return 0;
}

