#include <iostream>
using namespace std;
int main()
{
	const int size =10;
	float arr[size];

	for(int i = 0; i < size; ++i)
	{
		cout << "enter numbers" << endl;
		cin >> arr[i];
	}

	float sum = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < 0)
		{
			sum += arr[i];
		}
	}
	cout << "Sum of negative numbers" << sum << endl;

	float max = arr[0];
	float min = arr[0];
	int imax, imin;
	for (int i = 0; i < size; ++i)
	{
		if (min > arr[i])
		{
			min = arr[i];
			imin =i;

		}
		if (max < arr[i])
		{
			max = arr[i];
			imax = i;
		}
	}
	
	int coutner; 
	int condition;
	if (imin < imax)
	{
		coutner=imin + 1;
		condition=imax;
	}
	if (imin > imax)
	{
		coutner=imax + 1;
		condition=imin;
	}
	float prod = 1;
	for (int i=coutner; i < condition; ++i)
	{
       prod *= arr[i];
	}
	cout << "Product from min to max numbers" << prod << endl;
		
	float even = 1;
	for(int i=0; i<size;++i)
	{
	if (i==0 || i % 2 == 0)
		{
			even *= arr[i];
		}
	}
	cout << "Product of numbers with even indices" << even << endl;

	int firstnegativ, lastnegativ;
	 for (firstnegativ= 0; firstnegativ < size; ++firstnegativ)
	 {
		 if (arr[firstnegativ] < 0)
		 {
			 break;
		 }
	 }
	 for (lastnegativ = size-1; lastnegativ > 0; --lastnegativ)
	 {
		 if (arr[lastnegativ] < 0)
		 {
			 break;
		 }
	 }

	 cout <<"firstnegativ" << arr[firstnegativ] << endl;
	 cout << "lastnegativ" << arr[lastnegativ] << endl;
	 
	 float sumFirstLastnNegativ = 0;
	 for (int i= firstnegativ+1; i < lastnegativ; ++i)
	 {
		 sumFirstLastnNegativ += arr[i];
	 }
	 cout << "Sum from first to last negative number"<< sumFirstLastnNegativ << endl;

	return 0;
}