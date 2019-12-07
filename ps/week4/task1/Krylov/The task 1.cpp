#include <iostream>
#include <windows.h>

using namespace std;

void FirstFigure();
void SecondFigure();
void ThirdFigure();
void FourthFigure();
void FifthFigure();
void SixthFigure();
void SeventhFigure();
void EighthFigure();
void NinthFigure();
void TenthFigure();



int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "");
	setlocale(LC_CTYPE, "");
	
	int choice;
	cout << "Введите от 1 до 10"<< endl;
	cin >> choice;

	switch (choice) {

	case 1:
		FirstFigure();
		break;

	case 2:
		SecondFigure();
		break;

	case 3:
		ThirdFigure();
		break;

	case 4:
		FourthFigure();
		break;

	case 5:
		FifthFigure();
		break;

	case 6:
		SixthFigure();
		break;

	case 7:
		SeventhFigure();
		break;

	case 8:
		EighthFigure();
		break;

	case 9:
		NinthFigure();
		break;

	case 10:
		TenthFigure();
		break;
	}
}

void FirstFigure() {
	int maxStars = 10;
	int i, j, k;
	for (i = maxStars; i >= 1; i--) {
		for (j = maxStars - 1; j >= i; j--) {
			cout << " ";
		}
		for (k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}

}

void SecondFigure() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void ThirdFigure() {
	int height = 10;
	int maxStars = height * 2 - 1;
	int space = height - 1;
	int i, j, k;

	for (int i = height; i >= 1; i--) {
		for (int j = space; j >= i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= maxStars; k++) {
			cout << "*";
		}
		maxStars -= 2;
		cout << endl;
	}
}

void FourthFigure() {
	int minStars = 1;
	int height = 10;
	int space = height - 1;
	int i, j, k;

	for (i = 0; i < height; i++) {
		for (j = space; j > i; j--) {
			cout << " ";
		}
		for (k = 0; k < minStars; k++) {
			cout << "*";
		}
		minStars += 2;
		cout << endl;
	}
}

void FifthFigure() {
	ThirdFigure();
	FourthFigure();
}

void SixthFigure() {
	int size = 10;
	int i, j;
	int px = 1;
	for (i = 1; i <= size; i++) {
		for (j = 1; j <= size; j++) {
			if (j <= px || j >= size - px + 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		if (i <= size / 2)
			px++;
		else
			px--;
		cout << endl;
	}
}

void SeventhFigure() {
	int size = 10;
	for (int i = size; i >= -size; i--) {
		for (int j = size; j >= abs(i); j--) {
			cout << "*";
		}
		cout << endl;
	}
}

void EighthFigure() {
	int size = 10;
	int i, j, k;
	for (int i = size; i >= -size; i--) {
		for (int j = 1; j <= abs(i); j++) {
			cout << " ";
		}
		for (int k = size; k >= abs(i); k--) {
			cout << "*";
		}
		cout << endl;
	}
}

void NinthFigure() {
	for (int i = 1; i <= 10; i++) {
		for (int j =10; j >= i; j--) {
			cout << "*";
		}
		cout << endl;
	}
}

void TenthFigure() {
	int size = 10;
	int i, j, k;
	for (int i = 1; i <= size; i++) {
		for (int j = size - 1; j >= i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}
}