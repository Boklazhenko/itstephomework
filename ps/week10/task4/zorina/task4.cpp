// Реализовать структуру «Машина» (цвет, модель, номер). Номер машины может представлять из себя или пятизначный номер или слово до 8 символов. 
//Рекомендации: номер реализовать как объединение. Создать экземпляр структуры «Машина» и реализовать для него следующие функции: 
//Заполнение машины Печать машины Создать массив из 10 экземпляров структуры «Машина» и реализовать для него следующие функции: 
//Редактировать машину Печать всех машин Поиск машины по номеру
//

#include <iostream>
#include <string>
using namespace std;

struct Car {
	string Model;
	string Color;
	string RegNum;

	void addCar() {
		cout << "Input car model\n";
		getline(cin, Model);
		cout << ("Input color\n");
		getline(cin, Color);
		cout << ("Input registration number -5 numbers\n");
		getline(cin, RegNum);
	}
};

void printCar(Car& car) {
	cout << "\n\nCar model: " << car.Model << "\nColor: " << car.Color;
	cout << "\nRegistration number: " << car.RegNum << endl << endl;
}
void printcarList(Car carList[], int size) {
	for (int i = 0; i < size; ++i)
		printCar(carList[i]);
}
void searchForNumber(Car carList[], int size, string key) {

	for (int i = 0; i < size; ++i) {
		if (carList[i].RegNum == key)
			printCar(carList[i]);
	}
}

void editСar(Car carList[], int size, string key, string newValue) {

	for (int i = 0; i < size; ++i) {
		if (carList[i].RegNum == key) {
			cout << "Enter new car model\n";
			getline(cin, newValue);
			carList[i].Model = newValue;
			cout << "Enter new color\n";
			getline(cin, newValue);
			carList[i].Color = newValue;
			cout << "Enter new registration number\n";
			getline(cin, newValue);
			carList[i].RegNum = newValue;
		}
	}
}

int main()
{
	Car car1, car2, car3, car4, car5, car6, car7, car8, car9, car10;
	car1.addCar();
	car2.addCar();
	car3.addCar();
	/*car4.addCar();
	car5.addCar();
	car6.addCar();
	car7.addCar();
	car8.addCar();
	car9.addCar();
	car10.addCar();*/
	const uint8_t size = 3;
	Car carList[size] = { car1, car2, car3, /*car4, car5, car6, car7, car8, car9, car10*/ };
	printcarList(carList, size);
	string key;
	cout << "Enter the car number you are looking for\n";
	getline(cin, key);
	searchForNumber(carList, size, key);
	cout << "Enter the car number you want to edit\n";
	getline(cin, key);
	string newValue;
	editСar(carList, size, key, newValue);
}