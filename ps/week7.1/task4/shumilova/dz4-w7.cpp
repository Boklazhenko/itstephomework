/* Задание 4 (неделя 7)
Необходимо отсортировать первые две трети массива в порядке возрастания,
если среднее арифметическое всех элементов больше нуля;
иначе - лишь первую треть.
Остальную часть массива не сортировать, а расположить в обратном порядке.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
void sort(int array[], int sizeChanged);
int main()
{
	const int size = 9;
	int array[size];
	srand(11);
	for (int i = 0; i < size; ++i) //создание массива
	{
		array[i] = rand() % 400 + (-100); // от -100 до 300 для проверки больше нуля (59.7778)
		//array[i] = rand() % 800 + (-400); // от -400 до 400 для проверки меньше нуля (-151.333)
		cout << array[i] << "\t";
	}
	cout << "\n";
	float average = 0; //среднее арифметическое
	for (int i = 0; i < size; ++i) //вычисление среднего арифметического массива
		average += array[i];
	average /= size;
	int sizeChanged; //измененный размер
	if (average > 0)
		sizeChanged = size / 3 * 2;
	else sizeChanged = size / 3;
	sort(array, sizeChanged); //сортировка
	for (int i = 0; i < sizeChanged; ++i) //вывод измененного массива
		cout << array[i] << "\t";

	for (int i = size - 1; i >= sizeChanged; --i)//вывод оставшейся части в обратном порядке
		cout << array[i] << "\t";
}
void sort(int array[], int sizeChanged)
{
	for (int i = 0; i < sizeChanged; ++i)
		for (int j = sizeChanged - 1; j > i; --j)
			if (array[j - 1] > array[j])
			{
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
}

