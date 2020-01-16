#include <iostream>
#include <stdlib.h>
#include <time.h>

void print(int arr[], int size);
void merger(int arrA[], int sizeA, int arrB[], int sizeB, int mergArr[]);
void quickSort(int arr[], int size);
void copyWithoutDuplicates(int filingArr[], int& sizeF, int arrA[], int sizeA, int arrB[], int sizeB);
void rewriting(int filingArr[], int& sizeF, int arrForCopy[], int sizeForCopy);


int main()
{
	std::cout << "Enter lenth A: ";
	int a;
	std::cin >> a;
	int* pArrA = new int[a];
	std::cout << "Enter lenth B: ";
	int b;
	std::cin >> b;
	int* pArrB = new int[b];
	srand(time(nullptr));
	for (int i = 0; i < a; ++i)
		pArrA[i] = rand() % 10;
	for (int x = 0; x < b; ++x)
		pArrB[x] = rand() % 10;
	print(pArrA, a);
	print(pArrB, b);
	int sizeAB = a + b;
	int sizeF = sizeAB;
	int* pFilingA = new int[sizeF];
	copyWithoutDuplicates(pFilingA, sizeF, pArrA, a, pArrB, b);
	std::cout << "Elements of array A that are not included in array B: \n";
	print(pFilingA, sizeF);
	// ищем числа не вошедшие в массив А
	int sizeFb = sizeAB;
	int* pFilingB = new int[sizeFb];
	copyWithoutDuplicates(pFilingB, sizeFb, pArrB, b, pArrA, a);
	//ищем числа не пошедшие в Б
	std::cout << "Elements of array B that are not included in array A\n";
	print(pFilingB, sizeFb);
	int mergSize = sizeF + sizeFb;
	int* pMergArr = new int[mergSize];
	merger(pFilingA, sizeF, pFilingB, sizeFb, pMergArr);
	//сливаем оба массива в один
	quickSort(pMergArr, mergSize);
	//сортируем для удобства
	
	rewriting(pFilingA, sizeF, pMergArr, mergSize);
	//убираем повторы
	std::cout << "Arrays A and B that are not common to them: \n";
	print(pFilingA, sizeF);
	delete[] pArrA, pArrB, pMergArr, pFilingA, pFilingB;

}
void print(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void merger(int arrA[], int sizeA, int arrB[], int sizeB, int mergArr[]) {
	for (int a = 0; a < sizeA; ++a)
		mergArr[a] = arrA[a];
	for (int b = 0; b < sizeB; ++b)
		mergArr[sizeA + b] = arrB[b];
}

void quickSort(int arr[], int size) {
	int left = 0, right = size - 1;
	int temp, centr;
	centr = arr[size / 2];
	do {
		while (arr[left] < centr)
			left++;
		while (arr[right] > centr)
			right--;
		if (left <= right) {
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			++left;
			--right;
		}
	} while (left <= right);
	if (right > 0)
		quickSort(arr, right + 1);
	if (size > left)
		quickSort(arr + left, size - left);
}

void copyWithoutDuplicates(int filingArr[], int& sizeF, int arrA[], int sizeA, int arrB[], int sizeB) {
	uint16_t count = 0;
	int temp;
	int previous = arrB[0];
	for (int a = 0; a < sizeA; ++a) {
		bool duplicate = false;
		for (int b = 0; b < sizeB; ++b) {
			if (arrA[a] == arrB[b]) {
				duplicate = true;
				break;
			}
			else {
				temp = arrA[a];
			}
		}
		if (!duplicate && temp != previous) { // так и не придумал как при певой итерации не вылетать за пределы массива
			previous = temp;
			filingArr[count++] = temp;
		}
	}
	sizeF = count;
}

void rewriting(int filingArr[], int& sizeF, int arrForCopy[], int sizeForCopy) {
	uint16_t count = 0;
	int temp;
	for (int a = 0; a < sizeForCopy; ++a) {
		temp = arrForCopy[a];
		if (filingArr[count - 1] < temp)
			filingArr[count++] = temp;
	}
	sizeF = count;
}
