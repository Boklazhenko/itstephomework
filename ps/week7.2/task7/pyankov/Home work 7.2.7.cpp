// Сам не смог, нагуглил вот это решение.


#include <iostream>



using namespace std;

int min10(int a[100], int n, int& p)
{
	int sum = 0;
	for (int i = n; i < n + 10; ++i) {
		sum += a[i];
		cout << "n: " << n << "; s: " << sum << endl;
	}

	if (100 - n == 10)
	{
		p = n;
		return sum;
	}
	else
	{
		int s1 = min10(a, n + 1, p);
		if (sum <= s1)
		{
			p = n;
			return sum;
		}
		else return s1;
	}
}

int main()
{
	int a[100];
	int p;


	for (int i = 0; i < 100; ++i)
	{
		a[i] = rand() % 100;
	}


	for (int i = 0; i < 100; ++i) {
		cout << a[i] << '\t';
		cout << endl << endl;
	}

	min10(a, 0, p);

	cout << "Minimum position: " << p << endl << endl;

	system("pause");
}



