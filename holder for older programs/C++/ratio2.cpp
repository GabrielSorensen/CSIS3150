//operator overloading
// ratio ver. 2

#include <iostream>
using namespace std;

class Ratio {
	public:
		Ratio(int, int);
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

int main () {
	Ratio x (22, 7);
	cout << "x= ";
	x.print();
	cout << "x= " << x.convert() << endl;
	x.invert();
	cout << "x/1= ";
	x.print();
	cout << endl;

}

