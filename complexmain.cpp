#include "complex.h"
#include <iostream>

int main(void){
	Complex c1(3,4), c2(4,-5);
	std::cout << c1 << ", " << c2 << std::endl;
	Complex c3 = c1+c2, c4 = c1*c2, c5 = c1/c2;
	std::cout << c3 << ", " << c4 << std::endl;
	std::cout << c5 << std::endl;
	std::cout << c2.modulus()*c2.modulus() << std::endl;
	Complex c6(0,0), c7(1,0), c8(0,1), c9(0,10), c10(3.14159265,0);
	Complex c11(2.718,0), c12(3,0), c13(5,0);
	std::cout << c6 << ", " << c7 << ", " << c8 << ", " << c9 << std::endl;
	std::cout << c10 << ", " << c11 << ", " << c12 << ", " << c13 << std::endl;
	std::cout << c10*c11 << ", " << c10*c12 << ", " << c12*c13 << std::endl;
	Complex c14(1,2);
	std::cout << c9.pow(4) << std::endl;
	std::cout << c14.pow(3) << std::endl;
}
