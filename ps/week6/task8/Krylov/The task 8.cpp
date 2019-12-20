//подсмотрел у Сергея
#include <iostream>
#include <algorithm> 
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
    
    return max(firstNumber, secondNumber); 
}
int maximumElement(int firstNumber, int secondNumber, int threeNumber) {
    return max((max(firstNumber, secondNumber)), threeNumber);
}

int main()
{
    setlocale(LC_ALL, "");
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
    cout << "Введите первый элемент: " << endl;
    cin >> firstElement;
    cout << "Введите второй элемент: " << endl;
    cin >> secondElement;
    cout << "Введите третий элеиент: " << endl;
    cin >> thirdElement;
    cout << "Максимум в одномерном массиве = " << maximumElement(arr, size) << endl;
    cout << "максимум в двумерном массиве = " << maximumElement(arr1, size, size) << endl;
    cout << "Максимум в трехмерном массиве = " << maximumElement(arr2, size, size, size) << endl;
    cout << "Максимальное значение двух целых = " << maximumElement(firstElement, secondElement) << endl;
    cout << "Максимальное значение трех целых = " << maximumElement(firstElement, secondElement, thirdElement) << endl;

}