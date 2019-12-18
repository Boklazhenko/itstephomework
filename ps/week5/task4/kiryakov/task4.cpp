#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	const int n = 18;
	int a[n], max, min, sum = 0, posc = 0, negc = 0, el = 0;
	cout << "массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 25 - 8;
		cout << a[i] << ' ';
		sum += a[i];
	}
	max = min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
		if (a[i] < 0)
			negc++;
		if (a[i] > 0)
			posc++;
		if (a[i] % 2 != 0)
			el++;
	}
	cout << "\nSum of all array elements: " << sum << endl;
	cout << "minimum array element: " << min << endl;
	cout << "maximum array element: " << max << endl;
	cout << "number of positive elements: " << posc << endl;
	cout << "number of negative elements: " << negc << endl;
	cout << "number of even elements: " << el << endl;
	cout << "the number of odd elements: " << n - el << endl;
	return 0;
}