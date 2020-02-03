// Создайте структуру, описывающую комплексное число. Реализуйте арифметические операции с комплексными числами:
// сумму, разность, умножение, деление.


#include <iostream>
using namespace std;
struct ComplexNum {
	float Re;
	float Im;
};
ComplexNum FindSumComplexNum(ComplexNum &p, ComplexNum &z)
{
	ComplexNum Sum;
	Sum.Re = (p.Re + z.Re);
	Sum.Im = (p.Im + z.Im);
	cout << "ComplexNumSum= " << Sum.Re << "+" << Sum.Im << "i" << endl;
	return Sum;
}
ComplexNum FindDiffComplexNum(ComplexNum &p, ComplexNum &z)
{
	ComplexNum Diff;
	Diff.Re = (p.Re - z.Re);
	Diff.Im = (p.Im - z.Im);
	if (Diff.Im >= 0)
		cout << "ComplexNumDiff= " << Diff.Re << "+" << Diff.Im << "i" << endl;
	else
		cout << "ComplexNumDiff= " << Diff.Re << Diff.Im << "i" << endl;
	return Diff;
}
ComplexNum FindMultComplexNum(ComplexNum &p, ComplexNum &z)
{
	ComplexNum Mult;
	Mult.Re = (p.Re * z.Re - p.Im * z.Im);
	Mult.Im = (p.Im * z.Re + p.Re * z.Im);
	if (Mult.Im >= 0)
		cout << "ComplexNumMult= " << Mult.Re << "+" << Mult.Im << "i" << endl;
	else
		cout << "ComplexNumMult= " << Mult.Re << Mult.Im << "i" << endl;
	return Mult;
}
ComplexNum FindDivComplexNum(ComplexNum &p, ComplexNum &z)
{
	ComplexNum Div;
	Div.Re = (p.Re*z.Re+p.Im*z.Im)/(z.Re*z.Re+z.Im*z.Im);
	Div.Im = (z.Re*p.Im-p.Re*z.Im)/ (z.Re * z.Re + z.Im * z.Im);
	if (Div.Im >= 0)
		cout << "ComplexNumDiv= " << Div.Re << "+" << Div.Im << "i" << endl;
	else
		cout << "ComplexNumDiv= " << Div.Re << Div.Im << "i" << endl;
	return Div;
}
int main()
{
	ComplexNum num1 = { 2,4 };
	ComplexNum num2 = { 7,9 };
	FindSumComplexNum(num1, num2);
	FindDiffComplexNum(num1, num2);
	FindMultComplexNum(num1, num2);
	FindDivComplexNum(num1, num2);
	return 0;
}
