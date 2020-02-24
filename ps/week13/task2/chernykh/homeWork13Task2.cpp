#include <iostream>
#include <cmath>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(a) ((a) * (a))
#define DEGREE_A_IN_B(a, b) (pow(a, b))
#define IS_EVEN_NUMBER(a) (a % 2 == 0 ? "Even" : "Not even")
#define IS_NOT_EVEN_NUMBER(a) (a % 2 == 1 ? "Not even" : "Even")

using namespace std;

int main()
{
    double firstNumber = 1.90;
    double secondNumber = 1.95;
    int thirdNumber = 5;
    int fourthNumber = 4;
    cout << "Min: " << MIN(firstNumber, secondNumber) << endl;
    cout << "Max: " << MAX(firstNumber, secondNumber) << endl;
    cout << "Square: " << SQUARE(firstNumber) << endl;
    cout << "Degree: " << DEGREE_A_IN_B(thirdNumber, fourthNumber) << endl;
    cout << "Number: " << thirdNumber << " " << IS_EVEN_NUMBER(thirdNumber) << endl;
    cout << "Number: " << fourthNumber << " " << IS_NOT_EVEN_NUMBER(fourthNumber) << endl;
}