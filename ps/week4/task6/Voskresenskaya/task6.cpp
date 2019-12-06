

#include <iostream>
using namespace std;
int main()
{

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int firstArr[5];
	int secondArr[5];

	for (int i = 0; i < 10; ++i)
	{

		if (i < 5)

		{
			firstArr[i] = arr[i];
			cout << "firstArr" << firstArr[i] << endl;
		}
	}

	for (int i = 0; i < 5; ++i)
	{
			secondArr[i] = arr[i+5];
			cout << "secondArr" << secondArr[i] << endl;
		
	}
	return 0;
}



