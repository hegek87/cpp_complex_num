#include "complex.h"
#include <cmath>

Complex::Complex(double re, double im){ real = re; imag = im; }

Complex Complex::operator+(const Complex& other){
	double sumRe = this->real + other.real;
	double sumIm = this->imag + other.imag;
	return Complex(sumRe, sumIm);
}

Complex Complex::operator-(const Complex& other){
	double diffRe = this->real - other.real;
	double diffIm = this->imag - other.imag;
	return Complex(diffRe, diffIm);
}

Complex Complex::operator/(const Complex& other){
	Complex temp = other.conjugate();
	double mag = other.modulus();
	Complex t1 = *this * temp;
	return Complex((t1.real/(mag*mag)), (t1.imag/(mag*mag)));
}
	
Complex Complex::operator*(const Complex& other){
	double prodRe = (this->real * other.real) - (this->imag * other.imag);
	double prodIm = (this->real * other.imag) + (this->imag * other.real);
	return Complex(prodRe, prodIm);
}


const Complex Complex::conjugate() const{
	return Complex(this->real, -this->imag);
}

double Complex::getReal() const{ return this->real; }
double Complex::getImag() const{ return this->imag; }
		
double Complex::modulus() const{
	return sqrt((this->real * this->real) + (this->imag * this->imag));
}
		
bool Complex::equals(const Complex& other) const{
	return this->real == other.real && this->imag == other.imag;
}
std::ostream& operator<<(std::ostream& os, const Complex& other){
	if(other.real == 0){
		if(other.imag == 0){ os << 0; return os; }
		else if(other.imag == 1){}
		else{ os << other.imag; }
		os << "i";
		return os;
	}
	os << other.real;
	if(other.imag == 0){ return os; }
	else if(std::abs(other.imag) == 1){
		os << ((other.imag < 0) ? " - " : " + ") << "i";
	}
	else{
		os << ((other.imag < 0) ? " - " : " + ");
		os << other.imag << "i";
	}
	return os;
}

