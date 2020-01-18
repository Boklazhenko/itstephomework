

#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter number a=";
	cin >> a;
	int* pa = &a;
	if (*pa > 0)
		cout << "Number sign +";
	else if (*pa < 0)
		cout << "Number sign -";
	else 
		cout << "Zero has no sign";
	return 0;
}

