//������� ��� ����� : (function.h, function.cpp, prog.cpp)
//� ����� function.cpp ���������� �������� ��������� ������� ��� ������ � �������� ������ :
//�) ������� ��� ���������� ������� ���������� ����������; �) ������� ��� ������ �������� ������� �� �������; 
//�) ������� ��� ������ ������������ ��������; �) ������� ��� ������ ������������� ��������; �) ������� ��� ����������; 
//�) ������� ��� �������������� �������� �������.������ ������� ���������� �������� ��� ������ � �������� �����, �������������� � ���������� ��������.
//(��� ������� ���� �������� ��������� �������) .
//� ����� function.h ����� : �) ������� ��������� ���� �������; �) ������� �������� ���������� �� ���������, ����������� �� ��� ������(#ifdef INTEGER)
//� ) ������� ���������� ����� �������, ������� ����� ���������� ������� ���������������� ���� � ����������� �� ���������, ��������� � ����� prog.cpp .
//(# define show ShowInt)
//� ����� prog.cpp ����� : �) � ������� main ������� ��� ������� ����� �������������(����������) ����� �� ����� function.h(show())
//�) ���������� ���������, ������� ��������� ����� ��� ������ ����� ��������������.�������� INTEGER - ����� ������, CHAR - ���������� DOUBLE - 
//���������. (# define INTEGER) ��� �������� ����� ������ ���, ����� ��� �������� ����� ����.�������� ������� ��� ������ �������� ������� ����� �����
//�� ������� - ShowArrayInt().�, ����� �������������� ������� � ������� # define �� ����� ������ ����� ���.�������� # define ShowArray ShowArrayInt

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