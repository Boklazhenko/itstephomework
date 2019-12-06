

#include <iostream>
using namespace std;
int main()
{
	const int size=5;
	int ar[size] = {12,54,89,70,-67};
	int max =ar[0];
	int min =ar[0];
	for (int i=0;i<size;++i)
	{
		if (min > ar[i])
			min = ar[i];
		if (max < ar[i])
			max = ar[i];
	}
	cout << "max=" << max << endl;
	cout << "min=" << min << endl;
	return  0;
}


