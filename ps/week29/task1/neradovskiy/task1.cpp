#include <iostream>
#include "Showroom.h"

int main()
{
	Car ferarri("Ferrari", 2000, 3.8, 25000000);
	Car bolevar("Bolevar", 1990, 1.2, 15000);
	Car porshe("Porshe", 2000, 3.5, 16000000);
	Showroom garage;
	garage.add(ferarri);
	garage.add(bolevar);
	garage.add(porshe);

	garage.print(std::cout);

	uint16_t age = 2000;
	double engCapacity = 3.5;
	unsigned long long price = 15000;
	std::vector<Car> cars = garage.findCar(age);
	for (auto i : cars)
		std::cout << i;
	std::cout << cars.size() << std::endl;

	std::cout << std::endl;
	cars = garage.findCar(engCapacity);
	for (auto i : cars)
		std::cout << i;
	std::cout << cars.size() << std::endl;

	std::cout << std::endl;
	cars = garage.findCar(price);
	for (auto i : cars)
		std::cout << i;
	std::cout << cars.size() << std::endl;

	garage.carsSort(Criteria::Price);

	garage.print(std::cout);

	garage.deleteCar(bolevar);
	garage.print(std::cout);

}