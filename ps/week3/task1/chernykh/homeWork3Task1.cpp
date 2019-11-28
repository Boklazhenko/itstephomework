#include <iostream>

using namespace std;

int main()
{
	int firstNumber, secondNumber, thirdNumber, result = 0;


		for (int i = 100; i <= 999; ++i)
		{
			firstNumber = i / 100; //первая цифра
			secondNumber = (i % 100) / 10; //вторая цифра
			thirdNumber = i % 10; //третья цифра

			if (firstNumber == secondNumber || secondNumber == thirdNumber || thirdNumber == firstNumber)
				++result;
			
		}
		cout << "Result = " << result;
}
