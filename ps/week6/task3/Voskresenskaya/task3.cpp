

#include <iostream>
using namespace std;
void findPerfectNum(int firstNum, int lastNun)
{
	int a, b;
	
	if (firstNum< lastNun)
	{
		a = firstNum;
		b = lastNun;
	}
	else 
	{
		a = lastNun;
		b = firstNum;
	}
	if (a > 0 && b > 0)
	{
		for (int i = a; i <= b; ++i)
		{
			int sum = 0;
			for (int j = 1; j < i; ++j)
			{

				if (i % j == 0)
				{
					sum += j;
				}
			}
			if (sum == i)
			{
				cout << "Perfect Num \t" << i << endl;
			}
		}
	}
	else
	{
		cout << "error";
	}
}


int main()
{
	int num, num2;
	cout << "Enter first number" << endl;
	cin >> num;
	cout << "Enter second number" << endl;
	cin >> num2;
	findPerfectNum(num, num2);
	return 0;
}



