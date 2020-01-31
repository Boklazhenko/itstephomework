//Реализовать структуру «Автомобиль»(длина, клиренс(высота посадки), объем двигателя,
//мощность двигателя, диаметр колес, цвет, тип коробки передач).Создайте функции для задания значений, отображения значений, поиска значений.
//

#include <iostream>
#include <string>
using namespace std;


struct Auto
{
	double Length;
	double Clearance;
	double EngineCap;
	double EnginePow;
	double WheelSize;
	string Color;
	string Transmission;

	void addCar() { //функция для задания значений
		cout << "Input car length\n";
		cin >> Length;
		cout << "Input car clearance\n";
		cin >> Clearance;
		cout << "Input engine capacity\n";
		cin >> EngineCap;
		cout << "Input engine power\n";
		cin >> EnginePow;
		cout << "Input  wheel size\n";
		cin >> WheelSize;
		cout << ("Input color\n");
		cin>> Color;
		cout << ("Input transmission type\n");
		cin>> Transmission;
	}

	void printCar() {  //функция для отображения значений
		cout << "\n\nCar length: " << Length << "\nClearance: " << Clearance << "\nEngine capaсity: " << EngineCap;
		cout << "\nEngine power: " << EnginePow << "\nWheel size: " << WheelSize << "\nColor: " << Color;
		cout << "\nTransmission type: " << Transmission << endl<<endl;
	}

	void showCriteria(string criteria) {  //функция поиска значений

		if (criteria == "length")
			cout << "\nCar length: " << Length;
		else if (criteria == "clearance")
			cout << "\nClearance: " << Clearance;
		else if (criteria == "engine capacity")
			cout << "\nEngine capacity: " << EngineCap;
		else if (criteria == "engine power")
			cout << "\nEngine power: " << EnginePow;
		else if (criteria == "wheel size")
			cout << "\nWheel size: " << WheelSize;
		else if (criteria == "color")
			cout << "\nColor: " << Color;
		else if (criteria == "transmission")
			cout << "\nTransmission type: " << Transmission;
		else
			cout << "Wrong input";
	}
};


int main()
{
	Auto nissan;
	string criteria;
	nissan.addCar();
	nissan.printCar();
	cout << "Intup criteria to see" << endl;
	cin.ignore(256, '\n'); 
	getline(cin, criteria);	
	nissan.showCriteria(criteria);
}