// Написать программу, выполняющую сортировку одномерного массива целых чисел методом пузырьковой сортировки.

#include <iostream> 
#include <algorithm> // для std::swap. 

int main()
{
    const int length(9);
    int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };

    for (int iteration = 0; iteration < length - 1; ++iteration)
    {
        // Перебираем каждый элемент массива до последнего элемента (не включительно)
        // Последний элемент не имеет пары для сравнения
        for (int currentIndex = 0; currentIndex < length - 1; ++currentIndex)
        {
            // Если текущий элемент больше элемента после него, то меняем их местами
            if (array[currentIndex] > array[currentIndex + 1])
                std::swap(array[currentIndex], array[currentIndex + 1]);
        }
    }
    for (int index = 0; index < length; ++index)
        std::cout << array[index] << ' ';

    return 0;
}