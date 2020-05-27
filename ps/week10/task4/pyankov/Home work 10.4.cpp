#include <iostream>
using namespace std;

struct Cars
{
	string color;
	string model;
	string number;
};
void fillingMachine(Cars& car)
{
	cout << "Input color" << endl;
	cin >> car.color;
	cout << "Input model" << endl;
	cin >> car.model;
	cout << "Input number" << endl;
	cin >> car.number;
	cout << endl;
}

void printCar(Cars& car)
{
	cout << "Model: \t\t" << car.model << endl;
	cout << "Number: \t" << car.number << endl;
	cout << "Color: \t\t" << car.color << endl;

}

void editMachine(Cars arr[], int size, Cars& car)
{

	cout << "New model" << endl;
	cin >> car.model;
	cout << "New color" << endl;
	cin >> car.color;
	cout << "New number" << endl;
	cin >> car.number;
}
void printAllMachines(Cars arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		Cars print = arr[i];
		printCar(print);
		cout << endl;
	}

}

void SearchCarByNumber(Cars arr[], int size, string number)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i].number == number)
		{
			printCar(arr[i]);
			break;
		}
		else
		{
			cout << "nothing found";
		}
	}

}

int main()
{
	Cars car1 = { "red","lada","12345" };
	Cars car2 = { "green","audi","asdfg" };
	Cars car3 = { "black", "bmw", "98765" };
	Cars car4 = { "red", "honda", "abvgd" };
	Cars car5 = { "black", "toyota", "abcd" };
	Cars car6 = { "red", "toyota", "agteds" };
	Cars car7 = { "white", "lada", "54876" };
	Cars car8 = { "white","lexus", "hgrtek" };
	Cars car9 = { "black","audi","15975" };
	Cars car10 = { "green","lada","klrtyfp" };

	//fillingMachine(car1);
	//printCar(car2);

	const int size = 10;
	Cars garage[size] = { car1, car2, car3,car4,car5,car6,car7,car8,car9,car10 };

	//editMachine(garage, 10, car8);

	//printAllMachines(garage, 10);

	SearchCarByNumber(garage, 10, "12345");
}

