#include "Teacher.h"
#include "Student.h"
#include <iostream>
#include "course.h"


Error set( Course &cource,  Teacher* const pTeacher)
{
	if (cource.teacher != nullptr)
		return TeacherAlreadyRegistered;
	else
	{
		cource.teacher = pTeacher;
		return No;
	}
}
void unsetTeacher(Course & cource)
{
	cource.teacher = nullptr;
}

void add(Course& cource,  Student & const student)
{
	const Student** pStudent = new const Student * [cource.StudentCount + 1];
	for (int i = 0; i < cource.StudentCount; ++i)
	{
		pStudent[i] = cource.studentArr[i];
	}
	cource.studentArr[cource.StudentCount] =& student;
	++cource.StudentCount;
}

void remove(Course& cource, Student & const student)
{
	int index = -1;
	for (int i = 0; i < cource.StudentCount; ++i)
	{
		if (isExist(cource, student))
			index = i;
		if (index < 0)
			return;
		for (int i = index; i < cource.StudentCount; ++i)
			cource.studentArr[i] = cource.studentArr[i + 1];
		--cource.StudentCount;
	}
}
void print(const Course cource)
{
	
	cout << cource.Name << endl;
	cout << toString(*cource.teacher) << endl;
	for (int i = 0; i < cource.StudentCount; ++i)
	cout << toString(cource.studentArr[i]) << endl;
}
void print(const Course cource, void(*toCerr)(const char*))
{
	toCerr(toString(cource));
	
}
int getStudentsCount(Course* cource)
{
	return cource->StudentCount;
}

bool isExist(Course& cource, Student& const pStudent)
{
	int count = 0;
	for (int i = 0; i < cource.StudentCount; ++i)
	{
		if (cource.studentArr[i] == &pStudent)
		{
			++count;
			return true;
		}
	}
	if (count == 0)
		return false;
}
void sortStudents(Course h, int (*byRegistration)(const void*, const void*))
{
	const int size = getStudentsCount(&h);

	qsort(h.studentArr, size, sizeof(Student), byRegistration);
}

char* toString( Course const cource)
{
	char* buff  = new char[2000];
	strcpy_s(buff, 2000, cource.Name);
	strcat_s(buff, 2000, toString(*cource.teacher));
	for (int i = 0; i < cource.StudentCount; ++i)
	strcat_s(buff, 2000, toString(cource.studentArr[i]));

	return buff;
}
