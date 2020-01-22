#include <iostream>
#include <cstdlib>
using namespace std;
int min10(int a[], int n, int& p)

{
	const int sz = 100;
	int s = 0;
	for (int i = n; i < n + 10; ++i)
		s += a[i];
	cout << "n: " << n << "; s: " << s << endl;
	if (sz - n == 10)
	{
		p = n;
		return s;
	}
	else
	{
		int s1 = min10(a, n + 1, p);
		if (s <= s1)
		{
			p = n;
			return s;
		}
		else return s1;
	}
}

int main()
{
	const int sz = 100;
	int a[sz];
	int p;
	int n = 1; 
	for (int i = 0; i < sz; ++i)
		a[i] = rand() % 10;
	for (int i = 0; i < sz; ++i)
		cout << a[i] << " ";
	cout << endl << endl;

	min10(a, n, p);

	cout << "Minimum position: " << p << endl << endl;


}