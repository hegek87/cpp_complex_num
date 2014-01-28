Overview
========
Provides a simple complex number class and ways to manipulate them.

Addition
--------
The + operator has been overloaded to perform addition in the usual way. Given complex numbers a+bi, and c+di, we have (a+bi)+(c+di)=(a+c)+(b+d)i.

Multiplication
--------------
The * operator has been overloaded to perform multiplication in the usual way. Given complex numbers a+bi, and c+di, we have (a+bi)*(c+di) = (a*c-b*d)+(a*d+b*c)i.

Subtraction
-----------
The - operator has been overloaded to perform subtraction in the usual way. Given complex numbers a+bi, and c+di, we have (a+bi)-(c+di)=(a-c)+(b-d)i.

Division
--------
The / operator has been overloaded to perform division in the usual way. Given complex numbers a+bi, and c+di, we have (a+bi)/(c+di) = ((ac+bd)+(bc-ad)i)/(a^2+b^2).

Getters
-------
The getters getReal() and getImag() get the expected parts of the complex number.

Modulus
-------
Given a complex number z=a+bi, z.modulus() = (a^2+b^2)^{1/2}.

Modulus squared
---------------
Given a complex number z=a+bi, z.modSquared() = a^2+b^2.

Equals
------
Two complex numbers a+bi, and c+di are said to be equal if and only if |a-c|<0.001 and |b-d|<0.001.

Power
-----
Let z=(a+bi), the function z.pow(x) = (a+bi)^x, where x is an integer.

Constants
---------
We provide three constats, ZERO = 0+0i = 0, ONE = 1+0i = 1, and IM_ONE = 0+1i=i.
