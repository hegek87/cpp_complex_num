#include "complex.h"
#include <iostream>
#include <UnitTest++/UnitTest++.h>

struct ComplexFixture{
	ComplexFixture() :c1(3,4),
				c2(4,-5),
				c3(0,0),
				c4(1,0),
				c5(0,1),
				c6(0,10),
				c7(3.14159265,0),
				c8(2.718,0),
				c9(3,0),
				c10(5,0) {};
	
	Complex c1,c2,c3,c4,c5,c6,c7,c8,c9,c10;
};

TEST_FIXTURE(ComplexFixture, Add){
	CHECK(Complex(7,-1).equals(c1+c2));
}

TEST_FIXTURE(ComplexFixture, Subtract){
	CHECK(Complex(-1,9).equals(c1-c2));
}

TEST_FIXTURE(ComplexFixture, Multiply){
	CHECK(Complex(32,1).equals(c1*c2));
	CHECK(Complex(8.5397,0).equals(c7*c8));
	CHECK(Complex(9.42477,0).equals(c7*c9));
	CHECK(Complex(15,0).equals(c9*c10));
}

TEST_FIXTURE(ComplexFixture, Divide){
	CHECK(Complex(-8.0/41, 31.0/41).equals(c1/c2));
}

TEST_FIXTURE(ComplexFixture, Power){
	CHECK(Complex(81,0).equals(c9.pow(4)));
	CHECK(Complex(125,0).equals(c10.pow(3)));
	CHECK(Complex(164833,354144).equals(c1.pow(8)));
}

int main(){
	return UnitTest::RunAllTests();
}
