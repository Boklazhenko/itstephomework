//С помощью директивы #define написать следующие макросы: 
// Нахождение меньшего из двух чисел; 
// Нахождение большего из двух чисел; 
// Возведение числа в квадрат; 
// Возведение числа в степень; 
// Проверка числа на четность; 
// Проверка числа на нечетность;

#include <iostream>
#include <cmath>
using namespace std;
#define str(s) #s
#define Smaller(x,y) (x<y?x:y) //Нахождение меньшего из двух чисел; 
#define Bigger(x,y) (x>y?x:y) //Нахождение большего из двух чисел; 
#define Square(x) (x*x) //Возведение числа в квадрат; 
#define Pow(x,y) (pow(x,y)) //Возведение числа в степень; 
#define Even(x) ((x%2==0)?"even":"not even")
#define Odd(x) ((x%2!=0)?"odd":"not odd")

int a = 13;
int b = 4;

int main()
{
	cout << str(The smaller of two numbers : );
	cout << Smaller(a, b) << endl;
	cout << str(The bigger of two numbers : );
	cout << Bigger(a, b) << endl;
	cout << str(Squared number a : );
	cout << Square(a) << endl;
	cout << str(Squared number b : );
	cout << Square(b) << endl;
	cout << str(Number a in power b : );
	cout << Pow(a, b) << endl;
	cout << str(Number b in power a : );
	cout << Pow(b, a) << endl;
	cout << a << " - " << Even(a) << endl;
	cout << a << " - " << Odd(a) << endl;
	cout << b << " - " << Even(b) << endl;
	cout << b << " - " << Odd(b) << endl;
}

