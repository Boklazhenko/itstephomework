#include <iostream>
#include <stdlib.h>
#include <time.h>

void breackingDigit(int arr[], int sizeNum, int num);
//void printArr(int arr[], int size);
int searchForMatches(int guessedNumDigit[], int userNumDigit[], int size);
int searchForMatchesFull(int arr1[], int arr2[], int size);

int main()
{
	srand(time(NULL));
	int guessedNum = rand() % 8999 + 1000;
	//std::cout << guessedNum << std::endl;
	
	int num;
	const int numSize = 4;
	int guessedNumDigit[numSize], userNumDigit[numSize];
	int attempts = 0;
	do {
		std::cout << "Guess the four number: ";
		std::cin >> num;
		if (num < 1000 || num > 9999){
			std::cout << "Error, enter correct num\n";
	}
		else {
			breackingDigit(guessedNumDigit, numSize, guessedNum);
			breackingDigit(userNumDigit, numSize, num);

			std::cout << "Digit guessed right is: " << searchForMatches(guessedNumDigit, userNumDigit, numSize);
			std::cout << "\nDigits of numbers guessed and stands in its place: " <<
				searchForMatchesFull(guessedNumDigit, userNumDigit, numSize) << std::endl;
			++attempts;
		}
	} while (searchForMatchesFull(guessedNumDigit, userNumDigit, numSize) != 4);
	std::cout << "Congatulations you won!!!" << std::endl;
	std::cout << "you guessed it " << attempts << " times";
}
void breackingDigit(int arr[], int sizeNum, int num) {
	--sizeNum;
	if (num != 0) {
		arr[sizeNum] = num % 10;

		breackingDigit(arr, sizeNum, num / 10);
	}
}
//void printArr(int arr[], int size) {
//	for (int i = 0; i < size; ++i)
//		std::cout << arr[i] << " ";
//}
int searchForMatches(int guessedNumDigit[], int userNumDigit[], int size) {
	int matches = 0;
	bool secretNumDigitExample[10] = {};
	int digitCount[10] = {};
	for (int i = 0; i < size; ++i)
	{
		secretNumDigitExample[guessedNumDigit[i]] = true;
		digitCount[userNumDigit[i]] = +1;
	}
	for (int i = 0; i < 10; ++i) {
		if (secretNumDigitExample[i])
			matches += digitCount[i];
	}
	return matches;
}
int searchForMatchesFull(int arr1[], int arr2[], int size) {
	int fullMatches = 0;
	for (int i = 0; i < size; ++i) {
		if (arr1[i] == arr2[i])
		{
			++fullMatches;
		}
	}
	return fullMatches;
}