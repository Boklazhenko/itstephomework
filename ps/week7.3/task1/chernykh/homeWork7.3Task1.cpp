#include <iostream>

using namespace std;

int main()
{
    const int arraySize = 5;
    int arrayOne[arraySize]{ 1,2,3,4,5 };
    int arrayTwo[arraySize]{};

    int* pArrayOne = arrayOne;
    int* pArrayTwo = arrayTwo;

    

    for (int i = 0; i < arraySize; ++i)
    {
        *(pArrayTwo + i) = *(pArrayOne + i);
    }

    for (int i = 0; i < arraySize; ++i)
    {
        cout << *(arrayTwo + i) << "\t";
    }
}
