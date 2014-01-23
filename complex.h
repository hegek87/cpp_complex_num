#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex{
	private:
		double real;
		double imag;
	public:
		Complex(double, double);
		Complex operator+(const Complex&);
		Complex operator-(const Complex&);
		Complex operator/(const Complex&);
		Complex operator*(const Complex&);
		friend std::ostream& operator<<(std::ostream&, const Complex&);
		
		const Complex conjugate() const;
		
		double getReal() const;
		double getImag() const;
		
		double modulus()const ;
		
		bool equals(const Complex&) const;
		
		Complex pow(int);
};

static const Complex ZERO(0,0);
static const Complex ONE(1,0);
static const Complex IM_ONE(0,1);
#endif
