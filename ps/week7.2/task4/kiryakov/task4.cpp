#include <iostream>
using namespace std;
float pow_Recursion(int Count, int Power)
{
	if (!Power) return 1;
	else if (Power < 0) return 1 / pow_Recursion(Count, -Power);
	else return Count * pow_Recursion(Count, --Power);
}

int main()
{
	cout << pow_Recursion(5, 3) << " " << pow_Recursion(5, -3) << endl;
	return false;
}