// Пользователь вводит прибыль фирмы за год (12 месяцев). Затем пользователь вводит диапазон (например, 3 и 6 – поиск между 3-м и 6-м месяцем).
//Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна с учетом выбранного диапазона

#include <iostream>
using namespace std;

int main()
{
	int start, end;
	const int size = 12;
	
	double ar[size];
	for (int i = 0; i < size; ++i)
	{
		cout << "Input profit per " <<i+1<< " mounth\n";
				cin >> ar[i];
	}
	while (true) {
		cout << endl;
		cout << "Input start of the period\n";
		cin >> start;
		cout << "Input end of the period\n";
		cin >> end;
		double min = ar[start - 1], max = ar[start - 1];
		if (start <= end && start > 0 && end < 13) {
			for (int i = start; i <= end; i++) {
				if (ar[i - 1] < min)
					min = ar[i - 1];
				if (ar[i - 1] > max)
					max = ar[i - 1];
			}
			for (int i = start; i <= end; i++) {
				if (ar[i - 1] == min)
					cout << "Min "<<min<< " profit in mounth "<<i <<"\n ";
				if (ar[i - 1] == max)
					cout << " Max " << max << " profit in mounth " << i << "\n ";
			}
			break;
		}
		else  cout << "\nWrong input\n"; 
	}
}


