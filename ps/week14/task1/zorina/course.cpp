#define _CRT_SECURE_NO_WARNINGS
#include "course.h"
#include "student.h"
#include "teacher.h"
#include <iostream>

Error set(Course& course, Teacher* teacher)
{
	if (course.Teacher != nullptr)
		return Error::TeacherAlreadyRegistered;
	else {
		course.Teacher = teacher;
		return Error::No;
	}
}

Course* unsetTeacher(Course& course)
{
	course.Teacher = nullptr;
	return &course;
}
int getStudentsCount(Course* course)
{
	return course->CountOfStudents;
}
void remove(Course& course, Student& student)
{
	if (course.Group == nullptr)
		std::cout << "There are no students in the course yet.\n";
	else {
		int indexToRemove = 0;
		for (int i = 0; i < getStudentsCount(&course); ++i) {
			if (course.Group[i] == &student)
				indexToRemove = i;
		}
		Student** tempGroup = {};
		for (int i = 0; i < indexToRemove; ++i)
			tempGroup[i] = course.Group[i];
		for (int i = indexToRemove; i < (getStudentsCount(&course) - 1); ++i)
			tempGroup[i] = course.Group[i + 1];
		for (int i = 0; i < getStudentsCount(&course) - 1; ++i)
			course.Group[i] = tempGroup[i];
		//--course.CountOfStudents;

	}
}

void add(Course& course, Student& student)
{
	Student** buff = new Student * [getStudentsCount(&course) + 1];
	for (int i = 0; i < getStudentsCount(&course); ++i)
		buff[i] = course.Group[i];
	buff[getStudentsCount(&course)] = &student;
	Student*** pAdress = &buff;
	course.Group = *pAdress;
	++course.CountOfStudents;
}

void add(Course& course, Student* student)
{
	Student** buff = new Student * [getStudentsCount(&course) + 1];
	for (int i = 0; i < getStudentsCount(&course); ++i)
		buff[i] = course.Group[i];
	buff[getStudentsCount(&course) + 1] = student;
	course.Group = buff;
	++course.CountOfStudents;
}


void print(Course& course)
{
	std::cout << "Course`s name: " << course.Name << std::endl;
	std::cout << "Course`s teacher: " << course.Teacher->Name << " " << course.Teacher->LastName << std::endl;
	std::cout << "Students: " << std::endl;
	for (int i = 0; i < getStudentsCount(&course); ++i)
		std::cout << course.Group[i]->Name << " " << course.Group[i]->LastName << std::endl;
}

void print(Course& course, void(*stream)(const char*))
{
	char* buff = new char[255];
	sprintf(buff, "COURSE Name: %s Teacher: %s %s", course.Name, course.Teacher->Name, course.Teacher->LastName);
	char** ppStudents = new char* [getStudentsCount(&course)];
	for (int i = 0; i < getStudentsCount(&course); ++i) {
		ppStudents[i] = toStringForOtherFunc(course.Group[i]);
		strcat(buff, ppStudents[i]);
	}
	stream(buff);
}

bool isExist(Course& course, Student& student)
{
	for (int i = 0; i < getStudentsCount(&course); ++i)
	{
		if (course.Group[i] == &student)
			return true;
		else
			return false;
	}
}

void sortStudents(Course& course, int(*comp)(const void*, const void*))
{
	int size = getStudentsCount(&course);
	qsort(course.Group, size, sizeof(int), comp);
}

char* toString(Course& course)
{
	char* buff = new char[255];

	sprintf(buff, "COURSE Name: %s Teacher: %s %s Students: ", course.Name, course.Teacher->Name, course.Teacher->LastName);
	char** ppStudents = new char* [getStudentsCount(&course)];
	for (int i = 0; i < getStudentsCount(&course); ++i) {
		ppStudents[i] = toStringForOtherFunc(course.Group[i]);
		strcat(buff, ppStudents[i]);
	}
	return buff;
}