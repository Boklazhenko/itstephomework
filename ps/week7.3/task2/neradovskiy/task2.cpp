#include <iostream>

int main()
{
    const int size = 10;
    int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    int* pArr = &arr[0];
    int* pArrLast = &arr[size - 1];
    do {
        int temp = *pArr;
        *pArr = *pArrLast;
        *pArrLast = temp;
        ++pArr;
        --pArrLast;
    } while (pArr < pArrLast);
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
}