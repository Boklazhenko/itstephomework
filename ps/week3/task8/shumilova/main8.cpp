// 8.
// Пользователь вводит число. 
//Определить количество цифр в этом числе, 
//посчитать их сумму и среднее арифметическое. 
//Определить количество нулей в этом числе. 
//Общение с пользователем организовать через меню.
//

#include <iostream>
using namespace std;
int main()
{

	int num, one, kolvo=0, sum=0, nul=0;
	float arif;

	cout << "Vvedite chislo: ";
	cin >> num;
	
	while (num > 0)
	{
		one = num % 10;
		num = (num - one) / 10;
		kolvo++;
		sum +=one;
				
		if (one == 0)
			nul++;
	}
	arif = (float)sum / kolvo;
	   
cout << "\n\nKolichestvo cifer: "<<kolvo << "\n\n";
cout << "Summa cifer: "<<sum << "\n\n";
cout << "Srednee arifmeticheskoe: " << arif << "\n\n";
cout << "Kolichestvo nuley: " << nul << "\n\n";
}