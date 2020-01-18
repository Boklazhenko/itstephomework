
#include <iostream>
using namespace std;
void findHappyNum(int a)
{
	
	if (a < 1000000 && a > 99999)
	{
		const int size = 6;
		int arr[size];
		for (int i = 0; i < size; ++i)
		{
			arr[i] = a % 10;
			a/=10;
		}
		if ( arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5])
		{
			cout << "Your number is happy";
		}
		else
		{
			cout << "Your number is not happy";
		}

	}
	else
	{
		cout << "error";
	}
}


int main()
{
	int num;
	cout << "Enter a six digit number" << endl;
	cin >> num;
	findHappyNum(num);
	return 0;
}

   
