
#include <iostream>
using namespace std;
//Реализовать структуру «Автомобиль» (длина, клиренс (высота посадки),
//объем двигателя, мощность двигателя, диаметр колес, цвет, тип коробки передач).
//Создайте функции для задания значений, отображения значений, поиска значений.

struct Auto_struct
{
	int lenght;
	int	clearance;
	int engine_capacity;
	int engine_power;
	int wheel_diameter;
	char color[100];
	char gearbox_type[100];
};

Auto_struct createCar()
{
	Auto_struct temp;
	cout << "lenght? ";
	cin >> temp.lenght;
	cout << "clearance? ";
	cin >> temp.clearance;
	cout << "engine_capacity? ";
	cin >> temp.engine_capacity;
	cout << "engine_power? ";
	cin >> temp.engine_power;
	cout << "wheel_diameter? ";
	cin >> temp.wheel_diameter;
	cout << "color? ";
	cin >> temp.color;
	cout << "gearbox_type? ";
	cin >> temp.gearbox_type;
	return temp;
}

void showCar(Auto_struct car[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << "Car N " << i + 1 << ": " << endl;
		cout << "\n";
		cout << "lenght: \t" << car[i].lenght << " meters\n";
		cout << "clearance: \t" << car[i].clearance << " centimetres\n";
		cout << "engine_capac: \t" << car[i].engine_capacity << " liters\n";
		cout << "engine_power: \t" << car[i].engine_power << " horse power\n";
		cout << "wheel_diamet: \t" << car[i].wheel_diameter << " inches\n";
		cout << "color: \t\t" << car[i].color << "\n";
		cout << "gearbox_type: \t" << car[i].gearbox_type << "\n";
		cout << "\n\n";
	}
}

void showCar(Auto_struct car)
{
	cout << "\n";
	cout << "lenght: \t" << car.lenght << " meters\n";
	cout << "clearance: \t" << car.clearance << " centimetres\n";
	cout << "engine_capac: \t" << car.engine_capacity << " liters\n";
	cout << "engine_power: \t" << car.engine_power << " horse power\n";
	cout << "wheel_diamet: \t" << car.wheel_diameter << " inches\n";
	cout << "color: \t\t" << car.color << "\n";
	cout << "gearbox_type: \t" << car.gearbox_type << "\n";
	cout << "\n\n";
}

int main()
{
	Auto_struct cars[] = { Auto_struct{ 6, 20, 3,120,18,"gold","robot"},
						Auto_struct{5,18,2,80,15,"blue","mechanic"},
						Auto_struct{6,8,2,100,15,"red","automatic"},
						Auto_struct{5,20,4,100,18,"black","mechanic"} };

	int size = sizeof(cars) / sizeof(Auto_struct);
	showCar(cars, size);

	Auto_struct car;
	cout << "Choose your car: \n\n";

	car = createCar();
	cout << "\n\nYour Car: \n";
	showCar(car);

	//с поиском значений всё плохо, ни один вариант не работает((
}
