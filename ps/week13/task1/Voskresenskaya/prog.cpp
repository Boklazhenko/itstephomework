
#include <iostream>
using namespace std;
#define DOUBLE
/*#define INTEGER*/
/*#define CHAR*/
#include "function.h"
int main()
{

#ifdef CHAR
	const int size = 10;
	char Arr[size];
	fillArr(Arr, size);
	showArr(Arr, size);
	sort(Arr, size);
	showArr(Arr, size);
	cout << "Min element = " << findMinInArr(Arr, size) << endl;
	cout << "Max element = " << findMaxInArr(Arr, size) << endl;
	changElArr(Arr, size);
	showArr(Arr, size);
#endif

#ifdef INTEGER
	const int size = 10;
	int Arr[size];
	fillArr(Arr, size);
	showArr(Arr, size);
	sort(Arr, size);
	showArr(Arr, size);
	cout << "Min element = " << findMinInArr(Arr, size) << endl;
	cout << "Max element = " << findMaxInArr(Arr, size) << endl;
	changElArr(Arr, size);
	showArr(Arr, size);
#endif

#ifdef DOUBLE
	const int size = 10;
	double Arr[size];
	fillArr(Arr, size);
	showArr(Arr, size);
	sort(Arr, size);
	showArr(Arr, size);
	cout << "Min element = " << findMinInArr(Arr, size) << endl;
	cout << "Max element = " << findMaxInArr(Arr, size) << endl;
	changElArr(Arr, size);
	showArr(Arr, size);
#endif

	return 0;
}


