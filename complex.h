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
};
#endif
