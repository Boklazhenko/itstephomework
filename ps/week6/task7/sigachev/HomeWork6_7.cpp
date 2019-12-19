//Написать функцию, определяющую количество положительных, отрицательных и нулевых
//элементов передаваемого ей массива
#include <iostream>
using namespace std;

void arrayStatistics(int arr[7][7], int size) {
    int sumNumberPositiv = 0, sumNumberNegativ = 0, sumZero = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (arr[i][j] < 0) ++sumNumberNegativ;
            else if (arr[i][j] > 0) ++sumNumberPositiv;
            else ++sumZero;
        }
    }
    cout << "\nIn array:" << endl
        << "Positive number " << sumNumberPositiv << endl
        << "Negative number " << sumNumberNegativ << endl
        << "Zero number \t" << sumZero << endl;
}

int main()
{
    const int size = 7;
    int arr[size][size];
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            arr[i][j] = rand() % 18 - 7;        // Нашел в интернете как заполнить массив случайными 
            cout << arr[i][j] << "\t";          // положительными и отрицательными числами и нулями
        }                                       // Массив вывел для наглядности.
        cout << endl;
    }
    arrayStatistics(arr, size);
}
