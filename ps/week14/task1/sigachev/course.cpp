#define _CRT_SECURE_NO_WARNINGS
#include "course.h"
#include <iostream>
#include <string>

Error set(Course& course, Teacher* teacher)
{
	if (course.pTeacher == nullptr)
	{
		course.pTeacher = teacher;
		return No;
	}
	else
	{
		return TeacherAlreadyRegistered;
	}
}

void unsetTeacher(Course& course)
{
	course.pTeacher = nullptr;
}

void remove(Course& course, Student& student)
{
	for (int i = 0; i < getStudentsCount(&course); ++i) {
		if ((strcmp(course.Students[i]->Name, student.Name) == 0) && 
			(strcmp(course.Students[i]->LastName, student.LastName) == 0) &&
			course.Students[i]->Registration == student.Registration) {
			course.Students[i] = nullptr;
		}
	}
}

void add(Course& course, Student& student)
{
	Student** pStudents = new Student * [getStudentsCount(&course) + 1];
	for (int i = 0; i < getStudentsCount(&course); ++i)
	{
		pStudents[i] = course.Students[i];
		pStudents[course.studentsCount + 1] = &student;
		course.Students = pStudents;
		++course.studentsCount;
	}
}

//void add(Course& course, Student* student)
//{
//}

void print(Course& course)
{
	cout << "Course name: " << course.Name << endl;
	cout << "Course teacher: " << course.pTeacher->Name << " " << course.pTeacher->LastName << endl;

	for (int i = 0; i < getStudentsCount(&course); ++i)
	{
		cout << "Student ¹ " << i + 1 << " " << course.Students[i]->Name << " " << course.Students[i]->LastName << " " << course.Students[i]->Registration << endl;
	}
}

void print(Course& course, void(*stream)(const char*))
{
	stream(course.Name);
	stream(toString(*course.pTeacher));

	int studentCount = getStudentsCount(&course);

	for (int i = 0; i < studentCount; ++i)
	{
		stream(course.Students[i]->Name);
		stream(course.Students[i]->LastName);
		cout << endl;
	}

	cout << "Count of students = " << studentCount << " peoples" << endl;
}


int getStudentsCount(Course* course)
{
	return course->studentsCount;
}

bool isExist(Course& course, Student& student)
{
	for (int i = 0; i < getStudentsCount(&course); ++i)
	{
		if (course.Students[i]->Registration == student.Registration)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

void sortStudents(Course& course, int(*byRegistration)(const void*, const void*))
{

	int count = getStudentsCount(&course);
	qsort(course.Students, count, sizeof(Student), (byRegistration));
}

char* toString(Course& course)
{
	char* buff = new char[777];
	strcpy(buff, course.Name);
	char* pTeacher = toString(*course.pTeacher);
	strcat(buff, pTeacher);
	int size = getStudentsCount(&course);
	char** ppStudents = new char* [size];
	for (int i = 0; i < size; ++i)
	{
		ppStudents[i] = toString(course.Students[i]);
		strcat(buff, ppStudents[i]);
	}
	return buff;
}