#include <iostream>


class Pet {
public:

	Pet() :
		_name(""), _age(0), _gender("-") {}

	Pet(const std::string& name, uint16_t age, const std::string& gender) :
		_name(name), _age(age), _gender(gender) {}

	std::string getName()const { return _name; }
	uint16_t getAge()const { return _age; }
	std::string getGender() const { return _gender; }

	void setName(const std::string& name) {
		_name = name;
	}
	void setAge(uint16_t age) {
		_age = age;
	}
	void setGender(const std::string& gender) {
		_gender = gender;
	}

private:
	std::string _name;
	uint16_t _age;
	std::string _gender;

};

class Dog :public Pet {
public:
	Dog() :Pet() {
		_breed = "none";
		_height = 0;
	}
	Dog(const std::string& name, uint16_t age, const std::string& gender, const std::string& breed, uint8_t height) :
		Pet(name, age, gender) {
		_breed = breed;
		_height = height;
	}
	uint16_t getHeight() const { return _height; }
	std::string getBreed() const { return _breed; }
	void setBreed(const std::string& breed) {
		_breed = breed;
	}
	void setWHeight(uint16_t height) {
		_height = height;
	}
private:
	std::string _breed;
	uint8_t _height;

};

class Cat :public Pet {
public:

	Cat() :Pet() {
		_breed = "none";
		_length = 0;
	}

	Cat(const std::string name, uint16_t age, const std::string gender, const std::string breed, uint8_t length) :
		Pet(name, age, gender) {
		_breed = breed;
		_length = length;
	}
	uint16_t getLength() const { return _length; }
	std::string getBreed() const { return _breed; }
	void setBreed(const std::string& breed) {
		_breed = breed;
	}
	void setLength(uint16_t length) {
		_length = length;
	}

private:
	std::string _breed;
	uint8_t _length;
};


class Parrot : public Pet {
public:
	Parrot() :Pet() {
		_species = "none";
		_weight = 0;
	}

	Parrot(const std::string name, uint16_t age, const std::string gender, const std::string species, uint8_t weight) :
		Pet(name, age, gender) {
		_species = species;
		_weight = weight;
	}

	uint16_t getWeight() const { return _weight; }
	std::string getSpecies() const { return _species; }
	void setSpecies(const std::string& species) {
		_species = species;
	}
	void setWeight(uint16_t weight) {
		_weight = weight;
	}

private:
	std::string _species;
	uint16_t _weight;
};


int main()
{
	Parrot gosha("Gosha", 1, "m", "Ara", 2);
	std::cout << gosha.getAge() << std::endl;
	gosha.setAge(5);
	std::cout << gosha.getAge() << std::endl;
	std::cout << gosha.getWeight() << std::endl;
}