// Реализовать структуру «Автомобиль» (длина, клиренс (высота посадки), 
//объем двигателя, мощность двигателя, диаметр колес, цвет, тип коробки передач). 
//Создайте функции для задания значений, отображения значений, поиска значений.


#include <iostream>
using namespace std;
struct car {
	float longCar;
	float clearance;
	float enginеСapacity;
	float diameterWheel;
	char color[20];
	char transmission[20];
};
car carName;
car Put()
{
	cout << "LongCar?";
	cin >> carName.longCar;
	cout << "Clearance?";
	cin >> carName.clearance;
	cout << "EnginеCapacity?";
	cin >> carName.enginеСapacity;
	cout << "DiameterWheel?";
	cin >> carName.diameterWheel;
	cout << "Color?";
	cin >> carName.color;
	cout << "Transmission?";
	cin >> carName.transmission;
	return carName;
}
void Show (car &carName)
{
	cout << "LongCar - "<< carName.longCar << endl;
	cout << "Clearance - "<< carName.clearance << endl;
	cout << "EnginеCapacity - " << carName.enginеСapacity <<endl;
	cout << "DiameterWheel - "<< carName.diameterWheel << endl;
	cout << "Color - "<< carName.color << endl;
	cout << "Transmission - " << carName.transmission << endl;
}

float findParametr (car& carName)
{
	int answer;
	cout << "Если Вы хотите узнать длину машины, введите 1" << endl;
	cout << "Если Вы хотите узнать клиренс машины, введите 2" << endl;
	cout << "Если Вы хотите узнать объем двигателя  машины, введите 3" << endl;
	cout << "Если Вы хотите узнать диаметр колес  машины, введите 4" << endl;
	cout << "Если Вы хотите узнать цвет машины, введите 5" << endl;
	cout << "Если Вы хотите узнать тип коробки передач, введите 6" << endl;
	cout << "Если Вам не нужна информация по машине, введит 7" << endl;
	cin >> answer;
	
	while (answer != 7)
	{
		switch (answer)
		{
		case 1:
			cout << "Длина машины " << carName.longCar << endl;
			return carName.longCar;
			
		case 2:
			cout << "Клиренс машины " << carName.clearance << endl;
			return carName.clearance;
			
		case 3:
			cout << "Oбъем двигателя " << carName.enginеСapacity << endl;
			return carName.enginеСapacity;
			

		case 4:
			cout << "Диаметр колес " << carName.diameterWheel << endl;
			return carName.diameterWheel;
			
		case 5:
			cout << "Цвет машины " << carName.color << endl;
			break;
		case 6:
			cout << "Тип коробки передач " << carName.transmission << endl;
			break;
		case 7:
			exit(0);
			break;
		default:
			cout << "Ошибка, введено некоректное значение." << endl;
			break;
		}
		cout << "Если Вы хотите узнать длину машины, введите 1" << endl;
		cout << "Если Вы хотите узнать клиренс машины, введите 2" << endl;
		cout << "Если Вы хотите узнать объем двигателя  машины, введите 3" << endl;
		cout << "Если Вы хотите узнать диаметр колес  машины, введите 4" << endl;
		cout << "Если Вы хотите узнать цвет машины, введите 5" << endl;
		cout << "Если Вы хотите узнать тип коробки передач, введите 6" << endl;
		cout << "Если Вам не нужна информация по машине, введит 7" << endl;
		cin >> answer;
	}
}
float findParametrNum(car& carName)
{
	int answer;
	cout << "Если Вы хотите узнать длину машины, введите 1" << endl;
	cout << "Если Вы хотите узнать клиренс машины, введите 2" << endl;
	cout << "Если Вы хотите узнать объем двигателя  машины, введите 3" << endl;
	cout << "Если Вы хотите узнать диаметр колес  машины, введите 4" << endl;
	cout << "Если Вам не нужна информация по машине, введит 5" << endl;
	cin >> answer;

	while (answer != 7)
	{
		switch (answer)
		{
		case 1:
			cout << "Длина машины " << carName.longCar << endl;
			return carName.longCar;

		case 2:
			cout << "Клиренс машины " << carName.clearance << endl;
			return carName.clearance;

		case 3:
			cout << "Oбъем двигателя " << carName.enginеСapacity << endl;
			return carName.enginеСapacity;
		case 4:
			cout << "Диаметр колес " << carName.diameterWheel << endl;
			return carName.diameterWheel;
		case 5:
			exit(0);
			break;
		default:
			cout << "Ошибка, введено некоректное значение." << endl;
			break;
		}
		cout << "Если Вы хотите узнать длину машины, введите 1" << endl;
		cout << "Если Вы хотите узнать клиренс машины, введите 2" << endl;
		cout << "Если Вы хотите узнать объем двигателя  машины, введите 3" << endl;
		cout << "Если Вы хотите узнать диаметр колес  машины, введите 4" << endl;
		cout << "Если Вам не нужна информация по машине, введит 5" << endl;
		cin >> answer;
	}
}
char findParametrWord(car& carName)
{
	int answer;
	cout << "Если Вы хотите узнать цвет машины, введите 1" << endl;
	cout << "Если Вы хотите узнать тип коробки передач, введите 2" << endl;
	cout << "Если Вам не нужна информация по машине, введит 3" << endl;
	cin >> answer;

	while (answer != 7)
	{
		switch (answer)
		{
		
		case 1:
			cout << "Цвет машины " << carName.color << endl;
			break;
		case 2:
			cout << "Тип коробки передач " << carName.transmission << endl;
			break;
		case 3:
			exit(0);
			break;
		default:
			cout << "Ошибка, введено некоректное значение." << endl;
			break;
		}
		
		cout << "Если Вы хотите узнать цвет машины, введите 1" << endl;
		cout << "Если Вы хотите узнать тип коробки передач, введите 2" << endl;
		cout << "Если Вам не нужна информация по машине, введит 3" << endl;
		cin >> answer;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	car Granta= Put();
	Show(Granta);
	findParametrNum(Granta);
	findParametrWord(Granta);
	return 0;
}



