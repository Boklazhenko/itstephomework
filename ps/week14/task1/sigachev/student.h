#pragma once
#include <ctime>

using namespace std;

struct Student
{
	const char* Name;
	const char* LastName;
	time_t Registration;
};
Student* createStudent(const char* name, const char* lastName);
char* toString(Student* student);
void print(Student* student, void(*stream)(char*));