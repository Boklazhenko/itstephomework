// С помощью директивы #define написать следующие макросы: ? Нахождение меньшего из двух чисел; ? Нахождение большего из двух чисел;
//? Возведение числа в квадрат; ? Возведение числа в степень; ? Проверка числа на четность; ? Проверка числа на нечетность;
//

#include <iostream>
#include <cmath>
using namespace std;
#define MAX(a,b) ((a)>(b)? (a):(b))
#define MIN(a,b) ((a)<(b)? (a):(b))
#define TO_SQUARE(a) ((a)*(a))
#define IF_EVEN(a) (((a))%2==0 ? "It is even digit": "It isn`t even digit")
#define IF_ODD(a)(((a)%2)==1|| ((a)%2)==-1 ? "It is odd digit": "It isn`t odd digit")
#define RAISE_TO_POWER(a,b) (pow(a,b))


int main()
{
	int x = 10;
	int y = -1;
	cout << "Maximal digit is " << MAX(x, y) << endl;
	cout << "Minimal digit is " << MIN(x, y) << endl;
	cout << x << " squared equals " << TO_SQUARE(x) << endl;
	cout << x <<" "<< IF_EVEN(x) << endl;
	cout<<y <<" "<< IF_ODD(y) << endl;
	cout <<x<< " raised to power "<<y<<" equals "<< RAISE_TO_POWER(x, y);
}