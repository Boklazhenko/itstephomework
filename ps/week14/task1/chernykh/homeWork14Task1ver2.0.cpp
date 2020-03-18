#include "student.h"
#include "teacher.h"
#include "course.h"
#include <iostream>

using namespace std;

void toCerr(const char* str) {
    cerr << str << endl;
}

int byRegistration(const void* lhs, const void* rhs) {
    return static_cast<const Student*>(lhs)->Registration - static_cast<const Student*>(rhs)->Registration;
}

int main(int argc, char** argv) {

    Course cppFundamentals;
    cppFundamentals.Name = "C++ Fundamentals";

    Course windowsConfiguration = { "Windows Configuration" };

    Teacher boklazhenko = { "Alexandr", "Boklazhenko", 5000, 3 };
    boklazhenko.Salary = 6500;
    boklazhenko.Experience = 4;

    Teacher* ivanov = new Teacher{ "Grigori", "Ianov", 7000, 5 };
    cout << toString(*ivanov) << endl;

    set(cppFundamentals, ivanov);

    if (Error err = set(cppFundamentals, &boklazhenko);
        err == Error::TeacherAlreadyRegistered) {
        unsetTeacher(cppFundamentals);
        err = set(cppFundamentals, &boklazhenko);

        if (err != Error::No)
            return 1;
    }

    set(windowsConfiguration, ivanov);
    
    Student s1 = { "Nilolay", "Neradovsky", time(nullptr) };

    Student* pS2 = createStudent("Anna", "Zorina");
    
    Student* pS3 = createStudent("4uvak", "Levii");
    cout << toString(pS3) << endl;
    remove(cppFundamentals, *pS3);
    
    add(cppFundamentals, s1);
    add(cppFundamentals, *pS2);

    print(cppFundamentals);

    add(windowsConfiguration, s1);
    add(windowsConfiguration, *pS2);

    print(cppFundamentals, toCerr);
    print(windowsConfiguration);

    cerr << "students count: " << getStudentsCount(&cppFundamentals) << endl;

    cerr << toString(pS3) << " is " << (isExist(cppFundamentals, *pS3) ? "" : "not") << " exist" << endl;

    sortStudents(cppFundamentals, byRegistration);

    cerr << toString(cppFundamentals) << endl;

    return 0;
}