#include "Complex.h"

inline Complex::Complex(const int& r, const int&i):real(r), image(i){}

inline std::ostream& operator<<( std::ostream& out, const Complex& obj) {
	if(obj.image >0)
		std::cout << obj.real << "+" << obj.image << "i\n";
	else
		std::cout << obj.real << obj.image << "i\n";
	return out;
}

inline std::istream& operator>>( std::istream& in,  Complex& obj) {
	std::cout << "real: ";
	in >> obj.real;
	std::cout << "image: ";
	in >> obj.image;
	return in;
}

inline Complex& Complex::operator+(const Complex& other) {
	Complex temp;
	temp.real = this->real + other.real;
	temp.image = this->image + other.image;

	return temp;
}

inline void Complex::input(std::string& str) {
	std::string temp1, temp2;

	if (str.find('+')!= std::string::npos ) {
		temp1 = str.substr(0, str.find('+'));
		temp2 = str.substr(str.find('+') + 1, str.size()-1);
		this->real = stoi(temp1);
		this->image = stoi(temp2);
	}
	else if (str.find('-') != std::string::npos){
		temp1 = str.substr(0, str.find('-'));
		temp2 = str.substr(str.find('-'), str.size() - 1);
		this->real = stoi(temp1);
		this->image = stoi(temp2);
	}
	else {
		this->real = stoi(str);
	}
}