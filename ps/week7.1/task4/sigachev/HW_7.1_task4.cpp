// Необходимо отсортировать первые две трети массива в порядке возрастания, если среднее
// арифметическое всех элементов больше нуля; иначе - лишь первую треть. Остальную часть
// массива не сортировать, а расположить в обратном порядке.
#include <iostream>
using namespace std;

void arraySort(int arr[], int newSize, int size) {
    for (int i = 1; i < newSize; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            arr[j] = key;
            j--;
        }
    }
    for (int i = 0; i < newSize; ++i){
        cout << arr[i] << "  ";
    }
    for (int i = size - 1; i >= newSize; --i){
        cout << arr[i] << "  ";
    }
}

int main()
{
    const int size = 15;
    int arr[size], sum = 0;
    for (int i = 0; i < size; ++i)
    {
        //arr[i] = rand() % 15 - 8;     // среднее меньше 0
        arr[i] = rand() % 15;           // среднее больше 0
        cout << arr[i] << "  ";
        sum += arr[i];
    }
    cout << endl;
    (sum / size > 0 ? arraySort(arr, size / 3 * 2, size) : arraySort(arr, size / 3, size));
}