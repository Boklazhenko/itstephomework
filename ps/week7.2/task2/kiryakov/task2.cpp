#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
void main()
{
	int random, user, rmas[4], umas[4], c = 0, bulls = 0, cows = 0;
	srand(time(0));
	random = rand() % (9999 - 1000 + 1) + 1000;
	for (int i = 3; i >= 0; --i)
	{
		rmas[i] = random % 10;
		random /= 10;
	}

	while (cows != 4)
	{
		bulls = 0, cows = 0;
		cout << "Enter a 4-digit number or 0 (zero) to exit: ";
		cin >> user;
		if (user == 0)
		{
			break;
		}
		++c;     
		for (int i = 3; i >= 0; --i)
		{
			umas[i] = user % 10;
			user /= 10;
		}

		for (int i = 0; i < 4; i++)
		{
			if (umas[i] == rmas[0] || umas[i] == rmas[1] || umas[i] == rmas[2] || umas[i] == rmas[3])
			{
				++bulls;
			}
			if (umas[i] == rmas[i])
			{
				++cows;
			}
		}
		cout << "Bulls: " << bulls << "\tCows: " << cows << "\n";
	}

	if (cows == 4)
	{
		cout << "\nYou guessed  " << c << "try!" << "\n";
	}
	else
	{
		cout << ":(\n";
	}

	
}