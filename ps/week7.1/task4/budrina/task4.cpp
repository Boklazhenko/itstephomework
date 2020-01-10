//Необходимо отсортировать первые две трети массива в порядке возрастания,
//если среднее арифметическое всех элементов больше нуля;
//иначе - лишь первую треть.
//Остальную часть массива не сортировать, а расположить в обратном порядке.

#include <iostream>
#include <cstdlib> //for rand()
#include <ctime> //for srand(time(NULL));

using namespace std;
void sortArray(int array[], int halfArray);

int main()
{
	setlocale(LC_ALL, "rus");
	const int sz = 12;
	int array[sz];
	srand(time(NULL));

	cout << "\n Выводим массив : ";
	for (int i = 0; i < sz; i++)
	{
		array[i] = rand() % 101 - 50; // диапазон от -50 до 50

		cout << array[i] << " ";
	}
	cout << "\n\n";

	float averageArray = 0; //среднее арифметическое
	for (int i = 0; i < sz; ++i) { //вычисление среднего арифметического массива
		averageArray += array[i];
		averageArray /= sz;
	}
	cout << " Average = " << averageArray << endl;
	cout << "\n";

	int halfArray; //часть массива
	if (averageArray > 0)
		halfArray = (sz / 3) * 2; // две трети массива
	else halfArray = sz / 3; // одна треть массива

	sortArray(array, halfArray); //сортировка массива
	cout << " New sort array : ";
	for (int i = 0; i < halfArray; ++i)
		cout << array[i] << " ";       //вывод измененного массива
	cout << "\n\n New end array : ";  
	for (int i = sz - 1; i >= halfArray; --i)
		cout << array[i] << " ";     //вывод оставшейся части в обратном порядке
	cout << "\n\n";
}
void sortArray(int array[], int halfArray)
{
	for (int i = 0; i < halfArray; ++i)
		for (int j = halfArray - 1; j > i; --j)
			if (array[j - 1] > array[j])
			{
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
}