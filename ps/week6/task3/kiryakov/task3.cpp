#include <iostream>
using namespace std;

int digit(int x, int y)
{
	for (int i = x; i < y; i++)
	{
		int result = 0;
		for (int j = 1; j < i; j++)
		{
			if ((i % j) == 0)
			{
				result += j;
			}
		}
		if (result == i && result)
		{
			cout << result << " \n";

		}
	}
	return 0;
}

int main()
{
	int res = digit(0, 9000);

}