// В двумерном массиве целых чисел посчитать сумму элементов : в каждой строке; в каждом
// столбце; одновременно по всем строкам и всем столбцам.Оформить следующим образом :
// 3 5 6 7 | 21
// 12 1 1 1 | 15
// 0 7 12 1 | 20
// --------------
// 15 3 19 9 | 56 
#include <iostream>
using namespace std;

int main()
{
    const int row = 4;
    const int col = 3;    
    int arr[row][col], sumSum = 0;
    for (int i = 0; i < row; ++i)               // Создаем и заполняем массив
    {
        for (int j = 0; j < col; ++j)   
        {
            arr[i][j] = rand() % 25;
        }        
    }
    int sumRow[row] = {};
    for (int i = 0; i < row; ++i)               // Считаем сумму по строкам
    {
        sumRow[i] = 0;
        for (int j = 0; j < col; ++j)
        {
            cout << arr[i][j] << "\t";
            sumRow[i] += arr[i][j];             
        }
        cout << " | " << sumRow[i];
        cout << endl;        
    }
    cout << "------------------------------" << endl;
    int sumCol[col] = {}, sumArray = 0;
    for (int i = 0; i < col; ++i)               // Считаем сумму по столбцам
    {
        sumCol[i] = 0;        
        for (int j = 0; j < row; ++j)
        {
            sumCol[i] += arr[j][i];
        }
        cout << sumCol[i] << "\t";
        sumArray += sumCol[i];                  // считаем общую сумму (в данном случае столбцов)
    }                                           // Хотя это сумма массива!
    cout << " | " << sumArray;
    cout << endl;
    
}