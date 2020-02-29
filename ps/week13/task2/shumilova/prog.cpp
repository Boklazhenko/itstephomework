//#define Integer
//#define Double
#define Char

#include "function.h"
#include <iostream>
using namespace std;

#define str(s) #s

int main()
{
	const int size = 10;
	

#ifdef Integer
	int arrInt[size];

	fillArr(arrInt, size);

	showArr(arrInt, size);
	cout << endl;

	cout << str(Minimum element in array :);
	cout << searchMin(arrInt, size);
	cout << endl;

	cout << str(Maximum element in array :);
	cout << searchMax(arrInt, size);
	cout << endl;

	sortArr(arrInt, size);
	showArr(arrInt, size);
	cout << endl;

	int index, newNum;
	cout << "Enter index to change: ";
	cin >> index;
	if (index > size)
		cout << "Index exceeds array" << endl;
	cout << "Enter new number: ";
	cin >> newNum;
	editArr(arrInt, index, newNum);
	showArr(arrInt, size);
	cout << endl;
#endif

#ifdef Double

	double arrDouble[size];

	fillArr(arrDouble, size);

	showArr(arrDouble, size);
	cout << endl;

	cout << str(Minimum element in array :);
	cout<< searchMin(arrDouble, size);
	cout << endl;

	cout << str(Maximum element in array :);
	cout << searchMax(arrDouble, size);
	cout << endl;

	sortArr(arrDouble, size);
	showArr(arrDouble, size);
	cout << endl;
	
	int index;
	double newNum;
	cout << "Enter index to change: ";
	cin >> index;
	if (index > size)
		cout << "Index exceeds array" << endl;
	cout << "Enter new number: ";
	cin >> newNum;

	editArr(arrDouble, index, newNum);
	showArr(arrDouble, size);
	
#endif

#ifdef Char
	char arrChar[size];
	fillArr(arrChar, size);
	showArr(arrChar, size);
	cout << endl;

	cout << str(Minimum element in array :);
	cout << searchMin(arrChar, size);
	cout << endl;

	cout << str(Maximum element in array :);
	cout << searchMax(arrChar, size);
	cout << endl;

	sortArr(arrChar, size);
	showArr(arrChar, size);
	cout << endl;

	int index;
	char newNum;
	cout << "Enter index to change: ";
	cin >> index;
	if (index > size)
		cout << "Index exceeds array" << endl;
	cout << "Enter new char: ";
	cin >> newNum;
	editArr(arrChar, index, newNum);
	showArr(arrChar, size);
#endif
}
