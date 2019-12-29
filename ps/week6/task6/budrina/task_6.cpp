// Написать функцию, определяющую среднее арифметическое элементов
// передоваемого ей массива

#include <iostream>
using namespace std;
void printArr(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i)
        sum += arr[i];
        cout << " Average = " << sum / size << endl;
}
int main()
{
    const int size = 5;
    int arr[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand();
        cout << arr[i] << endl;
    }
    printArr(arr, 5);
    return 0;
}