#pragma once
class Complex
{
private:
	double re;
	double img;
public:
	Complex(double, double);
	Complex(const Complex& c);
	Complex operator+(Complex c)const;
	Complex operator+(double)const;
	Complex operator-(Complex c)const;
	Complex operator-(double)const;
	Complex operator*(Complex c)const;
	Complex operator*(double)const;
	Complex operator/(Complex c)const;
	Complex operator/(double)const;
	bool operator==(const Complex& c) const;
	bool operator!=(const Complex& c) const;
	bool operator<(const Complex& c) const;
	bool operator>(const Complex& c) const;
	bool operator<=(const Complex& c) const;
	bool operator>=(const Complex& c) const;
	void afficher();
	~Complex();

};


