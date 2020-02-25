// Реализовать структуру «Машина» (цвет, модель, номер). 
//Номер машины может представлять из себя или пятизначный 
//номер или слово до 8 символов. Рекомендации: номер реализовать 
//как объединение. Создать экземпляр структуры «Машина» и реализовать 
//для него следующие функции: Заполнение машины Печать машины Создать 
//массив из 10 экземпляров структуры «Машина» 
//и реализовать для него следующие функции: Редактировать машину 
//Печать всех машин Поиск машины по номеру


#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <typeinfo>
using namespace std;
union numMashin {
	int num;
	char let[8];
};
struct mashin {
	char model[30];
	char color[30];
	char number[8];

};
mashin PutMashin(mashin a) 
{
	cout << "Введите модель  машины" << endl;
	cin >> a.model;
	cout << "Введите цвет  машины " << endl;
	cin >> a.color;
	cout << "Введите номер  машины " << endl;
	cin >> a.number;
	return a;
}
void printMashin(mashin a)
{
	cout << "Модель машины: " << a.model << endl;
	cout << "Цвет машины: " << a.color << endl;
	cout << "Номер машины: " << a.number << endl;
 }


void Put(mashin arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		cout << "Введите модель " << i + 1 << " машины  " << endl;
		cin >> arr[i].model;
		cout << "Введите цвет " << i + 1 << " машины " << endl;
		cin >> arr[i].color;
		cout << "Введите номер " << i + 1 << "  машины " << endl;
		cin >> arr[i].number;
	}
}
void editMashin(mashin arr[], int size)
{

	int answer, i;
	cout << "Если Вы хотите изменить название модели машины, введите 1" << endl;
	cout << "Если Вы хотите цвет машины, введите 2" << endl;
	cout << "Если Вы хотите изменить номер машины, введите 3" << endl;
	cout << "Если Вы не хотите редактировать информацию, введит 4" << endl;
	cin >> answer;
	if (answer > 0 && answer < 4)
	{
		cout << "Выберите номер машины, информацию по котoрой хотели бы изменить" << endl;
		cin >> i;
	}
	else
	{
		return;
	}
	while (answer != 4)
	{
		switch (answer)
		{
		case 1:
			cout << "Введите новую модель " << i << "машины " << endl;
			cin >> arr[i].model;
			break;
		case 2:
			cout << "Введите новый цвет " << i << " машины" << endl;
			cin >> arr[i].color;
			break;
		case 3:
			cout << "Введите  новый номер " << i << " машины" << endl;
			cin >> arr[i].number;
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "Ошибка, введено некоректное значение." << endl;
			break;
		}
		cout << "Если Вы хотите изменить название модели машины, введите 1" << endl;
		cout << "Если Вы хотите цвет машины, введите 2" << endl;
		cout << "Если Вы хотите изменить номер машины, введите 3" << endl;
		cout << "Если Вы не хотите редактировать информацию, введит 4" << endl;
		cin >> answer;
	}
}

void PrintAllMashin(mashin arr[], int size)
{
	cout << setw(5) << "№" << setw(25) << "Модель" << setw(25) << "цвет" << setw(25)
		<< "Номер" << endl;
	for (int i = 0; i < size; ++i)
	{

		cout << setw(5) << i + 1 << setw(25) << arr[i].model << setw(25) << arr[i].color << setw(25) << arr[i].number << endl;

	}
	cout << endl;
}
mashin findByNumber(char number[], mashin arr[], int size)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (_stricmp(number, arr[i].number) == 0)
		{
			return arr[i];
			++count;
		}
	}
	if (count == 0)
		cout << "Машина с таким номером не найдена" << endl;
}

	int main()
	{
		setlocale(LC_ALL, "rus");
		const int quantityMashin = 10;
		mashin listMashin[quantityMashin];
		Put(listMashin, quantityMashin);
		PrintAllMashin(listMashin, quantityMashin);
		char choice;
		do {
			cout << "Если Вы хотите редактровать  информацию, введите 1" << endl;
			cout << "Если Вы хотите напечатать список машин, введите 2" << endl;
			cout << "Если Вы хотите найти машину по номеру, введите 3" << endl;
			cout << "Если Вы хотите выйти из программы, введите 4" << endl;
			cin >> choice;
			switch (choice)
			{
			case '1':
				editMashin(listMashin, quantityMashin);
				break;
			case '2':
				PrintAllMashin(listMashin, quantityMashin);
				break;
			case '3':
				cout << "Номер машины" << endl;
				char number[8];
				cin >> number;
				mashin findMashin= findByNumber(number, listMashin, quantityMashin);
				printMashin(findMashin);
				break;
			case '4':
				exit(0);
				break;
			default:
				cout << "Неправильный выбор\n";
				break;
			}
		} while (choice != '4');

		delete []listMashin;
		return 0;
	}

