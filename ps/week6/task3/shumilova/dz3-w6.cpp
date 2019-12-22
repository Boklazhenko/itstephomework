/* Задание 3 (неделя 6)
 Число называется совершенным, если сумма всех
его делителей равна ему самому. Напишите функцию
поиска таких чисел во введенном интервале.
6
28
496
8128
33 550 336
8 589 869 056
137 438 691 328
2 305 843 008 139 952 128
*/

#include <iostream>
using namespace std;

 unsigned int searchPerfect(unsigned int num1, unsigned int num2)
{
	for (unsigned int k = num1; k <= num2; ++k)
	{
		unsigned int sum = 0;
		for (unsigned int i = 1; i < k; ++i)
		{
			if (k % i == 0)
				sum += i;
		}
		if (sum == k)
			cout << "perfect " << sum << "\n";
	}
	return 0;
}
void main()
{
	unsigned int num1, num2;
	cout << "Enter search interval perfect number: \n";
	cin >> num1 >> num2;

	searchPerfect(num1, num2);
}
