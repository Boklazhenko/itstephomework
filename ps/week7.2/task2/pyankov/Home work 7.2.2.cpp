#include <iostream>
#include <ctime>
using namespace std;

int prinInput(int x);
void compareNumbers(int a, int b);

int main()
{
	
	srand(time(0));
	int numberX = 0;
	while (numberX < 1000) {
		numberX = rand() % 9999;
	}

	//cout << "Number X = " << numberX << endl;

	
	prinInput(numberX);

		


}

int prinInput(int x)
{

	int userInput = 0;
	int attemptСounter = 0;

	while (userInput != x) {

		++attemptСounter;
		cout << "Enter a four digit number ";

		cin >> userInput;
		cout << userInput<< endl;


		if (userInput < 1000) {

			return  prinInput(x);
		}


		if (userInput >= 1000 && userInput != x) {

			compareNumbers(x, userInput);
		}
	
	 
		cout << "Number of attempts: " << attemptСounter << endl;
}
}

void compareNumbers(int a, int b) {

	int countNumbers = 0;
	int countPlace = 0;
	

	int a4 = a % 10;
	int a3 = (a % 100 - a4) / 10;
	int a2 = (a % 1000 - a3) / 100;
	int a1 = (a % 10000 - a2) / 1000; 
	int b4 = b % 10;
	int b3 = (b % 100 - b4) / 10;
	int b2 = (b % 1000 - b3) / 100;
	int b1 = (b % 10000 - b2) / 1000; 

	if (a1 == b1)
		++countPlace;
	if (a2 == b2)
		++countPlace;
	if (a3 == b3)
		++countPlace;
	if (a4 == b4)
		++countPlace;

	if (b1 == a1 || b1 == a2 || b1 == a3 || b1 == a4)
		++countNumbers;
	if (b2 == a1 || b2 == a2 || b2 == a3 || b2 == a4)
		++countNumbers;
	if (b3 == a1 || b3 == a2 || b3 == a3 || b3 == a4)
		++countNumbers;
	if (b4 == a1 || b4 == a2 || b4 == a3 || b4 == a4)
		++countNumbers;

	
	cout << "Guessed numbers: " << countNumbers << endl;
	cout << "Numbers in their places: " << countPlace << endl;
	
	
	
	
}