#include <iostream>

using namespace std;

int main()
{
	const int arraySize = 10;
	double array[arraySize];
	double assessment = 0;


	for (int i = 0; i < arraySize; ++i)
	{
		cout << "Enter assessment: " << endl;


		if (assessment < 0 || assessment >= 13)
		{
			cout << "Error! Please enter assesment from 0 to 12" << endl;
			return 3;
		}
		cin >> assessment;
		array[i] = assessment;

	}

	while (true)
	{
		cout << "\n\n========================= MENU =========================" << endl
			<< "\t\t1 - Output assessments" << endl
			<< "\t\t2 - Retake exam" << endl
			<< "\t\t3 - Is there a scholarship?" << endl
			<< "\t\t4 - Exit" << endl
			<< "========================================================\n\n" << endl;

		int studentDecision;
		cin >> studentDecision;
		cout << "\n\n";

		if (studentDecision <= 0 || studentDecision >= 5)
		{
			cout << "Error! Please enter from 1 to 3" << endl;
			return 1;
		}

		switch (studentDecision)
		{
		case 1:
			for (int i = 0; i < arraySize; ++i)
			{
				cout << array[i] << "\t";
			}
			break;
		case 2:
			int lesson;
			double newAssessment;

			cout << "Please enter lesson: " << endl;
			cin >> lesson;

			if (lesson < 0 || lesson > arraySize - 1)
			{
				cout << "Error! Please enter lesson from 0 to 9" << endl;
				return 2;
			}

			cout << "Please enter new assessment: " << endl;
			cin >> newAssessment;

			array[lesson] = newAssessment;
			break;
		case 3:
		{ //сделал тут область видимости, потому что ругался компилятор
			double sumAssessment = 0;
			for (int i = 0; i < arraySize; ++i) //побежал еще раз по массиву, на случай пересдачи экзамена
			{
				sumAssessment += array[i];
			}

			double averageAssessment = sumAssessment / (double)arraySize;
			cout << "Your average assessment = " << averageAssessment << endl;
			double minAvgAssessment = 10.7;

			if (averageAssessment >= minAvgAssessment)
			{
				cout << "Congratulations! You have a scholarship!" << endl;
			}
			else
			{
				cout << "Sorry, you need more read!" << endl;
			}
		}
		break;
		case 4:
			return 0;
		}
	}
}
