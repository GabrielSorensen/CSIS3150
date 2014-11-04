//operator overloading
// ratio ver. 2

#include <iostream>
#include "headers/Ratio.h"
using namespace std;


int main () {
	Ratio x (22, 7);
	cout << "x= ";
	x.print();
	cout << "x= " << x.convert() << endl;
	x.invert();
	cout << "x/1= ";
	x.print();
	cout << "x.num =" << x.getNumerator() << endl;
	cout << "x.den =" << x.getDenominator() << endl;
	x.setNumerator(1111);
	cout << "setting numerator to  " << x.getNumerator() << endl;
	x.print();
	x.setDenominator(2222);
	cout << "setting denominator to  " << x.getDenominator() << endl;
	x.print();
	Ratio y(x);
	cout << "X is reduced to: " ;
	x.reduce();
	x.print();
	cout << "" << endl;
	cout << "Y is now: ";
	y.print();
	cout << "GCD is: " << gcd(2000, 1000) << endl;
}

