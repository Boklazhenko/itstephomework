#include <iostream>


using namespace std;
void outputRange(int arr[], int sizeArr);
void retakeTheExam();
void calculationScholarship(int arr[], int sizeArr);
const int sizeArr = 10;
int arr[sizeArr];

int main()
{
	char exit;

	for (int i = 0; i < 10; ++i)
	{
		cout << "Input number " << i + 1 << endl;
		cin >> arr[i];
		if (arr[i] < 0 || arr[i]>5)
		{
			cout << "errore";
			--i;
		}

		cout << endl;
	}


	do {
		int userInput = -1;
		while (userInput < 0 || userInput >3)
		{
			cout << "Input number" << endl
				<< "1. Output ratings." << endl
				<< "2. Retake the exam." << endl
				<< "3. Scholarship." << endl
				<< "Exit press E" << endl;
			cin >> userInput;
			system("cls");
		}


		switch (userInput)
		{
		case 1:
			outputRange(arr, 10);
			break;

		case 2:
			retakeTheExam();
			break;

		case 3:
			calculationScholarship(arr, 10);
			break;

		}


	} while (exit != 'e' || exit != 'E');


	
	return 0;
}





void outputRange(int arr[], int sizeArr)
{
	for (int i = 0; i < sizeArr; ++i)
	{
		cout << arr[i] << " ";
	}

}

void retakeTheExam()
{

	int ratingNumber = -1;
	while (ratingNumber < 0 || ratingNumber >10)
	{
		cout << "Input rating number 1-10" << endl;
		cin >> ratingNumber;
		system("cls");
	}


	int newRating = -1;
	while (newRating < 0 || newRating >5)
	{
		cout << "Input new rating 1-5" << endl;
		cin >> newRating;
		system("cls");
	}

	arr[ratingNumber - 1] = newRating;
}

void calculationScholarship(int arr[], int sizeArr)
{
	float sum = 0;
	float average = 0;

	for (int i = 0; i < sizeArr; ++i)
	{
		sum += arr[i];
	}
	average = sum / sizeArr;
	if (average > 10.7)
		cout << "Yes";
	else
		cout << "No" << endl;

}

