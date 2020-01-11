// Написать программу «успеваемость». Пользователь вводит 10 оценок студента. 
//Реализовать меню для пользователя  Вывод оценок (вывод содержимого массива) 
// Пересдача экзамена (пользователь вводит номер элемента массива и новую оценку)
// Выходит ли стипендия (стипендия выходит, если средний бал не ниже 10.7)


#include <iostream>
using namespace std;
int WhatToDo;
enum WhatToDo { Exit, ShowScores, RetakeExam, Scholarship };

int main()
{
	const int size = 10;
	int arr[size] = {};//заполнила массив нолями, чтобы проводить проверку правильности ввода
	for (int i = 0; i < size; ++i)
	{
		while (arr[i] == 0)
		{
			cout << "Input the student`s score\n";
			cin >> arr[i];
			if (arr[i] < 1 || arr[i] > 12)
			{
				cout << "\nWrong input, please, use scores from 1 to 12\n";
				arr[i] = 0;
			}
		}
	}
	while (true)
	{
		cout << "\nInput 1, if you want to see student`s scores\n";
		cout << "Input 2, if student has retaken an exam, and you need to change the score\n";
		cout << "Input 3, if you want to know,if the student has got a scholarship\n";
		cout << "Input 0, if you want to exit the programm\n";
		cin >> WhatToDo;
		switch (WhatToDo)
		{
		case Exit:
			return 0;
		case ShowScores:
			for (int i = 0; i < size; ++i)
				cout << arr[i] << " ";
			break;
		case RetakeExam:
		{
			int newScore = -1, index = -1;
			while (index == -1) 
			{
				cout << "\nInput the score`s number (from 1 to 10) you want to change\n";
				cin >> index;
				if (index < 1 || index >10) {
					cout << "\nWrong input, try again";
					index = -1;
				}
			}
			index = index - 1;
			while (newScore == -1)
			{
				cout << "\nInput new score\n";
				cin >> newScore;
				if (newScore < 1 || newScore>12)
				{
					cout << "\nWrong input, try again";
					newScore = -1;
				}
			}
			arr[index] = newScore;
			for (int i = 0; i < size; ++i)
				cout << arr[i] << " ";
			break;
		}
		case Scholarship:
		{
			double sum = 0, average = 0;
			for (int i = 0; i < size; ++i)
				sum += arr[i];
			average = sum / size;
			if (average < 10.7)
				cout << "Average score = " << average << ". The student hasn`t got the scholarship.\n";
			else
				cout << "Average score = " << average << ". The student has got the scholarship.\n";
			break;
		}
		default:
			cout << "\nWrong input, try 0 to 3\n";
			break;
		}
	}
}