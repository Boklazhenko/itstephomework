#include<iostream>
#include <cmath>
using namespace std;

bool  isPrimeNum(int n) {
    bool result(true);

    if ((n == 2) || (n == 3))
        result = true;
    else {
        for (int i = 2; i <= floor(sqrt(n)); ++i)
            if (n % i == 0)
            {
                result = false;
                break;
            }
    }
    return (result && (n != 1));
}

int* removePrimeNum(int* A, int size) {

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (!isPrimeNum(A[i]))
            ++count;
    }

    int* B = new int[count];

    int j = 0;
    for (int i = 0; i < size; ++i)
        if (!isPrimeNum(A[i]))
            B[j++] = A[i];

    for (int j = 0; j < count; j++)
        cout << B[j] << " ";
    return B;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* A = new int[size];
    cout << "Fill the array: ";
    for (int i = 0; i < size; i++)
        cin >> A[i];
    int* res = removePrimeNum(A, size);

    delete[]A;
    delete[]res;
    return 0;
}