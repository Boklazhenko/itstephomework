// решение моего племянника, ничего не меняла. Если захочется запустить программу, вводите а 1, другие считает, но по несколько часов))


#include <iostream>
using namespace  std;

int desc[8][8];
int MakedMoves;
int possibleSteps[8][2] = { {1,-2}, {2,-1}, {2,1}, {1,2}, {-1,2}, {-2,1}, {-2,-1}, {-1,-2} }; // Возможные ходы


void PrintDesc() {
	for (int x = 0, aasd = 8; x < 8; x++) {
		cout << endl;
		cout << aasd << "  |  ";
		aasd--;
		for (int y = 0; y < 8; y++) {
			if (desc[x][y] < 10)
				cout << desc[x][y] << "  ";
			else { cout << desc[x][y] << " "; }
		}

	}
	cout << "\n      __ __ __ __ __ __ __ __  ";
	cout << "\n      A  B  C  D  E  F  G  H  \n";
}


bool searchAndMakeMoves(int x, int y) {

	if ((x < 0) || (x >= 8) || (y < 0) || (y >= 8)) return false;
	if (desc[x][y] != 0)
		return false;

	MakedMoves++;
	desc[x][y] = MakedMoves;
	if (MakedMoves == 64)
		return true;


	for (int i = 0; i < 8; i++)
		if (searchAndMakeMoves(x + possibleSteps[i][0], y + possibleSteps[i][1]))
			return true;
	MakedMoves--;
	desc[x][y] = 0;

	return false;
}

int main()
{
	int  KnightPositionX = 0, KnightPositionY = 0, bufKnightPositionX; // Координаты коня в массиве и буфер для обраотки введённой координаты x
	char bufKnightPositionY; // Буфер для обработки введённой координаты y

	// Заполняем массив нулями, так как конь ещё не стоит на поле
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {
			desc[x][y] = 0;
		}
	}
	//Просим пользователя ввести координаты коня
	cout << "\nInput place of knight\n";
	cout << "Pattern : A 1\n";
	// Помещяем введённые значения в буферные переменные, так как нумерация доски отличается от нумерации массива и надо преобразовать одно в другое
	cin >> bufKnightPositionY >> bufKnightPositionX;

	// Преобразуем координату столбца

	// Скорее всего тут пригодится enum
	// При использовании switch-case появляется ещё 8 случаев или теряется возможность использовать маленькие литеры
	if (bufKnightPositionY == 'A' || bufKnightPositionY == 'a') {
		KnightPositionY = 0;
	}
	else if (bufKnightPositionY == 'B' || bufKnightPositionY == 'b') {
		KnightPositionY = 1;
	}
	else if (bufKnightPositionY == 'C' || bufKnightPositionY == 'c') {
		KnightPositionY = 2;
	}
	else if (bufKnightPositionY == 'D' || bufKnightPositionY == 'd') {
		KnightPositionY = 3;
	}
	else if (bufKnightPositionY == 'E' || bufKnightPositionY == 'e') {
		KnightPositionY = 4;
	}
	else if (bufKnightPositionY == 'F' || bufKnightPositionY == 'f') {
		KnightPositionY = 5;
	}
	else if (bufKnightPositionY == 'G' || bufKnightPositionY == 'g') {
		KnightPositionY = 6;
	}
	else if (bufKnightPositionY == 'H' || bufKnightPositionY == 'h') {
		KnightPositionY = 7;
	}

	// Преобразуем координату строки

	switch (bufKnightPositionX) {
	case 1:
		KnightPositionX = 7;
		break;
	case 2:
		KnightPositionX = 6;
		break;
	case 3:
		KnightPositionX = 5;
		break;
	case 4:
		KnightPositionX = 4;
		break;
	case 5:
		KnightPositionX = 3;
		break;
	case 6:
		KnightPositionX = 2;
		break;
	case 7:
		KnightPositionX = 1;
		break;
	case 8:
		KnightPositionX = 0;
		break;
	}


	// А вот здесь вызывается рекурсивная функция

	MakedMoves = 0;
	searchAndMakeMoves(KnightPositionX, KnightPositionY);

	// После выполнения рекурсии нам остаётся только вывести доску
	PrintDesc();
}
