#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
	Human()
	{
		//Without him, don't work!
	}

	Human(string name, string lastName, int phone)
	{
		_pName = name;
		_pLastName = lastName;
		_pPhone = new int(phone);
	}

	Human(const Human& other)
	{
		_pName = other._pName;
		_pLastName = other._pLastName;
		_pPhone = new int(*other._pPhone);
	}

	~Human()
	{
		delete _pPhone;
	}

	string getName()
	{
		return _pName;
	}

	string getLastName()
	{
		return _pLastName;
	}

	int getPhone()
	{
		return *_pPhone;
	}

	void setName(const string& name)
	{
		_pName = name;
	}

	void setLastName(const string& lastName)
	{
		_pLastName = lastName;
	}

	void setPhone(const int& phone)
	{
		_pPhone = new int(phone);
	}

	void print()
	{
		cout << "Name: " << _pName << " Lastname: " << _pLastName << " Phone: " << *_pPhone << endl;
	}

	bool isEqual(const Human& human)
	{
		return _pName == human._pName && _pLastName == human._pLastName && _pPhone == human._pPhone;
	}

private:
	string _pName;
	string _pLastName;
	int* _pPhone;
};

class Apartment
{
public:
	Apartment()
	{
		_pNumberApartment = 0;
		_pHumans = new Human * [0];
		_pHumanCount = 0;
	}

	Apartment(int number, Human** humans, int humanCount)
	{
		_pHumanCount = humanCount;
		_pHumans = humans;
		_pNumberApartment = number;
	}

	Apartment(const Apartment& other)
	{
		_pNumberApartment = other._pNumberApartment;
		_pHumanCount = other._pHumanCount;
		_pHumans = new Human * [_pHumanCount];

		for (int i = 0; i < _pHumanCount; ++i)
		{
			_pHumans[i] = other._pHumans[i];
		}
	}

	~Apartment()
	{
		for (int i = 0; i < _pHumanCount; ++i)
		{
			delete _pHumans[i];
		}
		delete[] _pHumans;
	}

	int getNumberApartment()
	{
		return _pNumberApartment;
	}

	int getHumanCount()
	{
		return _pHumanCount;
	}

	void setNumberApartment(const int& numberApartment)
	{
		_pNumberApartment = numberApartment;
	}

	void setHuman(const Human& human, int id)
	{
		*_pHumans[id] = human;
	}

	void setHumanCount(const int& humanCount)
	{
		_pHumanCount = humanCount;
	}

	void print()
	{
		cout << "\nNumber apartment: " << _pNumberApartment << endl;

		for (int i = 0; i < _pHumanCount; ++i)
		{
			cout << "[" << i + 1<< "]" << "Name: " << _pHumans[i]->getName() << " Last name: " << _pHumans[i]->getLastName() << " Phone: " << _pHumans[i]->getPhone() << endl;
		} //cout << "[" << i << "]" << _pHumans[i]->print() << endl; Don't work  
	}

	void addHuman(Human* pHuman)
	{
		Human** humans = new Human * [_pHumanCount + 1];
		for (int i = 0; i < _pHumanCount; ++i)
		{
			humans[i] = _pHumans[i];
		}
		humans[_pHumanCount] = pHuman;

		++_pHumanCount;
		delete[] _pHumans;
		_pHumans = humans;

		/*for (int i = 0; i < _pHumanCount; ++i) don't work
		{
			delete humans[i];
		}*/
	}

	void deleteHuman(Human* pHuman)
	{
		int tempIndex = -1;

		for (int i = 0; i < _pHumanCount; ++i)
		{
			if (_pHumans[i]->isEqual(*pHuman))
			{
				tempIndex = i;
			}
		}

		if (tempIndex < 0)
		{
			return;
		}

		for (int i = tempIndex; i < _pHumanCount - 1; ++i)
		{
			_pHumans[i] = _pHumans[i + 1];
		}

		--_pHumanCount;
	}

	bool isEqual(const Apartment& apartment)
	{
		return _pNumberApartment == apartment._pNumberApartment && _pHumanCount == apartment._pHumanCount;
	}

private:
	int _pNumberApartment;
	int _pHumanCount;
	Human** _pHumans;
};

class House
{
public:

	House(string address, int houseNumber, Apartment** apartments, int apartmentsCount)
	{
		_pAddress = address;
		_pHouseNumber = houseNumber;
		_pApartmentsCount = apartmentsCount;
		_pApartrtments = apartments;
	}

	House(const House& other)
	{
		_pAddress = other._pAddress;
		_pHouseNumber = other._pHouseNumber;
		_pApartmentsCount = other._pApartmentsCount;
		_pApartrtments = new Apartment * [_pApartmentsCount];

		for (int i = 0; i < _pApartmentsCount; ++i)
		{
			_pApartrtments[i] = other._pApartrtments[i];
		}
	}

	~House()
	{
		/*for (int i = 0; i < _pApartmentsCount; ++i) don't work
		{
			delete _pApartrtments[i];
		}*/
		delete[] _pApartrtments;
	}

	void addApartment(Apartment* pApartment)
	{
		Apartment** apartments = new Apartment * [_pApartmentsCount + 1];
		for (int i = 0; i < _pApartmentsCount; ++i)
		{
			apartments[i] = _pApartrtments[i];
		}
		apartments[_pApartmentsCount] = pApartment;

		++_pApartmentsCount;
		delete[] _pApartrtments;
		_pApartrtments = apartments;

		/*for (int i = 0; i < _pApartmentsCount; ++i) don't work too
		{
			delete apartments[i];
		}*/
	}

	void deleteApartment(Apartment* pApartment)
	{
		int tempIndex = -1;

		for (int i = 0; i < _pApartmentsCount; ++i)
		{
			if (_pApartrtments[i]->isEqual(*pApartment))
			{
				tempIndex = i;
			}
		}

		if (tempIndex < 0)
		{
			return;
		}

		for (int i = tempIndex; i < _pApartmentsCount - 1; ++i)
		{
			_pApartrtments[i] = _pApartrtments[i + 1];
		}

		--_pApartmentsCount;
	}

	string getAddress()
	{
		return _pAddress;
	}

	int getHouseNumber()
	{
		return _pHouseNumber;
	}

	int getApartmentsCount()
	{
		return _pApartmentsCount;
	}

	void setAddress(const string& address)
	{
		_pAddress = address;
	}

	void setHouseNumber(const int& houseNumber)
	{
		_pHouseNumber = houseNumber;
	}

	void setApartmentsCount(const int& apartmentsCount)
	{
		_pApartmentsCount = apartmentsCount;
	}

	void print()
	{
		cout << "Address: " << _pAddress << " House number: " << _pHouseNumber  <<endl;
	}

private:
	string _pAddress;
	int _pHouseNumber;
	int _pApartmentsCount;
	Apartment** _pApartrtments;
};

int main()
{
	Human* humanOne = new Human("Sergey", "Sergeevich", 334324);
	Human* humanTwo = new Human("Inav", "Ivanovich", 23427351);
	Human* humanThree = new Human("Alexandr", "Alexandrovich", 123751724);
	Human* humanFour = new Human("Semen", "Semenich", 34127321);
	Human* humanFive = new Human("Vasiliy", "Vasilevich", 32572138);

	Human* humanSix = new Human("RobotOne", "R2D2_ver_1.0", 21835712);
	Human* humanSeven = new Human("RobotTwo", "R2D2_ver_2.0", 23685213);

	Apartment* humansApartment = new Apartment;
	humansApartment->addHuman(humanOne);
	humansApartment->addHuman(humanTwo);
	humansApartment->addHuman(humanThree);
	humansApartment->addHuman(humanFour);
	humansApartment->addHuman(humanFive);

	cout << "Humans count now is: " << humansApartment->getHumanCount() << endl; //5
	humansApartment->setNumberApartment(1);
	cout << "\nNumber of apartment is: " << humansApartment->getNumberApartment() << endl;

	humansApartment->print();

	humansApartment->deleteHuman(humanFive);
	cout << "\nHumans count now is: " << humansApartment->getHumanCount() << endl; //4

	humansApartment->print();

	Apartment* robotsApartment = new Apartment;
	robotsApartment->addHuman(humanSix);
	robotsApartment->addHuman(humanSeven);

	cout << "Robots count now is: " << robotsApartment->getHumanCount() << endl; //2
	robotsApartment->setNumberApartment(2);
	cout << "\nNumber of apartment is: " << robotsApartment->getNumberApartment() << endl;

	robotsApartment->print();
	robotsApartment->deleteHuman(humanSix);
	cout << "Robots count now is: " << robotsApartment->getHumanCount() << endl; //1

	Apartment** arrHeap = new Apartment * [2]
	{
		humansApartment, robotsApartment
	};

	House baseOne("TopSecret", 1, arrHeap, 2);
	baseOne.addApartment(humansApartment);
	baseOne.addApartment(robotsApartment);

	baseOne.print();

	/*delete humanOne;
	delete humanTwo;
	delete humanThree;
	delete humanFour;
	delete humanFive;
	delete humanSix;
	delete humanSeven;

	delete humansApartment;
	delete robotsApartment;

	delete[] arrHeap;*/
}