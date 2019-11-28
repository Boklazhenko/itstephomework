#include <iostream>
using namespace std;
int main()
{
	int n1 = 0, n2 = 0, n3 = 0;

	int res = 0;
	for (int i = 100; i <= 999; i++)
	{
		n1 = i / 100;
		n2 = (i / 10) % 10;
		n3 = i % 10;

		if (n1 != n2 && n2 != n3 && n1 != n3)
		{
			res++;
		}
	}
	cout <<"result: " << res << endl;
	
}
