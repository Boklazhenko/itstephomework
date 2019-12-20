

#include <iostream>
using namespace std;

int summarizeRangeNum(int numFirst, int numLast)
{
	int a = numFirst;
	int b = numLast;
	int c;
	if (a - b < 0)
	{
		c = -1 * (a - b);
	}
	else
	{
		c = (a - b);
	}
	int sumNum = 0;
	if (numFirst < numLast)
	{
		for (int i = 0; i <= c; ++i)
		{
			sumNum += numFirst + i;
		}
	}
	else
	{
		for (int i = 0; i <= c; ++i)
		{
			sumNum += numFirst - i;
		}
	}
	return sumNum;
}
int main()
{

	int num;
	int num2;
	cout << "Enter the first number" << endl;
	cin >> num;
	cout << "Enter the second number" << endl;
	cin >> num2;
	if (num != num2)
	{
		cout << summarizeRangeNum(num, num2);
	}
	else
	{
		cout << "error";
	}
	return 0;
}


