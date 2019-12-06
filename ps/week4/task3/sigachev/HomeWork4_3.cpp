// В одномерном массиве, заполненном случайными числами, определить
// минимальный и максимальный элементы.
#include <iostream>
using namespace std;

int main() {
	const int size = 9;
	double arr[size] = { 2,-6.2,1,-1.3,15.4,-4.3,7,6.5,7.8 };
	double max = arr[0], min = arr[0];
	for (int i = 1; i < size; ++i){
		if (max < arr[i]){
			max = arr[i];
		}
		if (min > arr[i]){
			min = arr[i];
		}
	} cout << "Maximum " << max << ".\nMinimum " << min << "." << endl;
}