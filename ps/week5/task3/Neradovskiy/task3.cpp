#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	const int size = 5;
	int arr[size][size];
	srand(time(NULL));
	for (int y = 0; y < size; ++y)				// создаем и заполняем массив
	{
		for (int x = 0; x < size; ++x)
		{
			arr[y][x] = rand();
			std::cout << arr[y][x] << " ";
		}
		std::cout << std::endl;
	}
	int side;									// переменная для выбора меню, создал сдесь тк еще выход из программы она же
	do
	{
		std::cout << "Enter number of shifts: ";
		int shift;
		std::cin >> shift;
		if (shift < 0)
		{
			std::cout << "Error, enter the correct number of shfts\n";
			return 1;
		}
		std::cout << "Enter which direction to move the array: \n";
		std::cout << "1 - left\n";
		std::cout << "2 - right\n";
		std::cout << "3 - up\n";
		std::cout << "4 - down\n";
		std::cout << "0 - if you want exit\n";

		std::cin >> side;

		enum direction { Exit, Left, Right, Up, Down };
		int secondArr[size][size];							//массив для перезаписи в нужном пользователю порядке
		switch (side)
		{
		case Exit:
			std::cout << "Godd bye... \n";

		case Left:
			for (int y = 0; y < size; ++y)
			{
				for (int x = 0; x < size; ++x)
				{
					if (x + shift < size)
						secondArr[y][x] = arr[y][x + shift];
					else
					{
						int count = (x + shift) % size;
						secondArr[y][x] = arr[y][count];
					}
				}
				for (int x = 0; x < size; ++x)					//дополнительно вывод прописан тк часть инфы теряется если выводить сразу
				{
					std::cout << secondArr[y][x] << " ";
				}
				std::cout << std::endl;
			}
			break;

		case Right:
			for (int y = 0; y < size; ++y)
			{
				for (int x = 0; x < size; ++x)
				{
					if (x + shift < size)
						secondArr[y][x + shift] = arr[y][x];
					else
					{
						int count = (x + shift) % size;
						secondArr[y][count] = arr[y][x];
					}
				}
				for (int x = 0; x < size; ++x)
				{
					std::cout << secondArr[y][x] << " ";
				}
				std::cout << std::endl;
			}
			break;

		case Up:
			for (int y = 0; y < size; ++y)
			{
				for (int x = 0; x < size; ++x)
				{
					if (y + shift < size)
						secondArr[y][x] = arr[y + shift][x];
					else
					{
						int count = (y + shift) % size;
						secondArr[y][x] = arr[count][x];
					}
				}
				for (int x = 0; x < size; ++x)
				{
					std::cout << secondArr[y][x] << " ";
				}
				std::cout << std::endl;
			}
			break;

		case Down:
			for (int y = 0; y < size; ++y)
			{
				for (int x = 0; x < size; ++x)
				{
					if (y + shift < size)
						secondArr[y + shift][x] = arr[y][x];
					else
					{
						int count = (y + shift) % size;
						secondArr[count][x] = arr[y][x];
					}
				}
			}
			for (int y = 0; y < size; ++y)
			{
				for (int x = 0; x < size; ++x)
				{
					std::cout << secondArr[y][x] << " ";
				}
				std::cout << std::endl;
			}
			break;

		default:
			std::cout << "Error enter correct option!!!\n";
			break;
		}
	} while (side != 0);
}