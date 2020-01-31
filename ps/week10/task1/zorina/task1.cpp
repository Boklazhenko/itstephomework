//Создайте структуру, описывающую комплексное число. Реализуйте арифметические операции с комплексными числами:
//сумму, разность, умножение, деление.
//

#include <iostream>

struct Z {//общепринятое наименование комплексного числа
	double Re;
	double Im;
};

Z sum(Z first,Z second) {
	Z z = { first.Re + second.Re ,first.Im + second.Im };
	return z;
}

Z diff(Z first, Z second) {
	Z z = { first.Re - second.Re ,first.Im - second.Im };
	return z;
}

Z mult(Z first, Z second) {
	double Re = first.Re * second.Re - first.Im * second.Im;
	double Im = first.Re * second.Im + first.Im * second.Im;
	Z z = { Re,Im };
	return z;
}

Z div(Z first, Z second) {
	Z counter = { second.Re,-second.Im };
	Z divider = mult(second, counter);
	Z numerator = mult(first, counter);
	Z z = { numerator.Re / divider.Re,numerator.Im / divider.Re };
	return z;
}


int main()
{
	Z z1 = { 2,3 };
	Z z2 = { 4,7 };
	
	std::cout << "z= " << sum(z1, z2).Re << " + " << sum(z1, z2).Im << "i" << std::endl;
	std::cout << "z= " << diff(z1, z2).Re << " + " << diff(z1, z2).Im << "i" << std::endl;
	std::cout << "z= " << mult(z1, z2).Re << " + " << mult(z1, z2).Im << "i" << std::endl;
	std::cout << "z= " << div(z1, z2).Re << " + " << div(z1, z2).Im << "i" << std::endl;
}