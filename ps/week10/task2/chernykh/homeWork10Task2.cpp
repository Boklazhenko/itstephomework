#include <iostream>
#include <string>

using namespace std;

const int carsSize = 2;
struct Cars
{
	string MODEL;
	double LENGTH;
	int CLEARANCE;
	double ENGINE_VOLUME;
	int ENGINE_POWER;
	int WHEEL_DIAMETER;
	string COLOR;
	string GEARBOX_TYPE;
}automobile[carsSize];

struct Criteria
{
	string MODEL;
	double LENGTH;
	int CLEARANCE;
	double ENGINE_VOLUME;
	int ENGINE_POWER;
	int WHEEL_DIAMETER;
	string COLOR;
	string GEARBOX_TYPE;
};

int i = 0;

void createNewCar()
{
	char temp;
	int currentCar = 1;
	do
	{
		cout << "Please add no more " << carsSize << " cars!" << endl
			<< "Current car: " << currentCar << endl;

		cout << "Enter car model [" << currentCar << "]:" << endl;
		cin >> automobile[i].MODEL;
		cout << "Enter lenght of car [" << currentCar << "]:" << endl;
		cin >> automobile[i].LENGTH;
		cout << "Enter clearance of car [" << currentCar << "]:" << endl;
		cin >> automobile[i].CLEARANCE;
		cout << "Enter engine volume of car [" << currentCar << "]:" << endl;
		cin >> automobile[i].ENGINE_VOLUME;
		cout << "Enter engine power of car [" << currentCar << "]:" << endl;
		cin >> automobile[i].ENGINE_POWER;
		cout << "Enter wheel diameter of car [" << currentCar << "]:" << endl;
		cin >> automobile[i].WHEEL_DIAMETER;
		cout << "Enter color of car [" << currentCar << "]:" << endl;
		cin >> automobile[i].COLOR;
		cout << "Enter gearbox type of car [" << currentCar << "]:" << endl;
		cin >> automobile[i].GEARBOX_TYPE;

		if (carsSize == currentCar)
		{
			break;
		}

		cout << "If you want add one more car - 1, else - 0" << endl;
		cin >> temp;

		++i;
		++currentCar;
	} while (temp != '0');
}

void showAllCars()
{
	for (int j = i; j >= 0; --j)
	{
		cout << "Car model: " << automobile[j].MODEL << ", ";
		cout << "lenght " << automobile[j].LENGTH << " meters, ";
		cout << "clearance " << automobile[j].CLEARANCE << " mm, ";
		cout << "engine volume " << automobile[j].ENGINE_VOLUME << " cm3, ";
		cout << "engine power " << automobile[j].ENGINE_POWER << " hp, ";
		cout << "wheel diameter R" << automobile[j].WHEEL_DIAMETER << ", ";
		cout << "color: " << automobile[j].COLOR << ", ";
		cout << "gearbox type: " << automobile[j].GEARBOX_TYPE << ".";
		cout << endl;
	}
}

void searchByCriteria(Cars automobile[carsSize], const Criteria& criteria)//идея была вот такая, реализовать не смог
{
	for (int i = 0; i < carsSize; ++i)
	{
		if (automobile[i].LENGTH == criteria.LENGTH)
		{
			cout << "Car model: " << automobile[i].MODEL << ", ";
			cout << "lenght " << automobile[i].LENGTH << " meters" << endl;
		}
		else if (automobile[i].CLEARANCE == criteria.CLEARANCE)
		{
			cout << "Car model: " << automobile[i].MODEL << ", ";
			cout << "clearance " << automobile[i].CLEARANCE << " mm" << endl;
		}
		else if (automobile[i].ENGINE_VOLUME == criteria.ENGINE_VOLUME)
		{
			cout << "Car model: " << automobile[i].MODEL << ", ";
			cout << "engine volume " << automobile[i].ENGINE_VOLUME << " cm3" << endl;
		}
		else if (automobile[i].ENGINE_POWER == criteria.ENGINE_POWER)
		{
			cout << "Car model: " << automobile[i].MODEL << ", ";
			cout << "engine power " << automobile[i].ENGINE_POWER << " hp" << endl;
		}
		else if (automobile[i].WHEEL_DIAMETER == criteria.WHEEL_DIAMETER)
		{
			cout << "Car model: " << automobile[i].MODEL << ", ";
			cout << "wheel diameter R " << automobile[i].WHEEL_DIAMETER << ", " << endl;
		}
		else if (automobile[i].COLOR == criteria.COLOR)
		{
			cout << "Car model: " << automobile[i].MODEL << ", ";
			cout << "color " << automobile[i].COLOR << ", " << endl;
		}
		else if (automobile[i].GEARBOX_TYPE == criteria.GEARBOX_TYPE)
		{
			cout << "Car model: " << automobile[i].MODEL << ", ";
			cout << "gearbox type " << automobile[i].GEARBOX_TYPE << "." << endl;
		}
	}
}

int main()
{
	Cars automobile[carsSize];
	


    createNewCar();

	

	showAllCars();

	Criteria length = {};
	length.LENGTH = 5.1;

	searchByCriteria(&automobile[carsSize], length);

	return 0;
}