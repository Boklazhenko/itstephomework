//В одномерном массиве, состоящем из N вещественных чисел вычислить: • Сумму отрицательных элементов. 
//• Произведение элементов, находящихся между min и max элементами. • Произведение элементов с четными номерами.
//• Сумму элементов, находящихся между первым и последним отрицательными элементами.


#include <iostream>
using namespace std;

int main()
{
		const int size = 10;	
	int ar[size]={1,3,-6,3,-7,78,9,87,9,-123};
	
	//считаем сумму отрицательных элементов
	int sum=0; 
	for (int i = 0; i < size; ++i) {
		if (ar[i] < 0)
			sum += ar[i];
			}
cout << "Sum of negativ elements " << sum << "\n";

//считаем произведение элементов, находящихся между min и max элементами
int temp,min = ar[0], max = ar[0], indexOfMin, indexOfMax;
for (int i = 0; i < size; i++) {
		if (max < ar[i]) {
			max = ar[i];
			indexOfMax = i;
		}
		if (min > ar[i]) {
			min = ar[i];
			indexOfMin = i;
		}
	}
	if (indexOfMax < indexOfMin) {//если минимальный идет после максимального, меняем их местами
		temp = indexOfMax;
		indexOfMax = indexOfMin;
		indexOfMin = temp;
	}
	int mult = 1;
	for (int i = indexOfMin; i <= indexOfMax; i++) {
		mult *= ar[i];
	}
	cout <<"Multiplication of elemets between min and max "<< mult<<"\n";
	
	//считаем произведение элементов с четными номерами
	int mult1 = 1;
	for (int i = 0; i < size; ++i)
		if (i % 2 == 0)
			 mult1 *= ar[i];
	cout <<"Multiplication of elemets with even indexes "<< mult1<<"\n";
	
	//cумму элементов, находящихся между первым и последним отрицательными элементами
	int sum1 = 0, firstNegElement=0, lastNegElement=0;
	int indexOfFirst, indexOfLast;
	for (int i = 0; i < size; i++) {
		if (ar[i] < 0) {
			firstNegElement = ar[i];
			indexOfFirst = i;
			break;
		}
	}
	for (int i = size - 1; i > 0; i--) {
		if (ar[i] < 0) {
			lastNegElement = ar[i];
			indexOfLast = i;
			break;
		}
	}
		for (int i = indexOfFirst; i <= indexOfLast; i++)
		sum1 += ar[i];
	cout <<"Sum of elements between the first and the last negative elements "<< sum1 << endl;
	}





