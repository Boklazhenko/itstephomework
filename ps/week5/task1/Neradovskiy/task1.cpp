#include <iostream>

int main()
{
	const int size = 3;
	int arr[size][size];
	std::cout << "Enter num: ";
	int num;
	std::cin >> num;
	
	for (int y = 0; y < size; ++y)
	{
		for (int x = 0; x < size; ++x)
		{
			arr[y][x] = num;
			num*=2;
			std::cout << arr[y][x] << " ";
		}
		
		std::cout << std::endl;
	}
}

