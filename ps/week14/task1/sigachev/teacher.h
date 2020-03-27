#pragma once

using namespace std;

struct Teacher
{
	const char* Name;
	const char* LastName;
	int Salary;
	int Experience;
};
char* toString(const Teacher& const teacher);