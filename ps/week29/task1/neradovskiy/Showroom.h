#pragma once
#include "Car.h"
#include <vector>
#include <algorithm>
#include "Criteria.h"

class Showroom
{
public:
	Showroom() = default;
	void add(const Car& car);
	void print(std::ostream& out) const;
	const std::vector<Car> findCar(const std::string& name) const;
	const std::vector<Car> findCar(uint16_t age) const;
	const std::vector<Car> findCar(double engCapacity) const;
	const std::vector<Car> findCar(unsigned long long price) const;
	void deleteCar(const Car& car);
	void carsSort(enum Criteria criteria);
	void clear();

private:
	std::vector<Car> _cars;
};