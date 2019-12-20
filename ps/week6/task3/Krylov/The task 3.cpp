//подглядел тут: https://cpp.mazurok.com/perfect_number/

#include <iostream>

using namespace std;

bool is_prime(unsigned long long n);

int main() 
{
	unsigned long long num1 = 1, num2 = 1;
	while (num1 * num2 < (4 * num2 - 1) * 2 * num2) 
	{ 
		num1 = 2 * num2 - 1;
		if (is_prime(num1)) 
			cout << num2 * num1 << " " << endl;
		num2 <<= 1;
	}
	return 0;
}

bool is_prime(unsigned long long n) {
	unsigned long long  i = 3;
	while (i < sqrt(n)) {
		if (n % i == 0) return false;
		i += 2;
	}
	return true;
}
