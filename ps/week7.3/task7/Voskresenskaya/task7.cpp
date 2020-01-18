

#include <iostream>
using namespace std;
void findS (float* pa, float* pb, float* pRez)
{
	*pRez = *pa + *pb;
}
void  findDiff(float* pa, float* pb, float* pRez)
{
	*pRez = *pa - *pb;
}
void findProd(float* pa, float* pb, float* pRez)
{
	*pRez = *pa * (*pb);
}
void findDiv(float* pa, float* pb, float* pRez)
{
	*pRez = *pa / (*pb);
}

int main()
{
	int answer;
	float a, b, Sum, Prod, Div, Diff;
	cout << "Enter first digit:\n";
	cin >> a;
	cout << "Enter second digit:\n";
	cin >> b;
	cout << "\nSelect operation:\n";
	cout << "\n 1 - if you want to see Sum.\n";
	cout << "\n 2 - if you want to see Differences.\n";
	cout << "\n 3 - if you want to see Product.\n";
	cout << "\n 4 - if you want to see Division.\n";
	cout << "\n 5 - if you want to exit.\n";
	cin >> answer;
	while (answer != 5)
	{
		switch (answer)
		{
		case 1:
			findS(&a, &b, &Sum);
			cout << Sum;
			break;
		case 2:
			findDiff(&a, &b, &Diff);
			cout <<  Diff;
			break;
		case 3:
			findProd(&a, &b, &Prod);
			cout << Prod;
			break;
		case 4:
			findDiv(&a, &b, &Div);
			cout << Div;
			break;
		case 5: 
			cout << "Exit";
			break;
		default: 
			cout << "Error";
		}
		cout << "\nSelect operation:\n";
		cout << "\n 1 - if you want to see Sum.\n";
		cout << "\n 2 - if you want to see Differences.\n";
		cout << "\n 3 - if you want to see Product.\n";
		cout << "\n 4 - if you want to see Division.\n";
		cout << "\n 5 - if you want to exit.\n";
		cin >> answer;
	}
		
		return 0;
}

