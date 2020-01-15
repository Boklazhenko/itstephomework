

#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter namber a=";
	cin >> a;
	cout << "Enter namber b=";
	cin >> b;
	int* pa = &a;
	int* pb = &b;

	if (*pa > *pb)
	cout << "a more b ";
	else if (*pa == *pb)
	cout << "a equal to b ";
	else 
	cout << "b more a ";
	return 0;
}


