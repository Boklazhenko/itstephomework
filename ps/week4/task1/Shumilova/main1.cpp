//Задание 1. (неделя 4)
// Вывести на экран фигуры заполненные звездочками.
//Диалог реализовать при помощи меню.

#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the size of the square: "; 
	//введите размер квадрата
	int N;
	cin >> N;
		
	cout<<"\nWhere to draw a triangle?\n\n" ; 
	//где нарисовать треугольник?
	cout << "1 - Up & right \n\n"; //вверху и справа А
	cout << "2 - Left & down \n\n";//слева и внизу Б
	cout << "3 - Up \n\n";//вверху В
	cout << "4 - Down \n\n";//внизу Г
	cout << "5 - Up & down \n\n";//вверху и внизу Д
	cout << "6 - Left & right \n\n";//слева и справа Е
	cout << "7 - Left \n\n";//слева Ж
	cout << "8 - Right \n\n";//справа З
	cout << "9 - Up & left \n\n";//вверху и слева И
	cout << "0 - Right & down 0\n\n";//справа и внизу К
	char key;
	cin >> key;
	cout << "\n";
	
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			
			switch (key) 
			{
			case'1':

				if (i<j ) //А над главной диагональю
					cout << "* ";
				else cout << "  ";
				break;

			case'2':
				if (i > j) // Б под главной диагональю
					cout << "* ";
				else cout << "  ";
				break;

			case'3':
				if ( i < j && i+j<N-1)//В над главной И над побочной
					cout << "* ";
				else cout << "  ";
				break;

			case'4':
				if (i > j && i + j > N - 1)	//Г под главной И под побочной
					cout << "* ";
				else cout << "  ";
				break;

			case'5':
				if ((i < j )&&( i + j < N - 1)||//Д над главной И над побочной ИЛИ
					( i > j )&& (i + j > N - 1))//под главной И под побочной
					cout << "* ";
				else cout << "  ";
				break;

			case'6':
				if ((i > j) && (i + j < N - 1)||//Е под главной И над побочной ИЛИ
					(i < j) && (i + j > N - 1))//над главной И под побочной
					cout << "* ";
				else cout << "  ";
				break;

			case'7':
				if ((i > j) && (i + j < N - 1)) //Ж под главной И над побочной
					cout << "* ";
				else cout << "  ";
				break;

			case'8':
				if (i < j && i + j > N - 1) //З над главной И под побочной
					cout << "* ";
				else cout << "  ";
				break;

			case'9':
				if (i + j < N-1) //И над побочной
					cout << "* ";
				else cout << "  ";
				break;

			case'0':
				if (i + j > N - 1) //К под побочной
					cout << "* ";
				else cout << "  ";
				break;
			}
		}
		cout << endl;
	}
	cout << endl;
}