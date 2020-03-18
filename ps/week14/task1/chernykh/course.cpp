#define _CRT_SECURE_NO_WARNINGS
#include "course.h"
#include <iostream>

using namespace std;

Error set(Course& course, Teacher *teacher)
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
	int size = getStudentsCount(&course);

	if (size > 0)
	{
		Student** newStudents = new Student * [size - 1];

		for (int i = 0; i < size; ++i)
		{
			if ((strcmp(course.Students[i]->Name, student.Name) == 0) && (strcmp(course.Students[i]->LastName, student.LastName) == 0) && course.Students[i]->Registration == student.Registration)
			{
				--course.studentsCount;
				continue;
			}
			newStudents[i] = course.Students[i];
		}

		Student*** pAddress = &newStudents; //берём адрес у массива указателей

		course.Students = *pAddress;
	}
}

int getStudentsCount(const Course* const course)
{
	return course->studentsCount;
}

Student** add(Course& course, Student& student)
{

	int size = getStudentsCount(&course);

	Student** newStudents = new Student*[size + 1];

	for (int i = 0; i < size; i++)
	{
		newStudents[i] = course.Students[i];
	}

	newStudents[size] = &student;

	Student*** pAddress = &newStudents; //берём адрес у массива указателей

	course.Students = *pAddress;

	++course.studentsCount;

	return course.Students;
}

void print(const Course& course)
{
	cout << "Course name: " << course.Name << endl;
	cout << "Course teacher name: " << course.pTeacher->Name << " " << course.pTeacher->LastName << endl;

	int size = getStudentsCount(&course);

	for (int i = 0; i < size; ++i)
	{
		cout << "Student #: " << i + 1 << " " << course.Students[i]->Name << " " << course.Students[i]->LastName << " " << course.Students[i]->Registration << endl;
	}
}

void print(Course& course, void(*toStream)(const char* str))
{
	toStream(course.Name);
	toStream(toString(*course.pTeacher));

	int studentCount = getStudentsCount(&course);

	for (int i = 0; i < studentCount; ++i)
	{
		toStream(course.Students[i]->Name);
		toStream(course.Students[i]->LastName);
		cout << endl;
	}

	cout << "Count of students = " << studentCount << " peoples" << endl;
}

bool isExist(const Course& const course, const Student& const student)
{
	int size = getStudentsCount(&course);

	for (int i = 0; i < size; ++i)
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

void sortStudents(Course& course, int(*comp)(const void* lhs, const void* rhs))
{
	int count = getStudentsCount(&course);
	qsort(course.Students, count, sizeof(Student), (comp));
}

char* toString(const Course& course)
{
	char* courseStr = new char[1000];
	strcpy(courseStr, course.Name);
	char* pTeacher = toString(*course.pTeacher);
	strcat(courseStr, pTeacher);
	int size = getStudentsCount(&course);
	char** ppStudents = new char* [size];
	for (int i = 0; i < size; ++i)
	{
		ppStudents[i] = toString(course.Students[i]);
		strcat(courseStr, ppStudents[i]);
	}



	/*for (int i = 0; i < size; ++i)
	{
		strcat(courseStr, static_cast<const char*>(toString(course.Students[i]))); не работает
	}*/

	return courseStr;
}
