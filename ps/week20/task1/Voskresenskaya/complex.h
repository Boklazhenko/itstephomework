#pragma once

class Complex
{
public:
	static int count;
	static int getCountClassComplex();
	Complex();
	Complex(double re, double im);
	~Complex();
	double Re() const;
	double Im() const;
	void setComplex(double re, double im);
	Complex operator +(const Complex& other) ;
	Complex operator -(const Complex& other) ;
	Complex operator *(const Complex& other);
	Complex operator /(const Complex& other);
	bool operator == (const Complex& other) const;
	Complex& operator=(Complex other);
	friend std::ostream& operator<<(std::ostream& out, const Complex& comp);
	friend std::istream& operator>>(std::istream& out, Complex& comp);
private:
	friend void swap(Complex& lhs, Complex& rhs) noexcept;
	double _Re;
	double _Im;
};


