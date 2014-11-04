//operator overloading
// ratio ver. 2

#include <iostream>
using namespace std;

class Ratio {
	friend int gcd(int, int);
	friend Ratio operator * (Ratio & x, Ratio & y);
	friend Ratio operator + (Ratio & x, Ratio & y);
public:
	Ratio();
	Ratio(int, int);
	int getNumerator();
	int getDenominator();
	void setNumerator(int);
	void setDenominator(int);
	double convert();
	void invert();
	void print();
	void reduce();
private:
	int num;
	int den;
};

int gcd(int m, int n) {
	int r;
	if ( m < n ) swap(m,n) ;
	while (n > 0) {
		r = m%n;
		m = n;
		n = r;
	}
	return m;
}

Ratio operator * (Ratio & x, Ratio & y) {
	Ratio z(x.num*y.num, x.den*y.den);
	z.reduce();
	return z;
}

Ratio operator + (Ratio & x, Ratio & y) {
	Ratio z(x.num*y.den +  x.den*y.num, x.den * y.den);
	z.reduce();
	return z;
}

Ratio::Ratio() {
	num = 0;
	den = 0;
}

Ratio::Ratio(int numerator, int denominator) {
	num = numerator;
	den = denominator;
}

void Ratio::reduce() {
	int sign, g;
	if (num == 0 || den == 0) {
		num = 0;
		den = 1;
	}
	if (den < 0) {
		den *= -1;
		num *= -1;
	}
	if (den == 1) return;
	sign = ( num < 0 ? -1 : 1);
	g = gcd(sign*num,den);
	num = num/g;
	den = den/g;
}

double Ratio::convert() {
	return double(num)/den;
}

void Ratio::invert() {
	int temp = num;
	num = den;
	den = temp;
}

void Ratio::print() {
	cout << num << '/' << den << endl;
}

int Ratio::getNumerator() {
	return num;
}

int Ratio::getDenominator() {
	return den;
}

void Ratio::setNumerator(int n) {
	num = n;
}

void Ratio::setDenominator(int d) {
	den = d;
}

