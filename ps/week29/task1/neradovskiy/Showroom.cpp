#include "Showroom.h"

void Showroom::add(const Car& car)
{
	_cars.push_back(car);
}

void Showroom::print(std::ostream& out) const
{
	std::copy(_cars.begin(), _cars.end(), std::ostream_iterator<Car>(out));
}

const std::vector<Car> Showroom::findCar(const std::string& name) const
{
	std::vector<Car> cars;
	std::copy_if(_cars.begin(), _cars.end(), std::back_inserter(cars), [name](Car car) {return name == car.getName(); });
	return cars;
}

const std::vector<Car> Showroom::findCar(uint16_t age) const
{
	std::vector<Car> cars;
	std::copy_if(_cars.begin(), _cars.end(), std::back_inserter(cars), [age](Car car) {	return age == car.getAge(); });
	return cars;
}

const std::vector<Car> Showroom::findCar(double engCapacity) const
{
	std::vector<Car> cars;
	std::copy_if(_cars.begin(), _cars.end(), std::back_inserter(cars), [engCapacity](Car car) {
		return engCapacity == car.getEngCapacity();
		});
	return cars;
}

const std::vector<Car> Showroom::findCar(unsigned long long price) const
{
	std::vector<Car> cars;
	std::copy_if(_cars.begin(), _cars.end(), std::back_inserter(cars), [price](Car car) {
		return price == car.getPrice();
		});
	return cars;
}

void Showroom::deleteCar(const Car& car)
{
	auto temp = std::remove_if(_cars.begin(), _cars.end(), [car](const Car& c) { return c == car; });
	_cars.erase(temp, _cars.end());
}

void Showroom::clear()
{
	if (!_cars.empty())
		_cars.clear();
}

void Showroom::carsSort(Criteria criteria)
{
	switch (criteria)
	{
	case Criteria::Name:
		std::sort(_cars.begin(), _cars.end(), [](const Car& lhs, const Car& rhs) {return lhs.getName() < rhs.getName(); });
		break;
	case Criteria::Age:
		std::sort(_cars.begin(), _cars.end(), [](const Car& lhs, const Car& rhs) {return lhs.getAge() < rhs.getAge(); });
		break;
	case Criteria::EngCapacity:
		std::sort(_cars.begin(), _cars.end(), [](const Car& lhs, const Car& rhs) {return lhs.getEngCapacity() < rhs.getEngCapacity(); });
		break;
	case Criteria::Price:
		std::sort(_cars.begin(), _cars.end(), [](const Car& lhs, const Car& rhs) {return lhs.getPrice() < rhs.getPrice(); });
		break;
	}
}
