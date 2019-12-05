//Написать программу, копирующую последовательно элементы одного массива размером 10 элементов в 2 массива размером 5 элементов каждый.
//

#include <iostream>
using namespace std;

int main()
{
	const int size1 = 10, size2 = 5;
	int ar1[size1] = { 1,3,657,877,34,23,67,954,-10,65 };
	int ar2[size2] = {};
	int ar3[size2] = {};
	for (int i = 0; i < size1; i++) {
		if (i < 5)
			ar2[i] = ar1[i];
		else
			ar3[i - 5] = ar1[i];
	}
	for (int i = 0; i < size2; i++) 
		cout << ar2[i] << " ";
	cout << endl;
		for (int i = 0; i < size2; i++)
		cout << ar3[i] << " ";
	}

