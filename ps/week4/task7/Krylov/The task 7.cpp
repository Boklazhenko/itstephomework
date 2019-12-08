#include <iostream>

using namespace std;

int main()
{
	const int n = 5;
	int firstArr[n] = { 1, 2, 3, 4, 5 };
	int secondArr[n] = { 6, 7, 8, 9, 10 };
	int thirdArr[n];

	for (int i = 0; i < n; ++i)
	{
		thirdArr[i] = firstArr[i] + secondArr[i];
		cout << thirdArr[i] << endl;
	}

}
