#include <iostream>

using namespace std;

int userNumber;

void calcHappyNumber(int happyNumber);

int main()
{
	setlocale(LC_ALL, "");
	cout << "Введите шести значное число: " << endl;
	cin >> userNumber;
	calcHappyNumber(userNumber);
		
}

void calcHappyNumber(int happyNumber)
{
	int firstThreeNumber, secondThreeNumber;
	firstThreeNumber = userNumber;
	secondThreeNumber = 0;

	for (int i = 1; i <= 3; i++)
	{
		secondThreeNumber += firstThreeNumber % 10;
		firstThreeNumber = firstThreeNumber / 10;
	}
	int temporary = 0;
	for (int i = 1; i <= 3; i++)
	{
		temporary += firstThreeNumber % 10;
		firstThreeNumber = firstThreeNumber / 10;
	}
	if (secondThreeNumber == temporary)
		cout << "Ваше число счастливое" << endl;
	else cout << "В следующий раз повезет" << endl;
	return;
}

