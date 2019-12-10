#include <iostream>

int main()
{
	const int size = 5;
	int arr[size][size];
	std::cout << "Enter num: ";
	int num;
	std::cin >> num;

	for (int y = 0; y < size; ++y)
	{
		for (int x = 0; x < size; ++x)
		{
			arr[x][y] = num;
			num += 1;
			std::cout << arr[x][y] << " ";
		}
		std::cout << std::endl;
	}
}