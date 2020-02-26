//создать три файла : (function.h, function.cpp, prog.cpp)
//в файле function.cpp необходимо написать следующие функции для работы с массивом данных :
//а) функцию для заполнения массива случайными значениями; б) функцию для вывода значений массива на консоль; 
//в) функцию для поиска минимального элемента; г) функцию для поиска максимального элемента; д) функцию для сортировки; 
//е) функцию для редактирования значения массива.Данные функции необходимо написать для работы с массивом целых, действительных и символьных значений.
//(Для каждого типа написать отдельную функцию) .
//в файле function.h нужно : а) описать прототипы всех функций; б) сделать проверку определена ли константа, указывающая на тип данных(#ifdef INTEGER)
//в ) создать обобщающие имена функции, которым будет определена функция соответствующего типа в зависимости от константы, указанной в файле prog.cpp .
//(# define show ShowInt)
//в файле prog.cpp нужно : а) в функции main вызвать все функции через переозначеные(обобщенные) имена из файла function.h(show())
//б) определить константу, которая указывает какой тип данных будет использоваться.Например INTEGER - целые данные, CHAR - символьные DOUBLE - 
//настоящие. (# define INTEGER) Имя функциям нужно давать так, чтобы они отвечали своей сути.Например функция для вывода значений массива целых чисел
//на консоль - ShowArrayInt().А, когда переопределяем функцию с помощью # define то нужно давать общее имя.Например # define ShowArray ShowArrayInt

#include <iostream>
//#define INTEGER
//#define DOUBLE
#define CHAR
#include "function.h"
using namespace std;

int main()
{
	const int size = 20;
	/*int arr[size];
	double arr[size];*/
	char arr[size];
	fillArr(arr, size);
	printArr(arr, size);
	sortArr(arr, size);
	printArr(arr, size);
	cout << findArrMax(arr, size);
	cout << endl;
	cout << findArrMin(arr, size);
	int elem;
	/*int newVal;
	double newVal;*/
	char newVal;
	cout << "\nEnter the number of array`s elemet, you want to edit\n";
	cin >> elem;
	if (elem > 0 && elem <= size) {
		cout << "Enter new value\n";
		cin >> newVal;
		editArr(arr, size, elem, newVal);
		printArr(arr, size);
	}
	else
		cout << "Wrong input, try again!\n";
}