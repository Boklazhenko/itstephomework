//Написать программу, которая выводит на экран шахматную доску с заданным размером клеточки.
#include <iostream>
using namespace std;

int main()
{
	int sizeOfCell;
	cout << "Input size of cell\n";
	cin >> sizeOfCell;
	for (int y = 1; y <= 8; ++y)
	{
		for (int x = 1; x <= 8; ++x) {
			if (y % 2 == 0) {
				if (x % 2 == 1)
					for (int i = 0; i < sizeOfCell; ++i)
						cout << "#";
				else
					for (int i = 0; i < sizeOfCell; ++i)
						cout << "@";
			}
			else if (y % 2 == 1 && x % 2 == 0)
				for (int i = 0; i < sizeOfCell; ++i)
					cout << "#";
			else
				for (int i = 0; i < sizeOfCell; ++i)
					cout << "@";
		}
		cout << endl;
	}

}



