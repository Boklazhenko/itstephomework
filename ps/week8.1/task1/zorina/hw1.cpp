//Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры). Необходимо
//создать третий массив минимально возможного размера, в котором нужно собрать элементы массива A, 
//которые не включаются в массив B, без повторений.
//

#include <iostream>
using namespace std;

void fillArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 30;
}

void printArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		cout << *(arr + i) << "\t";
	cout << endl;
}


int main()
{
	//очень долго мучалась, особенно с тем, чтобы не было повторов, поэтому решила сама для себя прописать почти каждый шаг
	
	int size = 0, size1, size2;

	cout << "Input the size of the first array\n";
	cin >> size1;
	int* arr1 = new int[size1];
	fillArray(arr1, size1);

	cout << "Input the size of the second array\n";
	cin >> size2;
	int* arr2 = new int[size2];
	fillArray(arr2, size2);


	printArray(arr1, size1);
	cout << endl;
	printArray(arr2, size2);
	cout << endl;

	//вычисляем размер нового массива


	for (int i = 0; i < size1; ++i) { //идем по первому массиву

		bool ok = true;

		int counter = 0;
		for (int x = i + 1; x < size1; ++x) // сначала сравниваем элементы первого массива, если далее по массиву находим такой же, 
											//то прерываем цикл, если такого элемента в массиве далее нет, то переходим к вложенному циклу
			if (arr1[x] == arr1[i])
				ok = false;

		if (ok) {
			for (int j = 0; j < size2; ++j) { //сравниваем неповторяющиеся элементы первого массива с элементами второго, если элемент 1
				if (arr1[i] != arr2[j])       //не совпал с элементом 2, то увеличиваем счетчик
					++counter;

			}
			if (counter == size2)//если счетчик равен размеру второго массива, значит, что проверяемый элемент из первого отсутствует во 2м
				++size;           //значит под него надо ставить место в первом, увеличиваем 2ой счетчик на 1
		}
	}
	//cout << counter << endl; выводила, чтоб проверить, что все правильно
	//size = counter;

	int* arr = new int[size]; //создаем третий динамический массив

	int index = 0;
	for (int i = 0; i < size1; ++i) { //идем по первому массиву

		bool ok = true;
		int counter = 0;

		for (int x = i + 1; x < size1; ++x) //проверяем, если дальше в массиве есть такой же элемент, то пропускаем его, т.о. в новый массив попадет
			if (arr1[x] == arr1[i])          //последний из повторяющихся элементов
				ok = false;

		if (ok) {
			for (int j = 0; j < size2; ++j) //сравниваем неповторяющиеся элементы первого массива с элементами второго, если элемент 1
				if (arr1[i] != arr2[j])   //не совпал с элементом 2, то увеличиваем счетчик
					++counter;


			if (counter == size2) {  //если счетчик равен размеру второго массива, значит, что проверяемый элемент из первого отсутствует во 2м
										 // значит записываем это значение в третий массив и продвигаемся к следующему элементу третьего массива
				arr[index] = arr1[i];
				++index;
			}
		}
	}
	printArray(arr, size);

	delete[]arr1;
	delete[]arr2;
	delete[]arr;
}