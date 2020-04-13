

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Man
{
public:
	Man(char* Name, char* LastName, int Age, int Phone)
	{
		cout << "man ctor" << endl;
		strcpy_s(_name, _countof(_name), Name);
		strcpy_s(_lastName, _countof(_lastName), LastName);
		_age = Age;
		_phone = Phone;
	}
	Man(char* Name, char* LastName)
	{
		cout << "man ctor" << endl;
		strcpy_s(_name, _countof(_name), Name);
		strcpy_s(_lastName, _countof(_lastName), LastName);
		_age = 0;
		_phone = 0;
	}
	Man()
	{
		cout << "man ctor" << endl;
		strcpy_s(_name, _countof(_name), "no Name");
		strcpy_s(_lastName, _countof(_lastName), "no LastName");
		_age = 0;
		_phone = 0;
	}
	~Man()
	{
		cout << "man dtor" << endl;
	}

	char* toString()
	{
		char buff[3000];
		sprintf_s(buff, 3000, "%s %s  %d  %d", _name, _lastName, _age, _phone);
		return buff;
	}
	void print()
	{
		cout << toString() << endl;
	}
	char* getManName()
	{
		return _name;
	}
	char* getManLastName()
	{
		return _lastName;
	}
	int getAge()
	{
		return _age;
	}
	int getPhone()
	{
		return _phone;
	}
private:

	char _name[100];
	char _lastName[100];
	int _age;
	int _phone;
};

class Flat
{
public:
	Flat()
	{
		cout << "flat ctor" << endl;
		_namber = 0;
		_size = 0;
		_flat = new Man[0];
		strcpy_s(_info, _countof(_info), "no Info");
	}
	explicit Flat(int Namber)
	{
		cout << "flat ctor" << endl;
		_namber = Namber;
		_flat = new Man[0];
		_size = 0;
		strcpy_s(_info, _countof(_info), "no Info");
	}
	Flat(const Flat& a)
	{
		cout << "copy flat ctor" << endl;
		_namber = a._namber;
		_flat = new Man[a._size];
		for (int i = 0; i < a._size; ++i)
			_flat[i] = a._flat[i];
		_size = a._size;
		strcpy_s(_info, _countof(_info), a._info);
	}
	~Flat()
	{
		cout << "flat dtor" << endl;
		delete[] _flat;
	}

	int getFlatNumder()
	{
		return _namber;
	}
	void setFlatNumder(int number)
	{
		_namber = number;
	}
	Man getMan(int sizeMan)
	{
		return _flat[sizeMan];
	}
	int getSize()
	{
		return _size;
	}

	void addManInFlat(Man* a)
	{
		for (int i = 0; i < _size - 1; ++i)
		{
			if (strcmp(_flat[i].getManName(), a->getManName()) == 0 && strcmp(_flat[i].getManLastName(), a->getManLastName()) == 0)
				return;
		}
		Man* flat = new Man[_size + 1];
		for (int i = 0; i < _size; ++i)
		{
			flat[i] = _flat[i];
		}
		flat[_size] = *a;
		++_size;
		delete[] _flat;
		_flat = flat;
	}
	void remuveManInFlat(Man* a)
	{
		int index = -1;
		for (int i = 0; i < _size; ++i)
		{
			if (strcmp(_flat[i].getManName(), a->getManName()) == 0 && strcmp(_flat[i].getManLastName(), a->getManLastName()) == 0)
				index = i;
		}
		if (index < 0)
		{
			cout << "A tenant with such names is not found in this quartium" << endl;
		}
		else
		{
			for (int i = index; i < _size - 1; ++i)
				_flat[i] = _flat[i + 1];
			Man* tmp = new Man[_size - 1];
			for (int i = 0; i < _size - 1; ++i)
				tmp[i] = _flat[i];
			--_size;
			delete[] _flat;
			_flat = tmp;
		}
	}
	void print()
	{
		for (int i = 0; i < _size; ++i)
			_flat[i].print();
	}
private:
	int _namber;
	Man* _flat;
	int _size;
	char _info[255];
};

class House
{
public:
	
	House(char* City, char* Street, int numberHouse, int quantityFlat)
	{
		cout << "house ctor" << endl;
		strcpy_s(_city, _countof(_city), City);
		strcpy_s(_street, _countof(_street), Street);
		_numberHouse = numberHouse;
		_quantityFlat = quantityFlat;
		house = new Flat[_quantityFlat];
		for (int i = 0; i < _quantityFlat; ++i)
			house[i].setFlatNumder(i + 1);
	}
	~House()
	{
		cout << "house dtor" << endl;
		delete[] house;
	}

	Flat getHouse(int size)
	{
		return house[size];
	}

	void addFlatInHouse(Flat* a)
	{
		for (int i = 0; i < _quantityFlat; ++i)
			if (house[i].getFlatNumder() == a->getFlatNumder())
			{
				for (int j = 0; j < a->getSize(); ++j)
				{
					house[i].addManInFlat(&a->getMan(j));
				}
			}
	}

	void remuveFlatHouse(Flat* a)
	{
		for (int i = 0; i < _quantityFlat; ++i)
		{
			if (house[i].getFlatNumder() == a->getFlatNumder())
			{
				for (int j = 0; j < a->getSize(); ++j)
				{
					house[i].remuveManInFlat(&a->getMan(j));
				}
			}
		}
	}
	void print()
	{
		for (int i = 0; i < _quantityFlat; ++i)
		{
			house[i].print();
		}
	}
	int countManInHouse()
	{
		int count = 0;
		for (int i = 0; i < _quantityFlat; ++i)
			count += house[i].getSize();
		return count;
	}
	bool isExist(Man *a)
	{
		for (int i = 0; i < _quantityFlat; ++i)
		{
			for (int j = 0; j < house[i].getSize(); ++j)

				if (strcmp(house[i].getMan(j).getManName(), a->getManName()) == 0 && 
					strcmp(house[i].getMan(j).getManLastName(), a->getManLastName()) == 0)
					return true;
		}
		return false;
	}

private:
	char _city[255];
	char _street[255];
	int _numberHouse;
	int _quantityFlat;
	Flat* house;
};
int main()
{
	char Name[255] = "Ivan";
	char LastName[255] = "Petrov";
	int Age = 22;
	int Phone = 45654645;
	Man man(Name, LastName, Age, Phone);
	Man* pMan = &man;
	char Name1[255] = "Katy";
	char LastName1[255] = "Petrova";
	Man women(Name1, LastName1);
	Man* pWomen = &women;
	Flat flat1(1);
	flat1.addManInFlat(pMan);
	flat1.addManInFlat(pWomen);
	flat1.print();
	flat1.remuveManInFlat(pWomen);
	flat1.print();
	flat1.addManInFlat(pWomen);
	flat1.print();
	Flat* pFlat1 = &flat1;
	Flat flat2(2);
	char Name2[255] = "Sirgey";
	char LastName2[255] = "Stepanov";
	int Age2 = 28;
	int Phone2 = 45654555;
	Man man2(Name2, LastName2, Age2, Phone2);
	Man* pMan2 = &man2;
	char Name3[255] = "Sveta";
	char LastName3[255] = "Ivanova";
	Man women3(Name3, LastName3);
	Man* pWomen3 = &women3;
	flat2.addManInFlat(pMan2);
	flat2.addManInFlat(pWomen3);
	Flat* pFlat2 = &flat2;
	char City[255] = "Perm";
	char Street[255] = "Sibirskaya";
	int numberHouse = 10;
	int quantityFlat = 2;
	House house(City, Street, numberHouse, quantityFlat);
	house.addFlatInHouse(pFlat1);
	house.addFlatInHouse(pFlat2);
	house.print();
	house.remuveFlatHouse(pFlat2);
	house.print();
	house.addFlatInHouse(pFlat2);
	house.print();
	cerr << man.toString() << " is " << (house.isExist(pMan) ? "" : "not") << "exist" << endl;
	return 0;
}
