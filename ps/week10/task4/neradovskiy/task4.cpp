#include <iostream>

struct CarNum {
	char number[7];
	int region;
};

struct Car {
	char color[100];
	char model[100];
	CarNum num;
};

enum CarOption
{
	Color, Model, Number, Region
};

Car filingCar(Car& car, char* color, char* model, char* number, int region);
void printCar(const Car& car);
void printGarage(Car garage[], int sizeGarage);
void reductCar(Car& car, int option, char value[]);
Car* searchCarForNum(Car garage[], int garageSize, char* number, int& foundCars);

int main()
{
	Car zaporozhec = { "Red", "eared", "e123kh", 59 };
	printCar(zaporozhec);
	char tempColor[] = "Blue";
	char tempModel[] = "Ultra";
	char tempNumber[] = "u321hh";
	std::cout << "Test filing car:" << std::endl;
	filingCar(zaporozhec, tempColor, tempModel, tempNumber, 23);
	printCar(zaporozhec);

	const int sizeGarage = 10;
	Car ferari, mersedes, lada, zaz, vaz, datsun, opel, gaz, taz, kamaz;
	ferari = { "Red", "Ferari", "e345kh", 59 };
	mersedes = { "Red", "Mersedes", "e345kh", 59 };
	lada = { "Red", "Lada", "e234kh", 57 };
	zaz = { "Red", "Zaz", "e315kh", 59 };
	vaz = { "Red", "Vaz", "e345kh", 25 };
	datsun = { "Red", "Datsun", "e345kh", 42 };
	opel = { "Red", "Opel", "e345kh", 17 };
	gaz = { "Red", "Gaz", "e345kh", 59 };
	taz = { "Red", "Taz", "e345kh", 59 };
	kamaz = { "Red", "Kamaz", "e345kh", 59 };
	Car garage[sizeGarage] = { ferari, mersedes, lada, zaz, vaz, datsun, opel, gaz, taz, kamaz };
	std::cout << "Test print garage: " << std::endl;
	printGarage(garage, sizeGarage);

	std::cout << "Test reduct car:" << std::endl;
	char tempRegion[] = "25";
	reductCar(kamaz, 0, tempColor);
	reductCar(kamaz, 1, tempModel);
	reductCar(kamaz, 2, tempNumber);
	reductCar(kamaz, 3, tempRegion);
	printCar(kamaz);

	std::cout << "Test search cars for number:" << std::endl;
	int carsFound;
	char tempNumForSearch[] = "e345kh";
	Car *pCarsFound = searchCarForNum(garage, sizeGarage, tempNumForSearch, carsFound);
	if (pCarsFound == nullptr)
		std::cout << "Cars not found" << std::endl;
	printGarage(pCarsFound, carsFound);
	delete[] pCarsFound;
}

Car filingCar(Car& car, char* color, char* model, char* number, int region) {
	int size = strlen(color);
	for (int i = 0; i < size; ++i)
		car.color[i] = color[i];
	car.color[size] = '\0';
	size = strlen(model);
	for (int x = 0; x < size; ++x)
		car.model[x] = model[x];
	car.model[size] = '\0';
	size = strlen(number);
	for (int z = 0; z < size; ++z)
		car.num.number[z] = number[z];
	car.num.number[size] = '\0';
	car.num.region = region;
	return car;
}

void printCar(const Car& car) {
	std::cout << "Color: " << car.color << std::endl;
	std::cout << "Model: " << car.model << std::endl;
	std::cout << "Number: " << car.num.number << " region " << car.num.region << std::endl;
	std::cout << std::endl;
}
void printGarage(Car garage[], int sizeGarage) {
	for (int i = 0; i < sizeGarage; ++i)
		printCar(garage[i]);
	std::cout << std::endl;
}
void reductCar(Car& car, int option, char value[]) {
	int size = strlen(value);
	if (option == 0) {
		for (int i = 0; i < size; ++i)
			car.color[i] = value[i];
		car.color[size] = '\0';
	}
	else if (option == 1) {
		for (int i = 0; i < size; ++i)
			car.model[i] = value[i];
		car.model[size] = '\0';
	}
	else if (option == 2) {
		for (int i = 0; i < size; ++i)
			car.num.number[i] = value[i];
		car.num.number[size] = '\0';
	}
	else if (option == 3) {
		int temp = 0;
		int count = size;
		for (int i = 0; i < size; ++i) {
			temp += (value[i] - 48) * pow(10, --count);
			car.num.region = temp;
		}
	}
}
Car* searchCarForNum(Car garage[], int garageSize, char* number, int &foundCars) {
	foundCars = 0;
	for (int y = 0; y < garageSize; ++y) {
		if (strcmp(garage[y].num.number, number) == 0)
			foundCars++;
	}
	Car* pCarFound = new Car[foundCars];
	int count = 0;
	for (int i = 0; i < garageSize; ++i)
		if (strcmp(garage[i].num.number, number) == 0)
			pCarFound[count++] = garage[i];
	return foundCars > 0 ? pCarFound : nullptr;
}