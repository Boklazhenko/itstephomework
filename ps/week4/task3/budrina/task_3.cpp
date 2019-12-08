
#include <time.h>
#include <iostream>
using namespace std;
int main()
{
	int min;
	int max;
	const int size = 8;
	int ar[size];
	srand(time(NULL));
	for (int i = 0; i < size; ++i) {
		ar[i] = rand();					//заполняем массив случайными числами
		min = ar[0];
		max = ar[0];
		cout << ar[i] << endl;
	}
	for (int i = 0; i < size; ++i) {       
		if (ar[i] > max)
			max = ar[i];
		if (ar[i] < min)
			min = ar[i];
	}
	cout << "\nMin = " << min << endl;
	cout << "\nMax = " << max << endl;
	return 0;
}

	




