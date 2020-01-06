#include <iostream>

using namespace std;

//int sumOfDia(int firstNumber, int secondNumber)
//{
//    int sum = 0;
//    for (int i = firstNumber; i <= secondNumber; ++i)
//    {
//        sum += i;
//    }
//    return sum;
//}

int sumAllNumbersOfRange(int beginRange, int endRange)
{
    if (endRange == 1)
    {
        return 1;
    }

    if (endRange == beginRange)
    {
        return beginRange;
    }

    return endRange + sumAllNumbersOfRange(beginRange, endRange - 1);
}

int main()
{
    int beginRange, endRange;

    cout << "Please enter begin range: " << endl;
    cin >> beginRange;
    cout << "Please enter end range: " << endl;
    cin >> endRange;

    cout << "Sum of all numbers from " << beginRange << " to " << endRange << " = " << sumAllNumbersOfRange(beginRange, endRange) << endl;
}