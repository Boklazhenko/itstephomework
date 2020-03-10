#pragma once

struct Teacher {
	const char* Name = nullptr;
	const char* LastName = nullptr;
	int Salary = 0;
	int Experience = 0;
};
void print(const Teacher& teacher);
void print(const Teacher& teacher, void (*stream)(char* str));
Teacher* createTeacher(const char* name, const char* lastName);
char* toString(const Teacher& teacher);