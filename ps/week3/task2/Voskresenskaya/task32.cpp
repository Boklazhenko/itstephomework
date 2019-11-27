

#include <iostream>
using namespace std;

int main()
{

	int i1, i2, i3, i = 100, k = 0;

	do
	{
		i1 = i / 100;
		i2 = i % 10;
		i3 = (i % 100) / 10;
		if (i1 != i3 && i1 != i2 && i1 != i2)
			k++;
		{++i; }
	}

	while (i >= 100 && i <= 999);
	cout << k << endl;

	return 0;
}

