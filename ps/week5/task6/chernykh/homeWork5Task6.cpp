#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	const int size5 = 5, size10 = 10;

	int justArray[size5][size10], justArray2[size5][size5];

	for (int i = 0; i < size5; ++i)
	{
		for (int j = 0; j < size10; ++j)
		{
			justArray[i][j] = rand() % 50;
			cout << justArray[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\n\n";

	for (int i = 0; i < size5; ++i)
	{
		for (int j = 0; j < size10; j += 2)
		{
			int count = 0;
			justArray2[i][count] = justArray[i][j] + justArray[i][j + 1];
			cout << justArray2[i][count] << " ";
			++count;
		}
		cout << endl;
	}
}
