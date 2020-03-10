#pragma once
#define _CRT_SECURE_NO_WARNINGS
struct Student {
	const char* Name;
	const char* LastName;
	int Registration;
};
void print(const Student& student);
void print(const Student& student, void(*stream)(char*));
Student* createStudent(const char* name, const char* lastName);
char* toString(const Student* pStudent);