
//Нашел в инете
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

namespace {

	//ширина и высота массива
	const unsigned width = 6;
	const unsigned height = 2;

	
	const unsigned arraySize = width * height;


	unsigned char src[arraySize];
	unsigned char dst[arraySize];

	//печать массива на экране
	void arraySrcToCout()
	{
		for (unsigned y = 0; y < height; ++y)
		{
			for (unsigned x = 0; x < width; ++x)
			{
				const unsigned i = y * width + x;
				cout << static_cast<unsigned>(src[i]) << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}

} 

int main()
{
	//инициалищируем рандомайзер
	srand(time(NULL));

	//заполняем
	for (unsigned i = 0; i < arraySize; ++i)
		src[i] = rand() % 10;

	//выведем на экран исходный массив
	arraySrcToCout();

	//переменные для пользовательского ввода
	int choice;
	int shift;

	while (true)
	{
		cout << "----------------------------" << "\n";
		cout << "0 - exit. " << "\n";
		cout << "1 - shift left " << "\n";
		cout << "2 - shift right " << "\n";
		cout << "3 - shift up " << "\n";
		cout << "4 - shift down " << "\n";
		cout << "----------------------------" << "\n";
		cout << "shift: ";
		cin >> shift; //ввод режима сдвига
		if (shift) {
			cout << "choice: ";
			cin >> choice; //ввод величниы сдвига
		}

		if (!shift || !choice)
			break;

		bool original = true;
		if (choice < 0)
		{
			/*
			если сдвиг отрицательный,
			то устанавливаем абсолютное значение (неотрицательное)
			и ставим флаг, что режим изменился на противоположный
			*/
			choice = -choice;
			original = false;
		}

		if (shift == 1 || shift == 2)
		{
			//сдвиг по-горизонтали
			unsigned split = choice % width; //индекс стартового столбца
			unsigned wrap = width - split; //количество столбцов, которые переместятся по кругу
			if (shift == (original ? 2 : 1)) //взаимозаменяем значения, если сдвиг в противоположную сторону
				swap(split, wrap);

			for (unsigned y = 0; y < height; ++y) //для каждой строки
			{
				//копируем во временный массив элементы от стартового столбца до конца строки
				memcpy(dst + y * width, src + split + y * width, wrap);
				//копируем во временный массив элементы из начала в конец строки
				memcpy(dst + wrap + y * width, src + y * width, split);
			}
		}
		else if (shift == 3 || shift == 4)
		{
			//сдвиг по-вертикали
			unsigned a; //начальный индекс столбца
			unsigned b; //целевой индекс столбца
			for (unsigned y = 0; y < height; ++y)
			{
				a = y;
				b = (y + choice) % height;
				if (shift == (original ? 4 : 3)) //взаимозаменяем значения, если направление противоположное
					swap(a, b);
				//копируем во временный массив строку целиком в нужное место
				memcpy(dst + width * a, src + width * b, width);
			}
		}
		else
			break;

		//копируем элементы из временного массива в основной
		memcpy(src, dst, arraySize);
		//выводим основной массив на экран
		arraySrcToCout();
	};

	return 0;
}