#include<iostream>
using namespace std;
int main()
{
	int res = 0;
	int n1, n2, n3;
	for (int i = 100; i <= 999; i++)
	{
		n1 = i / 100;
		n2 = i % 10;
		n3 = (i % 100) / 10;
		if (n1 == n2|| n2 == n3 || n3 == n1)res++;
	}
	cout << "result:" << res << endl;
}