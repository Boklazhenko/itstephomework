#include <iostream>

struct ComplexNum
{
	double a;
	double b;
};

ComplexNum* calcComplexNum(const ComplexNum& num1, const ComplexNum& num2, char operation);

int main()
{
	ComplexNum num1 = { 10, 5 };
	ComplexNum num2 = { 5, 2 };
	ComplexNum* result = calcComplexNum(num1, num2, '*');
	std::cout << "A: " << result->a << "\nB: " << result->b;
}

ComplexNum* calcComplexNum(const ComplexNum& num1, const ComplexNum& num2, char operation) {	//num2 не должно быть нулевым при делении
	ComplexNum result;
	if (operation == '+') {
		result.a = num1.a + num2.a;
		result.b = num1.b + num2.b;
	}
	else if (operation == '-') {
		result.a = num1.a - num2.a;
		result.b = num1.b - num2.b;
	}
	else if (operation == '*') {
		result.a = num1.a * num2.a - num1.b * num2.b;
		result.b = num1.b * num2.a + num1.a * num2.b;;
	}
	else if (operation == '/') {
		result.a = (num1.a * num2.a + num1.b * num2.b) / pow(num2.a, 2) + pow(num2.b, 2);
		result.b = (num1.b * num2.a - num1.a * num2.b) / pow(num2.a, 2) + pow(num2.b, 2);
	}
	return &result;
}