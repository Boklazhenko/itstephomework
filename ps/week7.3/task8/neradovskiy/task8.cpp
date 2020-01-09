#include <iostream>

int main()
{
    const int size = 10;
    int arr[size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
    int sum = 0;
    int* pSum = &sum;                       
    for (int i = 0; i < size; ++i) {
        *pSum += *(arr + i);
    }
    std::cout << sum;
}