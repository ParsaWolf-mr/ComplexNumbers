#pragma once
#include <iostream>
#include <string>


class Complex
{
private:
	int real;
	int image;

public:
	Complex() = default;
	Complex(const int& r, const int& i);
	~Complex() = default;

	friend std::ostream& operator<<(std::ostream& , const Complex&);
	friend std::istream& operator>>(std::istream&, Complex&);

	Complex& operator+(const Complex& other);

	void input(std::string&);
};

