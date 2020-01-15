#include <iostream>
using namespace std;
#include <time.h>

void main()

{
    const int M = 6;

	srand(time(0));

	int a[M], j = 0, tmp;

	for (int i = 0; i < M; i++) {

		a[i] = rand() % 10;

	}
	for (int i = 0; i < M; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < M - 1; i++) {

		tmp = a[i + 1];

		j = i;

		while (j >= 0 && a[j] > tmp) {

			a[j + 1] = a[j];

			j--;

		}

		a[j + 1] = tmp;

	}
	cout << "\n";
	for (int i = 0; i < M; i++)
		cout << a[i] << "\t";
	cout << "\n";

}
