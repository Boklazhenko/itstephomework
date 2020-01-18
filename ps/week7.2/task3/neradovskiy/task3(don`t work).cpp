#include <iostream>

void createBoard(char arr[][6], int size);
void printBoard(char arr[][6], int size);
void movesHorse(char arr[][6], int size, int y, int x);

int main()
{
	const int BOARD_SiZE = 6;
	char board[BOARD_SiZE][BOARD_SiZE];
	createBoard(board, BOARD_SiZE);
	printBoard(board, BOARD_SiZE);
	std::cout << "Please enter the horse`s horizontal coordinates  (0 - " << BOARD_SiZE - 1 << "): ";
	int x;
	std::cin >> x;
	std::cout << "Please enter the horse`s vertical coordinates  (0 - " << BOARD_SiZE - 1 << "): ";
	int y;
	std::cin >> y;
	board[y][x] = 'H';
	printBoard(board, BOARD_SiZE);
	std::cout << std::endl;
	movesHorse(board, BOARD_SiZE, y, x);
	printBoard(board, BOARD_SiZE);
	std::cout << std::endl;
}
void createBoard(char arr[][6], int size) {
	for (int y = 0; y < size; ++y) {
		for (int x = 0; x < size; ++x) {
			arr[y][x] = '.';
		}
	}
}
void printBoard(char arr[][6], int size) {
	for (int y = 0; y < size; ++y) {
		for (int x = 0; x < size; ++x) {
			std::cout << arr[y][x] << " ";
		}
		std::cout << std::endl;
	}
}
void movesHorse(char arr[][6],int size, int y, int x) {
	
	if (y >= 0 && y < size && x >= 0 && x < size) {
		arr[y][x] = '+';
		movesHorse(arr, size, y + 2, x + 1);
	}
	 if (y >= 0 && y < size && x >= 0 && x < size) {
		arr[y][x] = '+';
		movesHorse(arr, size, y + 1, x + 2);
	}
	 if (y >= 0 && y < size && x >= 0 && x < size) {
		arr[y][x] = '+';
		movesHorse(arr, size, y - 2, x - 1);
	}
	if (y >= 0 && y < size && x >= 0 && x < size) {
		arr[y][x] = '+';
		movesHorse(arr, size, y - 2, x + 1);
	}
	if (y >= 0 && y < size && x >= 0 && x < size) {
		arr[y][x] = '+';
		movesHorse(arr, size, y - 1, x - 2);
	}
	if (y >= 0 && y < size && x >= 0 && x < size) {
		arr[y][x] = '+';
		movesHorse(arr, size, y + 1, x - 2);
	}
	if (y >= 0 && y < size && x >= 0 && x < size) {
		arr[y][x] = '+';
		movesHorse(arr, size, y - 1, x + 2);
	}
	if (y >= 0 && y < size && x >= 0 && x < size) {
		arr[y][x] = '+';
		movesHorse(arr, size, y + 2, x - 1);
	}
}