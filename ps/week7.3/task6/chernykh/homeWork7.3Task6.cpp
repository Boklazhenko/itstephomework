#include <iostream>

using namespace std;

void replaceTwoNumbers(int* firstNumber, int* secondNumber)
{
    int temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}

int main()
{
    int numberOne = 77, numberTwo = 44;

    cout << "First number = " << numberOne << "\tSecond number = " << numberTwo << endl;

    replaceTwoNumbers(&numberOne, &numberTwo);

    cout << "First number = " << numberOne << "\tSecond number = " << numberTwo << endl;
}
