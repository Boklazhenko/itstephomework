#include <iostream>
using namespace std;
int main() 
	{
		int a[100];
		int i, n, summa_otr = 0, kmin = 0, kmax = 0, proizv = 1, proizv1 = 1;
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		for (i = 0; i < n; i++)
		{
			cout << "A[" << i << "] = ";
			cin >> a[i];
		}
		cout << "\n";
		for (i = 0; i < n; i++)
		{
			if (a[i] < 0)
			{
				summa_otr = summa_otr + a[i];
			}
		}
		cout << "\n";
		cout << "Sum of negative elements = " << summa_otr << "\n";
		int min = a[0];
		for (i = 0; i < n; i++)
		{
			if (a[i] < min)
			{
				min = a[i];
				kmin = i;
			}
		}
		cout << "The minimum value of the array : " << min << "\n";
		cout << "Minimal array element :" << kmin << "\n";
		int max = 0;
		for (i = 0; i < n; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
				kmax = i;
			}
		}
		cout << "The maximum value of the array : " << max << "\n";
		cout << "Maximum array element : " << kmax << "\n";
		if (kmax > kmin)
		{
			for (i = kmin; i <= kmax; i++)
			{
				proizv = proizv * a[i];
			}
		}
		else
		{
			for (i = kmax; i <= kmin; i++)
			{
				proizv = proizv * a[i];
			}
		}
		cout << "the sum between the minimum and maximum elements of the array = " << proizv << "\n";
		for (i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				proizv1 = proizv1 * a[i];
			}
		}
		cout << "sum of elements with odd numbers : " << proizv1 << "\n";
		int one_chislo = 0;
		int kone_chislo = 0;
		for (i = 0; i < n; i++)
		{
			if (a[i] < 0)
			{
				one_chislo = a[i];
				kone_chislo = i; break;
			}
		}
		int two_chislo = 0;
		int ktwo_chislo = 0;
		for (i = n - 1; i >= 0; i--)
		{
			if (a[n - 1] < 0)
			{
				two_chislo = a[n - 1];
				ktwo_chislo = n - 1; break;
			}
		}
		int summotr = 0;
		if (kone_chislo > ktwo_chislo)
		{
			for (i = ktwo_chislo; i < n; i++)
			{
				summotr = summotr + a[i];
			}
		}
		else
		{
			for (i = kone_chislo; i < n; i++)
			{
				summotr = summotr + a[i];
			}
		}
		cout << "The sum of the elements between the first and last negative number : " << summotr << "\n";
	
}