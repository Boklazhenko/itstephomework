#include <iostream>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQR(num) (pow(num, 2))
#define EXP(num, exponentiation) (pow(num, exponentiation))
#define CHECK_PARITY(num) ((num) % (2) == 0 ? true : false)
#define CHECK_NOT_PARITY(num) ((num) % (2) != 0 ? true : false)		//поидее эта функция реализована в прежидущей но сделал т.к. есть задание

int main()
{
	int a = 5;
	int b = 8;
	int num = 441;
	int exponent = 3;
	std::cout << "a: " << a << " b: " << b << " MIN: " << (MIN(a, b)) << std::endl;
	std::cout << "a: " << a << " b: " << b << " MAX: " << (MAX(a, b)) << std::endl;
	std::cout << "SQR: " << (SQR(a)) << std::endl;
	std::cout << "num: " << a << " exponentiation: " << exponent << " EXP: " << (EXP(a, exponent)) << std::endl;
	std::cout << "Check parity: " << num << " " << CHECK_PARITY(num) << std::endl;
	std::cout << "Check not parity: " << num << " " << CHECK_NOT_PARITY(num) << std::endl;
}