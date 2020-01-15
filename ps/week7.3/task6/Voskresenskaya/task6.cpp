

#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 12;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	int* pa = &a;
	int* pb = &b;
	int tmp;
	tmp = *pa;
	*pa=*pb;
	*pb = tmp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;

}


