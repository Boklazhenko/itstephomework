#include <iostream>

struct Car {
	uint16_t length;
	uint16_t clirens;
	uint16_t engineCapacity;
	uint16_t power;
	uint16_t diamWheels;
	char color[125];
	bool manualTransmission;
};

void changeLength(Car& car, uint16_t length);
void changeClirens(Car& car, uint16_t clirens);
void changeEngineCapacity(Car& car, uint16_t engineCapacity);
void changePower(Car& car, uint16_t power);
void changeDiamWeels(Car& car, uint16_t diamWheels);
void changeColor(Car& car, char color[]);
void changeTransmission(Car& car, bool manualTransmission);
void printCar(Car car);
void searchValueCar(Car car, int option);

int main()
{
	Car zaporozhets = { 2, 20, 36, 45, 16, "Red", 1 };
	printCar(zaporozhets);
	changeLength(zaporozhets, 5);
	changeClirens(zaporozhets, 10);
	changeEngineCapacity(zaporozhets, 25);
	changePower(zaporozhets, 20);
	changeDiamWeels(zaporozhets, 18);
	char color[] = "Green";
	changeColor(zaporozhets, color);
	changeTransmission(zaporozhets, 0);
	printCar(zaporozhets);
	enum Option {Length, Clirens, EngineCapacity, Power, DiamWheels, Color,	Transmission};
	
	searchValueCar(zaporozhets, 0);
	searchValueCar(zaporozhets, 1);
	searchValueCar(zaporozhets, 2);
	searchValueCar(zaporozhets, 3);
	searchValueCar(zaporozhets, 4);
	searchValueCar(zaporozhets, 5);
	searchValueCar(zaporozhets, 6);
	searchValueCar(zaporozhets, 7);
}
void changeLength(Car& car, uint16_t length) {
	car.length = length;
}
void changeClirens(Car& car, uint16_t clirens) {
	car.clirens = clirens;
}
void changeEngineCapacity(Car& car, uint16_t engineCapacity) {
	car.engineCapacity = engineCapacity;
}
void changePower(Car& car, uint16_t power) {
	car.power = power;
}
void changeDiamWeels(Car& car, uint16_t diamWheels) {
	car.diamWheels = diamWheels;
}
void changeColor(Car& car, char color[]) {
	int size = strlen(color);
	for (int i = 0; i < size; ++i)
		car.color[i] = color[i];
	car.color[size] = '\0';
}
void changeTransmission(Car& car, bool manualTransmission) {
	car.manualTransmission = manualTransmission;
}
void printCar(Car car) {
	std::cout << "Length: " << car.length << " meters" << std::endl;
	std::cout << "Clirens: " << car.clirens << "mm" << std::endl;
	std::cout << "Engine capacity: " << car.engineCapacity << "sm3" << std::endl;
	std::cout << "Power: " << car.power << "hp" << std::endl;
	std::cout << "Diammetr whills: " << car.diamWheels << "\"" << std::endl;
	std::cout << "Color: " << car.color << std::endl;
	if (car.manualTransmission)
		std::cout << "Transmission: manual " << std::endl;
	else
		std::cout << "Transmission: automaic" << std::endl;
}
void searchValueCar(Car car, int option) {
	if (option == 0)
		std::cout << "Length: " << car.length << " meters" << std::endl;
	else if (option == 1)
		std::cout << "Clirens: " << car.clirens << "mm" << std::endl;
	else if (option == 2)
		std::cout << "Engine capacity: " << car.engineCapacity << "sm3" << std::endl;
	else if (option == 3)
		std::cout << "Power: " << car.power << "hp" << std::endl;
	else if (option == 4)
		std::cout << "Diammetr whills: " << car.diamWheels << "\"" << std::endl;
	else if (option == 5)
		std::cout << "Color: " << car.color << std::endl;
	else if (option == 6)
		if (car.manualTransmission)
			std::cout << "Transmission: manual " << std::endl;
		else
			std::cout << "Transmission: automaic" << std::endl;
	else
		std::cout << "Error, don`t correct value";
}