#pragma once
#include "Teacher.h"
#include "Course.h"
#include <cstdint>
using namespace std;

struct Student
{
	const char* Name;
	const char* LastName;
	time_t Registration;
	
};
void print(Student p);
Student* createStudent(const char name[], const char lastName[]);
char* toString( Student* pStudent);
