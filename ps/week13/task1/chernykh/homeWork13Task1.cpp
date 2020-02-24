//#define INTEGER
//#define DOUBLE
#define CHAR
#include <iostream>
#include "function.h"

using namespace std;

int main()
{
	const int SIZE = 20;
	
#ifdef INTEGER

	int arrayInt[SIZE];

	cout << "Fill and print array with Int's:" << endl;
	fill(arrayInt, SIZE);
	print(arrayInt, SIZE);
	cout << "\nMin element = " << searchMin(arrayInt, SIZE) << endl;
	cout << "Max element = " << searchMax(arrayInt, SIZE) << "\n\n";
	cout << "Print array with Int's after sorting:" << endl;
	sort(arrayInt, SIZE);
	print(arrayInt, SIZE);
	editEl(arrayInt, SIZE, 1, 777);
	cout << "\nPrint array with Int's after editing:" << endl;
	print(arrayInt, SIZE);

#endif // INTEGER

#ifdef DOUBLE

	double arrayDouble[SIZE];

	cout << "Fill and print array with Double's:" << endl;
	fill(arrayDouble, SIZE);
	print(arrayDouble, SIZE);
	cout << "\nMin element = " << searchMin(arrayDouble, SIZE) << endl;
	cout << "Max element = " << searchMax(arrayDouble, SIZE) << "\n\n";
	cout << "Print array with Double's after sorting:" << endl;
	sort(arrayDouble, SIZE);
	print(arrayDouble, SIZE);
	editEl(arrayDouble, SIZE, 5, 77.77);
	cout << "\nPrint array with Double's after editing:" << endl;
	print(arrayDouble, SIZE);

#endif // DOUBLE

#ifdef CHAR

	char arrayChar[SIZE];

	cout << "Fill and print array with Char's:" << endl;
	fill(arrayChar, SIZE);
	print(arrayChar, SIZE);
	cout << "\nMin element = " << searchMin(arrayChar, SIZE) << endl;
	cout << "Max element = " << searchMax(arrayChar, SIZE) << "\n\n";
	cout << "Print array with Char's after sorting:" << endl;
	sort(arrayChar, SIZE);
	print(arrayChar, SIZE);
	editEl(arrayChar, SIZE, 1, 'Z');
	cout << "\nPrint array with Char's after editing:" << endl;
	print(arrayChar, SIZE);

#endif // CHAR

}