#include "complex.h"
#include <iostream>

int main(void){
	Complex c1(3,4), c2(4,-5);
	std::cout << c1 << ", " << c2 << std::endl;
	Complex c3 = c1+c2, c4 = c1*c2, c5 = c1/c2;
	std::cout << c3 << ", " << c4 << std::endl;
	std::cout << c5 << std::endl;
	std::cout << c2.modulus()*c2.modulus() << std::endl;
	Complex c6(0,0), c7(1,0), c8(0,1), c9(0,10);
	std::cout << c6 << ", " << c7 << ", " << c8 << ", " << c9 << std::endl;
}
