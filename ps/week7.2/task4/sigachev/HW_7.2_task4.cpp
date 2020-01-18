// Написать рекурсивную функцию нахождения степени числа.
#include <iostream>
using namespace std;

int numberDegree(int num, int degree) 
{
    if (degree < 1) {
        return 1;
    }
    return num * numberDegree(num, degree - 1);
}

int main()
{
    int number, degree;
    cout << "Enter number: ";
    cin >> number;
    cout << "Enter degree: ";
    cin >> degree;
    cout << "Number in degree " << numberDegree(number, degree);
}
