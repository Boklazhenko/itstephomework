//Задание 2. (неделя 4)
// Написать программу, которая выводит на экран 
//шахматную доску с заданным размером клеточки. 
// ###---###--- 
// ###---###--- 
// ###---###--- 
// ---###---###
// ---###---###
// ---###---###

#include <iostream>
using namespace std;
int main()
{

	int cells, size;
	cout << "enter the number of cells ";
	cin >> cells;
	cout << "enter cell size ";
	cin >> size;

	for (int i = 1; i <= cells; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			for (int j = 0; j < cells; ++j)
			{
				for (int k = 0; k < size; ++k)
				{
					if ((i + j) % 2 == 1)
					{
						cout << "# ";
					}
					else cout << "- ";
				}
			}
			cout << endl;
		}
	}
}
