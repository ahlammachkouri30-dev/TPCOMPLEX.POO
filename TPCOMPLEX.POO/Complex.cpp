#include "Complex.h"
#include<iostream>
using namespace std;

Complex::Complex(double re, double img)
{
	this->re = re;
	this->img = img;

}

Complex::Complex(const Complex& c)
{
	this->re = c.re;
	this->img = c.img;

}

Complex Complex::operator+(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + c.re;
	res->img = this->img + c.img;

	return *res;
}

Complex Complex::operator+(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re + a;
	res->img = this->img;

	return *res;
}

Complex Complex::operator-(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - c.re;
	res->img = this->img - c.img;

	return *res;
}

Complex Complex::operator-(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re - a;
	res->img = this->img;

	return *res;
}

Complex Complex::operator*(Complex c) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re * (c.re) - this->re * (c.img);
	res->img = this->img * (c.img) + this->img * (c.re);

	return *res;
}

Complex Complex::operator*(double a) const
{
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re * a;
	res->img = this->img * a;

	return *res;
}

Complex Complex::operator/(Complex c) const
{
	double den = c.re * c.re + c.img * c.img;
	if (den == 0) {
		cout << "inpossible" << endl;
		return *this;
	}

	Complex* res = new Complex(0.0, 0.0);
	res->re = (this->re * (c.re) + this->img * (c.img)) / den;
	res->img = (this->img * (c.re) - this->re * (c.img)) / den;

	return *res;
}


Complex Complex::operator/(double a) const
{
	if (a == 0) {
		cout << "impossible" << endl;
		return *this;
	}
	Complex* res = new Complex(0.0, 0.0);
	res->re = this->re / a;
	res->img = this->img / a;

	return *res;

}


bool Complex::operator==(const Complex& c) const
{
	return (this->re == c.re) && (this->img == c.img);
}

bool Complex::operator!=(const Complex& c) const
{
	bool res = (this->re != c.re) || (this->img != c.img);
	return res;
}

bool Complex::operator<(const Complex& c) const
{
	bool res = (this->re * this->re + this->img * this->img) < (c.re * c.re + c.img * c.img);
	return res;
}

bool Complex::operator>(const Complex& c) const
{
	bool res = (this->re * this->re + this->img * this->img) > (c.re * c.re + c.img * c.img);
	return res;
}

bool Complex::operator<=(const Complex& c) const
{
	bool res = (this->re * this->re + this->img * this->img) <= (c.re * c.re + c.img * c.img);
	return res;
}

bool Complex::operator>=(const Complex& c) const
{
	bool res = (this->re * this->re + this->img * this->img) >= (c.re * c.re + c.img * c.img);
	return res;
}



void Complex::afficher()
{
	if (this->img < 0) {
		cout << this->re << "-" << (this->img) * -1 << endl;
	}
	else {
		cout << this->re << "+i" << this->img << endl;
	}
}


Complex::~Complex()
{
}
