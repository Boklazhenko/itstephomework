#include <iostream>
#include <string>
using namespace std;

struct Car
{
	string carBrand;
	string carModel;
	int length;
	int clearance;
	float engineVolume;
	int enginePower;
	int diameterWheels;
	string color;
	string transmission;
	
};


Car creatNewCar(const string& carBrand, const string& carModel, const int& length, const int& clearance, const float& engineVolume,
	const int& enginPower, const int& diameterWheels, const string& color, const string& transmission)
{
	Car newCar = { carBrand, carModel, length, clearance, engineVolume, enginPower, diameterWheels, color, transmission };

	return newCar;
}

void showAllParameters(const Car& p)

{
	cout << "Car Brand: " << p.carBrand << endl;
	cout << "Car Model: " << p.carModel << endl;
	cout << "length: " << p.length << " mm" << endl;
	cout << "clearance: " << p.clearance << " mm" << endl;
	cout << "engineVolume: " << p.engineVolume << endl;
	cout << "enginePower: " << p.enginePower << " l.s." << endl;
	cout << "diameterWheels: " << p.diameterWheels << endl;
	cout << "color: " << p.color << endl;
	cout << "transmission: " << p.transmission << endl;
	cout << endl;
}



void searchParameter(const Car& p, string par)
{

	if (par == "length")
		cout << p.length;
	else if (par == "clearance")
		cout << p.clearance;
	else if (par == "Volume")
		cout << p.engineVolume;
	else if (par == "Power")
		cout << p.enginePower;
	else if (par == "Wheels")
		cout << p.diameterWheels;
	else if (par == "Color")
		cout << p.color;
	else if (par == "Trans")
		cout << p.transmission;
	else
		cout << "No ";


}

int main()
{
	string par;

	Car BMW = { "BMW","525", 4422, 180, 2.0 , 170, 17, "Black", "manual" };
	   
	Car Audi = creatNewCar("Audi","A6",4480, 160, 3.5, 200, 18, "White", "auto");

	showAllParameters(BMW);
	showAllParameters(Audi);

	cout << "Input parametr" << endl;
	cin >> par;
	
	searchParameter(Audi,par);
	


}

