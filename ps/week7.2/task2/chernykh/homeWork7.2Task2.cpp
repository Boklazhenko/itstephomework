#include <iostream>
#include <ctime>
#define ARRAY_SIZE 4

using namespace std;

void moveToArray(int value, char array[], int arraySize)
{
	for (int i = ARRAY_SIZE - 1; i >= 0; --i)
	{
		array[i] = '0' + value % 10;
		value /= 10;
	}
}

void generateRandomNumber(char array[], int arraySize)
{
	moveToArray(rand() % 10000, array, arraySize);
}

bool sameDigits(char array[], int arraySize) //проверяем есть ли одинаковые цифры
{
	int count = 0;
	for (int i = 0; i < ARRAY_SIZE; ++i)
	{
		for (int j = i + 1; j < ARRAY_SIZE; ++j)
		{
			if (array[i] == array[j])
			{
				++count;
			}
		}
	}
	return (count != 0);
}

int main()
{
	char arrayGuessedNumber[ARRAY_SIZE];
	char arrayEnteredNumber[ARRAY_SIZE];

	srand(time(NULL));
	for (int i = 1; i < 15; ++i) //чтобы загаданное число было подальше от предыдущего
	{
		rand();
	}

	do //генерируем числа, пока не будет повторных
	{
		generateRandomNumber(arrayGuessedNumber, ARRAY_SIZE);
	} while (sameDigits(arrayGuessedNumber, ARRAY_SIZE));

	int enteredNumber, bulls, cows, tryCounter = 0;

	do
	{
		cout << "Please enter number of " << ARRAY_SIZE << " digits: " << endl;
		cin >> enteredNumber;
		if (enteredNumber == 0)
		{
			cout << "You tired to guess!" << endl;
			break;
		}
		if (enteredNumber < 123)
		{
			cout << "You entered too small number!" << endl;
			continue;
		}
		if (enteredNumber > 9876)
		{
			cout << "You entered too big number!" << endl;
			continue;
		}

		moveToArray(enteredNumber, arrayEnteredNumber, ARRAY_SIZE);

		if (sameDigits(arrayEnteredNumber, ARRAY_SIZE))
		{
			cout << "Please don't enter the same digits!" << endl;
			continue;
		}

		++tryCounter;

		bulls = 0;
		cows = 0;

		for (int i = 0; i < ARRAY_SIZE; ++i)
		{
			if (arrayGuessedNumber[i] == arrayEnteredNumber[i])
			{
				++bulls;
			}
			for (int j = 0; j < ARRAY_SIZE; ++j)
			{
				if (arrayGuessedNumber[i] == arrayEnteredNumber[j])
				{
					++cows;
				}
			}
		}
		cows -= bulls;

		cout << "Bulls = " << bulls << endl
			<< "Cows = " << cows << endl;

	} while (bulls != 4);

	if (bulls == 4)
	{
		cout << "You guessed the number in: " << tryCounter << " attempts" << endl;
	}
}