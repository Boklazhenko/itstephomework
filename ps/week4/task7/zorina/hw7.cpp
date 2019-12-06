// Напишите программу, которая выполняет поэлементную сумму двух массивов и результат заносит в третий массив
//

#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int ar1[size] = { 32,34,-4,65,4 };
	int ar2[size] = { 43,5,9,12,34 };
	int ar3[size] = {};
	for (int i = 0; i < size; ++i) {
		ar3[i] = ar1[i] + ar2[i];
	}
	for (int i = 0; i < size; ++i)
		cout << ar3[i] << " ";
}


