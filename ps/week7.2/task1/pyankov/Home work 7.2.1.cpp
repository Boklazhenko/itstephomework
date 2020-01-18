#include <iostream>


using namespace std;

int findsTheNearestDivisor(int max, int min);

int main()
{


	cout << findsTheNearestDivisor(256, 64);


	cin.get();
	system("pause");
	return 0;
}


int findsTheNearestDivisor(int max, int min)
{
	if (max % min == 0)
	{
		return min;
	}
	else
	{
		return findsTheNearestDivisor(max = min, min = max % min);
	}

}
