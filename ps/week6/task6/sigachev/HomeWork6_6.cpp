// Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива
#include <iostream>
using namespace std;

double averageArray(int arr[5][5], int size) {      // как передать массив в функцию подглядел на YouTube 
    double sum = 0;                                 // тут https://www.youtube.com/watch?v=9sPEgByku0E
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            sum += arr[i][j];
        }
    }
    return sum / (size * size);
}
int main()
{
    const int size = 5;
    int arr[size][size] ;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            arr[i][j] = rand() % (size * size);
            cout << arr[i][j] << "\t";             // Сделал вывод массива для наглядности.
        }
        cout << endl;
    }       // В этом месте у меня вопрос. Код работает и считает правильно, но даже здесь в небольшом коде
            // не очень читабелен, т.к. вызов функции находится не с краю слева. Сложней искать при просмотре кода.
            // Допускается ли такое, или нужно вызов функции делать по краю?
    cout << "\nAverage arraya " << averageArray(arr, size) << endl;
}
