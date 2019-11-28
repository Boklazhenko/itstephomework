#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int result = 0;
	int i1, i2, i3;
	for (int i = 100; i <= 999; i++)
	{
		i1 = i / 100; //первая цифра
		i2 = (i % 100) / 10; //вторая цифра
		i3 = i % 10; //третья цифра
		if (i1 == i2 || i2 == i3 || i3 == i1)
			result++;

	}
	cout << "Результат = " << result << endl;
}