#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int firstArr[5][10];
	int secondArr[5][5];
	srand(time(NULL));
	for (int y = 0; y < 5; ++y)
	{
		for (int x = 0; x < 10; ++x)
		{
			firstArr[y][x] = rand() % 50;
		}

	}
	for (int y = 0; y < 5; ++y)
	{
		for (int x = 0; x < 10; x += 2)
		{
			int count = 0;
			secondArr[y][count] = firstArr[y][x] + firstArr[y][x + 1];
			cout << secondArr[y][count] << " ";
			count++;
		}
		cout << endl;
	}
}