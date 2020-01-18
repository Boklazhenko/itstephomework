#include <iostream>
#include <stdlib.h>
#include <time.h>

void print(int arr[], int size);
void merger(int arrA[], int sizeA, int arrB[], int sizeB, int mergArr[]);


int main()
{
	std::cout << "Enter lenth A: ";
	int a;
	std::cin >> a;
	int* arrA = new int[a];
	std::cout << "Enter lenth B: ";
	int b;
	std::cin >> b;
	int* arrB = new int[b];
	srand(time(nullptr));
	for (int i = 0; i < a; ++i)
		arrA[i] = rand() % 10;
	for (int x = 0; x < b; ++x)
		arrB[x] = rand() % 10;
	std::cout << "Array A:\n";
	print(arrA, a);
	std::cout << "Array B:\n";
	print(arrB, b);
	int size = a + b;
	int* mergeArr = new int[size];
	merger(arrA, a, arrB, b, mergeArr);
	std::cout << "Array A + B:\n";
	print(mergeArr, size);
	delete[] arrA, arrB, mergeArr;
}

void print(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void merger(int arrA[],int sizeA,int arrB[],int sizeB, int mergArr[]){
    for (int a = 0; a < sizeA; ++a)
        mergArr[a] = arrA[a];
    for (int b = 0; b < sizeB; ++b)
        mergArr[sizeA + b] = arrB[b];
}
