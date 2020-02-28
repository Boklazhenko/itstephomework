
#include <iostream>
#include <math.h>
using namespace std;
#define Min(a,b)((a)<(b)?(a):(b))
#define Max(a,b)((a)>(b)?(a):(b))
#define Square(a)((a)*(a))
#define Pow(a,n)((n > 0) ? (pow(a,b)) : (1))
#define EvenNum(a)(a%2==0 ? "even number" : "odd number")
#define OddNum(a)(a%2!=0 ?   "odd number" : "even number")
int main()
{
	int a = 10, b = 2;
	cout << Min(a, b) << endl;
	cout << Max(a, b) << endl;
	cout << Square(a) << endl;
	cout << Pow(a, b) << endl;
	cout << EvenNum(a) << endl;
	cout << OddNum(a) << endl;
}
