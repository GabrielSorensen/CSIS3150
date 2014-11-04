//operator overloading
// ratio ver. 2

#include <iostream>
using namespace std;

class Ratio {
	public:
		Ratio(int, int);
		int getNumerator();
		int getDenominator();
		void setNumerator(int);
		void setDenominator(int);
		double convert();
		void invert();
		void print();
		int gcd(int, int);
		void reduce();
	private:
		int num;
		int den;
};

Ratio::Ratio(int numerator, int denominator) {
	num = numerator;
	den = denominator;
}

int Ratio::gcd(int m, int n) {
	int r;
	if ( m < n ) swap(m,n) ;
	while (n > 0) {
		r = m%n;
		m = n;
		n = r;
	}
	return m;
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
	x.setNumerator(3213543212);
	cout << "setting numerator to  " << x.getNumerator() << endl;
	x.print();
	x.setDenominator(32135432032135444);
	cout << "setting denominator to  " << x.getDenominator() << endl;
	x.print();
	x.reduce();
	cout << "X is reduced to: " << endl;
	x.print();

}

