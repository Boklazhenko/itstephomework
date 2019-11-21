#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int count = 1;
	while (count <= 1001)
	{
		sum += count;
		count++;
	}
	float result = sum / (float)count;

    cout << "Average sum from 0 to 1000 = " << result;
}
