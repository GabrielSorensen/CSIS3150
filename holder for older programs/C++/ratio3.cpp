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
	private:
		int num;
		int den;
};

Ratio::Ratio(int numerator, int denominator) {
	num = numerator;
	den = denominator;
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
	x.setNumerator(99);
	cout << "setting numerator to   " << x.getNumerator() << endl;
	x.print();
	x.setDenominator(25);
	cout << "setting denominator to  " << x.getDenominator() << endl;
	x.print();

}

