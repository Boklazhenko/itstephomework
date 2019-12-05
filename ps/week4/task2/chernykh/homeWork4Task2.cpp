#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			if (j < 5 || j > 9)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			if (j < 5 || j > 9)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			if (j < 5 || j > 9)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}

