#include <iostream>

class People {
public:
	People() {
		_pName = new std::string();
		_pMiddleName = new std::string();
		_pLastName = new std::string();
	}
	People(std::string  name, std::string middleName, std::string lastName) {
		_pName = new std::string(name);
		_pMiddleName = new std::string(middleName);
		_pLastName = new std::string(lastName);
	}
	People(const People& people) {
		_pName = new std::string(*people._pName);
		_pMiddleName = new std::string(*people._pMiddleName);
		_pLastName = new std::string(*people._pLastName);
	}
	~People() {
		delete _pName, _pMiddleName, _pLastName;
	}
public:
	void print() {
		std::cout << "Name: " << *_pName << "\nMiddle name: " << *_pMiddleName << "\nLast name: " << *_pLastName << std::endl;
	}
	void changeName(const std::string name) {
		_pName = new std::string(name);
	}
	void changeMiddleName(const std::string middleName) {
		_pMiddleName = new std::string(middleName);
	}
	void changeLastName(const std::string lastName) {
		_pLastName = new std::string(lastName);
	}
	bool isEqual(const People* otherPeople) {
		if (*_pName == *otherPeople->_pName && *_pMiddleName == *otherPeople->_pMiddleName && *_pLastName == *otherPeople->_pLastName)
			return true;
		return false;
	}
private:
	std::string* _pName;
	std::string* _pMiddleName;
	std::string* _pLastName;
};

class Apartment
{
public:
	Apartment() {
		_num = 0;
		_occupantsCount = 0;
		_pOccupants = new People[_occupantsCount];
	};
	Apartment(int numApartaments, const People* peoples, int peopleSize = 1) {
		_num = numApartaments;
		_occupantsCount = peopleSize;
		_pOccupants = new People[_occupantsCount];
		if (_occupantsCount == 1)
			_pOccupants[0] = *peoples;
		else {
			for (int i = 0; i < peopleSize; ++i)
				_pOccupants[i] = peoples[i];
		}
	}
	Apartment(const Apartment& apartment) {
		_num = apartment._num;
		_occupantsCount = apartment._occupantsCount;
		_pOccupants = new People[_occupantsCount];
		for (int i = 0; i < _occupantsCount; ++i)
			_pOccupants[i] = apartment._pOccupants[i];
	}

public:
	void print() {
		std::cout << "Apartment number: " << _num << std::endl;
		for (int x = 0; x < _occupantsCount; ++x)
			_pOccupants[x].print();
	}
	void addPeoples(const People* people, int peopleCount = 1) {

		size_t size = _occupantsCount + peopleCount;
		People* pNewOccupants = new People[size];
		for (int x = 0; x < _occupantsCount; ++x)
			pNewOccupants[x] = _pOccupants[x];
		if (peopleCount == 1)
			pNewOccupants[size - 1] = *people;
		else {
			for (int i = _occupantsCount; i < size; ++i)
				pNewOccupants[i] = people[--peopleCount];
		}
		_pOccupants = pNewOccupants;
		_occupantsCount = size;
	}

	People* getPeople(const People* people) {
		for (int i = 0; i < _occupantsCount; ++i) {
			if (_pOccupants[i].isEqual(people))
				return &_pOccupants[i];
		}
		return nullptr;
	}

	void deletePeople(const People* people) {
		for (int i = 0; i < _occupantsCount; ++i) {
			if (_pOccupants[i].isEqual(people)) {
				People* pNewOccupants = new People[_occupantsCount - 1];
				for (int x = 0; x < i; ++x)
					pNewOccupants[x] = _pOccupants[x];
				for (int y = i; y < _occupantsCount - 1; ++y)
					pNewOccupants[y] = _pOccupants[y + 1];
				_pOccupants = pNewOccupants;
				--_occupantsCount;
				break;
			}
		}
	}
	void deleteAll() {
		_occupantsCount = 0;
		_pOccupants = new People[_occupantsCount];
	}
	bool isEqual(const Apartment* other) {
		if (_num == other->_num && _occupantsCount == other->_occupantsCount) {
			int count = 0;
			for (int i = 0; i < _occupantsCount; ++i)
				if (_pOccupants[i].isEqual(&other->_pOccupants[i]))
					++count;
			if (count == _occupantsCount)
				return true;
		}
		return false;
	}
private:
	int _num;
	size_t _occupantsCount;
	People* _pOccupants;
};

class Home {
public:
	Home() {
		_pStreet = new std::string();
		_num = 0;
		_floorNum = 0;
		_apartamentsNum = 0;
		_pApartaments = new Apartment[_apartamentsNum];
	}
	Home(const std::string street, int num, int floorNum, int apartamentsNum, const Apartment* apartaments) {
		_pStreet = new std::string(street);
		_num = num;
		_floorNum = floorNum;
		_apartamentsNum = apartamentsNum;
		_pApartaments = new Apartment[_apartamentsNum];
		for (int i = 0; i < _apartamentsNum; ++i)
			_pApartaments[i] = apartaments[i];
	}
	Home(const Home& other) {
		_pStreet = new std::string(*other._pStreet);
		_num = other._num;
		_floorNum = other._floorNum;
		_apartamentsNum = other._apartamentsNum;
		_pApartaments = new Apartment[_apartamentsNum];
		for (int i = 0; i < _apartamentsNum; ++i)
			_pApartaments[i] = other._pApartaments[i];
	}
public:
	void print() {
		std::cout << "Address: " << *_pStreet << " " << _num << std::endl;
		std::cout << "Number of apartments: " << _apartamentsNum << std::endl;
		std::cout << "Number of floors: " << _floorNum << std::endl;
		for (int i = 0; i < _apartamentsNum; ++i)
			_pApartaments[i].print();
	}
	void addApartment(const Apartment* apartaments, int apartamentsNum = 1) {
		size_t oldSize = _apartamentsNum;
		_apartamentsNum += apartamentsNum;
		Apartment* pTempApartments = new Apartment[_apartamentsNum];
		for (int i = 0; i < oldSize; ++i)
			pTempApartments[i] = _pApartaments[i];
		int count = 0;
		for (int x = oldSize; x < _apartamentsNum; ++ x)
			pTempApartments[x] = apartaments[count++];
		_pApartaments = pTempApartments;
	}
	People* getPeople(const People* people) {
		for (int i = 0; i < _apartamentsNum; ++i)
			if (_pApartaments[i].getPeople(people) != nullptr)
				return _pApartaments[i].getPeople(people);
		return nullptr;
	}
	Apartment* getApartment(const Apartment* apartment) {
		for (int i = 0; i < _apartamentsNum; ++i)
			if (_pApartaments[i].isEqual(apartment))
				return &_pApartaments[i];
		return nullptr;
	}
	void deletApartment(const Apartment* apartment) {
		for (int i = 0; i < _apartamentsNum; ++i) {
			if (_pApartaments->isEqual(apartment)) {
				Apartment* pTempApartment = new Apartment[_apartamentsNum - 1];
				for (int x = 0; x < i; ++x)
					pTempApartment[x] = _pApartaments[x];
				for (int j = i; j < _apartamentsNum - 1; ++j)
					pTempApartment[j] = _pApartaments[j + 1];
				_pApartaments = pTempApartment;
				--_apartamentsNum;
				break;
			}
		}
	}
private:
	std::string* _pStreet;
	int _num;
	int _floorNum;
	size_t _apartamentsNum;
	Apartment* _pApartaments;
};


int main()
{
	People man("Nikolay", "Yuriyebich", "Neradovskiy");
	man.print();
	People man2(man);
	man2.print();
	std::cout << "--------------------------------------" << std::endl;
	int num = 10, size = 2;
	Apartment hut(num, &man);
	hut.print();
	std::cout << "--------------------------------------" << std::endl;

	People man3("Vasia", "Vasilyevich", "Vasilyev");
	People crowd[2] = { man3, man2 };
	hut.addPeoples(crowd, 2);
	Apartment hutCopy(hut);
	hutCopy.print();
	std::cout << "--------------------------------------" << std::endl;
	if (hut.isEqual(&hutCopy))
		std::cout << "[Huts if equal!!!]" << std::endl;
	hutCopy.deletePeople(&man3);
	hut.deletePeople(&man2);
	hutCopy.print();
	std::cout << "--------------------------------------" << std::endl;
	People testPeople("Chuvak", "Leviy", "Leviy");
	Apartment otherHut(20, &testPeople);
	Apartment huts[2] = { hut, otherHut };
	Home home("Malkova", 30, 9, 2, huts);
	home.print();
	std::cout << "--------------------------------------" << std::endl;
	home.deletApartment(&hut);
	home.print();
	std::cout << "--------------------------------------" << std::endl;
	home.addApartment(&hut);
	home.print();
}
