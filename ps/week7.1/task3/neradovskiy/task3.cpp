#include <iostream>

void printEvaluation(int arr[], int size);
void retakeExam(int arr[], int element, int anotherEvaluation);
bool doesScholarship(int arr[], int size);
int main()
{
	const int size = 10;
	int evaluation[size];
	int numberEvaluations = size;
	for (int i = 0; i < numberEvaluations; ++i) {
		std::cout << "Please enter you ten evalations: " << std::endl;
		std::cin >> evaluation[i];
	}
	enum option { Exit, PrintEvaluation, RetakeExam, DoesScholarship };
	int selection;
	do {
		std::cout << "Please enter option: " << std::endl;
		std::cout << "Enter 1 if you want print you evaluations" << std::endl;
		std::cout << "Enter 2 if you want retake ecxam" << std::endl;
		std::cout << "Enter 3 if you want to know will have a scholarship" << std::endl;
		std::cout << "Enter 0 if you want exit" << std::endl;
		std::cin >> selection;
		switch (selection)
		{
		case Exit:
			break;
		case PrintEvaluation:
			printEvaluation(evaluation, size);
			break;
		case RetakeExam:
			std::cout << "Please enter number you evaluation ( 1 - " << size << " ) ";
			int element;
			std::cin >> element;
			if (element > size || element <= 0) {
				std::cout << "Error, please enter correct element" << std::endl;
				break;
			}
			std::cout << "Please enter new evaluation: ";
			int anotherEvaluation;
			std::cin >> anotherEvaluation;
			retakeExam(evaluation, element - 1, anotherEvaluation);		// на всякий случай сделал функцию, но оно поидее ведь ненадо
			break;														// т.к. всего 1 строчка кода в функции...
		case DoesScholarship:
			if (doesScholarship(evaluation, size))
				std::cout << "Нou will receive a scholarship" << std::endl;
			else
				std::cout << "You do not have a scholarship" << std::endl;
			break;
		default:
			std::cout << "Error please enter the correct options" << std::endl;
		}
	} while (selection != 0);
	std::cout << "Good bye... \n";
}
void printEvaluation(int arr[], int size) {
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
void retakeExam(int arr[], int element, int anotherEvaluation) {
	arr[element] = anotherEvaluation;
}
bool doesScholarship(int arr[], int size) {
	float sum = 0;
	float count = 0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
		count++;
	}
	float result = sum / count;
	if (result > 10.7)
		return true;
	else
		return false;
}