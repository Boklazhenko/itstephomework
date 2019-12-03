#include <iostream>

int main()
{
	enum figure { exit, a, b, v, g, d, e, j, z, i, k };
	int figureNum;
	int const SIZE = 10;  // фиксируем размерность таблицы
	do
	{
		for (int i = 1; i <= 10; ++i)       //выводим меню
			std::cout << "Input " << i << " if you wont see figure " << i << std::endl;
		std::cout << "Input 0 if you wont exit" << std::endl;
		std::cout << "Enter figure number: ";
		std::cin >> figureNum;
		switch (figureNum)
		{
		case a:
			for (int y = 0; y < SIZE; ++y)
			{
				for (int x = 0; x < SIZE; ++x)
				{
					if (x <= y)
						std::cout << " ";
					else
					{
						std::cout << "*";
					}
				}
				std::cout << std::endl;
			}
			break;
		case b:
			for (int y = 0; y < SIZE; ++y)
			{
				for (int x = 0; x < SIZE; ++x)
				{
					if (x >= y)
						std::cout << " ";
					else
					{
						std::cout << "*";
					}
				}
				std::cout << std::endl;
			}
			break;
		case v:
			for (int y = 0; y < SIZE; ++y)
			{
				for (int x = 0; x < SIZE; ++x)
				{
					if (x <= y || y + x >= SIZE - 1)
						std::cout << " ";
					else
					{
						std::cout << "*";
					}
				}
				std::cout << std::endl;
			}break;
		case g:
			for (int y = 0; y < SIZE; ++y)
			{
				for (int x = 0; x < SIZE; ++x)
				{
					if (x >= y || y + x <= SIZE - 1)
						std::cout << " ";
					else
					{
						std::cout << "*";
					}
				}
				std::cout << std::endl;
			}
			break;
		case d:
			for (int y = 0; y < SIZE; ++y)
			{
				for (int x = 0; x < SIZE; ++x)
				{
					if (x >= y && y + x >= SIZE - 1 || x < y && y + x < SIZE - 1)
						std::cout << " ";
					else
					{
						std::cout << "*";
					}
				}
				std::cout << std::endl;
			}
			break;
		case e:
			for (int y = 0; y < SIZE; ++y)
			{
				for (int x = 0; x < SIZE; ++x)
				{
					if (x >= y && y + x <= SIZE - 1 || x < y && y + x > SIZE - 1)
						std::cout << " ";
					else
					{
						std::cout << "*";
					}
				}
				std::cout << std::endl;
			}
			break;

		case j:
			for (int y = 0; y < SIZE; ++y)
			{
				for (int x = 0; x < SIZE; ++x)
				{
					if (x >= y || y + x >= SIZE - 1)
						std::cout << " ";
					else
					{
						std::cout << "*";
					}
				}
				std::cout << std::endl;
			}
			break;
		case z:
			for (int y = 0; y < SIZE; ++y)
			{
				for (int x = 0; x < SIZE; ++x)
				{
					if (x <= y || y + x <= SIZE - 1)
						std::cout << " ";
					else
					{
						std::cout << "*";
					}
				}
				std::cout << std::endl;
			}
			break;
		case i:
			for (int y = 0; y < SIZE; ++y)
			{
				for (int x = 0; x < SIZE; ++x)
				{
					if (y + x >= SIZE - 1)
						std::cout << " ";
					else
					{
						std::cout << "*";
					}
				}
				std::cout << std::endl;
			}
			break;
		case k:
			for (int y = 0; y < SIZE; ++y)
			{
				for (int x = 0; x < SIZE; ++x)
				{
					if (y + x <= SIZE - 1)
						std::cout << " ";
					else
					{
						std::cout << "*";
					}
				}
				std::cout << std::endl;
			}
			break;
		default:

			std::cout << "Error, enter the correct option: \n";
			break;
		}
	} while (figureNum != 0);

	std::cout << "\n See you";
}


