#include <iostream>

using namespace std;

int main()
{
    const int arraySize = 5;
    int array[arraySize]{ 1,2,3,4,5 };
    int sum = 0;

    int* pSum = &sum;
    int* pArray = array;

    for (int i = 0; i < arraySize; ++i)
    {
        *pSum += *(array + i);
    }

    cout << *pSum << endl;
}
