#include <iostream>

int main()
{
	int cellSize;
	do {
		std::cout << "Enter 0 if you wont exit\n";
		std::cout << "Enter cell size: ";
		std::cin >> cellSize;
		if (cellSize < 0)
			std::cout << "Error must be greater than zero \n";
		for (int y = 0; y < 8; ++y) {
			if (y % 2 == 0)
			{
				int count = 0;
				for (int x = 0; x < cellSize * 4; ++x)
				{
					for (int i = 0; i < cellSize; ++i)
						std::cout << "8";
					for (int a = 0; a < cellSize; ++a)
						std::cout << "#";
					count++;
					if (count % 4 == 0)
						std::cout << std::endl;
				}

			}
			else {
				int count = 0;
				for (int x = 0; x < cellSize * 4; ++x)
				{
					for (int i = 0; i < cellSize; ++i)
						std::cout << "#";
					for (int a = 0; a < cellSize; ++a)
						std::cout << "8";
					count++;
					if (count % 4 == 0)
						std::cout << std::endl;
				}

			}
		}
	} while (cellSize != 0);
}