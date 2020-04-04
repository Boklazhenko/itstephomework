// Создайте программу, имитирующую многоквартирный дом. Необходимо иметь классы «Человек», «Квартира», «Дом». Класс «Квартира» 
//содержит динамический массив объектов класса «Человек». Класс «Дом» содержит массив объектов класса «Квартира». Каждый из классов 
//содержит переменные-члены и функции-члены, которые необходимы для предметной области класса. Обращаем ваше внимание, что память под 
//строковые значения выделяется динамически. Например, для ФИО в классе «Человек». Не забывайте обеспечить
//классы различными конструкторами (конструктор копирования обязателен), деструкторами. В main протестировать работу полученного набора классов.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Person {
public:

	Person() {
		_name = nullptr;
		_lastName = nullptr;
	}

	Person(const char* name, const char* lastName) {
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);
		_lastName = new char[strlen(lastName) + 1];
		strcpy(_lastName, lastName);
	}

	Person(const Person& other) {
		_name = new char[strlen(other._name) + 1];
		strcpy(_name, other._name);
		_lastName = new char[strlen(other._lastName) + 1];
		strcpy(_lastName, other._lastName);
	};

	~Person() {
		delete[]_name;
		delete[]_lastName;
	}

public:
	void print() {
		std::cout << _name << " " << _lastName << std::endl;
	}

	bool isEqual(const Person* other) {
		if (strcmp(_name, other->_name) == 0 && strcmp(_lastName, other->_lastName) == 0)
			return true;
		return false;
	}

private:
	char* _name;
	char* _lastName;
};

class Apartment
{
public:
	Apartment() {
		_number = 0;
		_numberOfPeople = 0;
		_pPeople = new Person[_numberOfPeople];
	}

	Apartment(int number) {
		_number = number;
		_numberOfPeople = 0;
		_pPeople = new Person[_numberOfPeople];
	}

	Apartment(int number, const Person* people, int countOfPeople) :Apartment(number) {
		_numberOfPeople = countOfPeople;
		_pPeople = new Person[_numberOfPeople];
		for (int i = 0; i < countOfPeople; ++i)
			_pPeople[i] = people[i];
	}

	Apartment(const Apartment& other) {
		_number = other._number;
		_numberOfPeople = other._numberOfPeople;
		_pPeople = new Person[_numberOfPeople];
		for (int i = 0; i < _numberOfPeople; ++i)
			_pPeople[i] = other._pPeople[i];
	}

public:
	void print() {
		std::cout << "Apartment number: " << _number << std::endl;
		for (int i = 0; i < _numberOfPeople; ++i)
			_pPeople[i].print();
	}
	void addPerson(const Person* people) {

		Person* pNewPeople = new Person[_numberOfPeople + 1];
		for (int i = 0; i < _numberOfPeople; ++i)
			pNewPeople[i] = _pPeople[i];
		pNewPeople[_numberOfPeople] = *people;
		_pPeople = pNewPeople;
		++_numberOfPeople;
	}

	Person* findPerson(const Person* people) {
		for (int i = 0; i < _numberOfPeople; ++i) {
			if (_pPeople[i].isEqual(people))
				return &_pPeople[i];
		}
		std::cout << "Person isn`t found\n";
		return nullptr;
	}

	void deletePerson(const Person* people) {
		int indexToRemove = -1;
		for (int i = 0; i < _numberOfPeople; ++i)
			if (_pPeople[i].isEqual(people))
				i = indexToRemove;
		if (indexToRemove < 0)
			std::cout << "Person isn`t found\n";
		Person* pNewPeople = new Person[_numberOfPeople - 1];
		for (int i = 0; i < indexToRemove; ++i) {
			pNewPeople[i] = _pPeople[i];
			for (int j = i; j < _numberOfPeople - 1; ++j)
				pNewPeople[j] = _pPeople[j + 1];
			_pPeople = pNewPeople;
			--_numberOfPeople;
		}
	}

private:
	int _number;
	int _numberOfPeople;
	Person* _pPeople;
};


class ApartmentBuilding {
public:
	ApartmentBuilding() {
		_street = nullptr;
		_number = 0;
		_numberOfApartment = 0;
		Apartment* _pApartment = nullptr;
	}

	ApartmentBuilding(const char* street, int number, int numberOfApartment, Apartment* pApartment) {
		_street = new char[strlen(street) + 1];
		strcpy(_street, street);
		_number = number;
		_numberOfApartment = numberOfApartment;
		Apartment* _pApartment = new Apartment[_numberOfApartment];
		for (int i = 0; i < numberOfApartment; ++i)
			_pApartment[i] = pApartment[i];
	}

	ApartmentBuilding(const ApartmentBuilding& other) {
		_street = new char[strlen(other._street) + 1];
		strcpy(_street, other._street);
		_number = other._number;
		_numberOfApartment = other._numberOfApartment;
		_pApartment = new Apartment[_numberOfApartment];
		for (int i = 0; i < _numberOfApartment; ++i)
			_pApartment[i] = other._pApartment[i];
	};

	~ApartmentBuilding() {
		delete[]_pApartment;
	}

public:
	void print() {
		std::cout << "ApartmentBuilding`s address: " << *_street << " " << _number << std::endl;
		std::cout << "Number of apartments: " << _numberOfApartment << std::endl;
		for (int i = 0; i < _numberOfApartment; ++i)
			_pApartment[i].print();
	}

	Person* findPersonInBuilding(const Person* person) {
		for (int i = 0; i < _numberOfApartment; ++i)
			if (_pApartment[i].findPerson(person) != nullptr)
				return _pApartment[i].findPerson(person);
		return nullptr;
	}

private:
	char* _street;
	int _number;
	int _numberOfApartment;
	Apartment* _pApartment;
};

int main()
{
	Person ivanov("Ivan", "Ivanov");
	ivanov.print();
	Person petrov("Petr", "Petrov");
	petrov.isEqual(&ivanov);

	Apartment ap1(66);
	ap1.addPerson(&ivanov);
	ap1.print();
	ap1.findPerson(&petrov);
	ap1.deletePerson(&ivanov);

	ApartmentBuilding bulding("Lenina", 66, 100, ap1);
	bulding.print();
}