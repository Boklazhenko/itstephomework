#include "student.h"
#include <iostream>
#include <time.h>

void print(const Student& student)
{
	std::cout << "Name: " << student.Name << std::endl;
	std::cout << "Last name: " << student.LastName << std::endl;
	std::cout << " Registration time: " << student.Registration << std::endl;
}

void print(const Student &student, void(*stream)(char*))
{
	stream(toString(&student));
}

Student* createStudent(const char* name, const char* lastName)
{
	Student* pStudent = new Student{ name, lastName, static_cast<int> (time(nullptr)) };
	return pStudent;
}

char* toString(const Student* pStudent)
{
		char* buff = new char[510];
		sprintf(buff, "Name: %s Last name: %s Registration time: %d ", pStudent->Name,
			pStudent->LastName, pStudent->Registration);
		return buff;
}
