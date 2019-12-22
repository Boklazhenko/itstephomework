// Написать перегруженные функции и протестировать их в основной программе :
// Нахождения максимального значения в одномерном массиве;
// Нахождения максимального значения в двумерном массиве;
// Нахождения максимального значения в трёхмерном массиве;
// Нахождения максимального значения двух целых;
// Нахождения максимального значения трёх целых;



#include <iostream>
#include <algorithm>  // Нашел как подключать max и min на http://www.cplusplus.com/
using namespace std;

int maximumElement(int arr[5], int row) {
    int max = arr[0];
    for (int i = 0; i < row; ++i) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}
//*************************************************************************************
// Передачу многомерных массивов в функцию подсмотрел на YouTube
// 1 ролик - https://www.youtube.com/watch?v=r1wWlUCZW08&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=46&t=0s
// 2 ролик - https://www.youtube.com/watch?v=9sPEgByku0E&list=PLu_OotMHrHWkm_PWVXLwp3pHdDAURShy0&index=7&t=0s
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int maximumElement(int arr[5][5], int row, int col) {
    int max = arr[0][0];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int maximumElement(int arr[5][5][5], int row, int col, int depth) {
    int max = arr[0][0][0];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            for (int k = 0; k < depth; ++k) {
                if (max < arr[i][j][k]) {
                    max = arr[i][j][k];
                }
            }
        }
    }
    return max;
}
int maximumElement(int firstNumber, int secondNumber) {
    //int max = (firstNumber > secondNumber ? max = firstNumber : max = secondNumber);  // через тернарный оператор.
    return max(firstNumber, secondNumber);      // Нашел про max и min на http://www.cplusplus.com/
}
int maximumElement(int firstNumber, int secondNumber, int threeNumber) {
    return max((max(firstNumber, secondNumber)), threeNumber);
}

int main()
{
    const int size = 5;
    int arr[size];
    int arr1[size][size];
    int arr2[size][size][size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 7;
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            arr1[i][j] = rand() % (25 - 15) + 15;
        }
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                arr2[i][j][k] = rand() % (125 - 75) + 75;
            }
        }
    }
    int firstElement, secondElement, thirdElement;
    cout << "Enter first element ";
    cin >> firstElement;
    cout << "\nEnter second element ";
    cin >> secondElement;
    cout << "\nEnter third element ";
    cin >> thirdElement;
    cout << "Maximum in one-dimensional array\t"   << maximumElement(arr, size) << endl;
    cout << "Maximum in two-dimensional array\t"   << maximumElement(arr1, size, size) << endl;
    cout << "Maximum in three-dimensional array\t" << maximumElement(arr2, size, size, size) << endl;
    cout << "Maximum of the first two numbers\t"   << maximumElement(firstElement, secondElement) << endl;
    cout << "Maximum of all numbers\t\t\t"         << maximumElement(firstElement, secondElement, thirdElement) << endl;

}

