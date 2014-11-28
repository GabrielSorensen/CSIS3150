
#include <iostream>
using namespace std;

int gcd(int m, int n);

class Ratio{
	friend Ratio operator*(Ratio & x, Ratio & y);
	friend Ratio operator+(Ratio & x, Ratio & y);
	friend Ratio operator-(Ratio & x, Ratio & y);
	friend bool operator<(Ratio & x, Ratio & y);
	friend bool operator>(Ratio & x, Ratio & y);
	friend Ratio operator/(Ratio & x, Ratio & y);
	public:
		Ratio(int n, int d);
		double convert();
		void invert();
		void print();
		void reduce();
		int getNum();
		int getDen();
		void setNum(int n);
		void setDen(int d);
	private:
		int num;
		int den;
};

Ratio operator/(Ratio & x, Ratio & y){
	Ratio z(x.num*y.den, x.den*y.num);
	z.reduce();
	return z;
}

bool operator<(Ratio & x, Ratio & y){
	double h = ((double(x.getNum()))/(double(x.getDen())));
	double j = ((double(y.getNum()))/(double(y.getDen())));
	if(h < j){
		return 1;
	}
	else{
		return 0;
	}
}

bool operator>(Ratio & x, Ratio & y){
	double h = ((double(x.getNum()))/(double(x.getDen())));
	double j = ((double(y.getNum()))/(double(y.getDen())));
	if(h > j){
		return 1;
	}
	else{
		return 0;
	}
}

Ratio operator+(Ratio & x, Ratio & y){
	Ratio z(x.num*y.den + y.num*x.den, x.den*y.den);
	z.reduce();
	return z;
}

Ratio operator-(Ratio & x, Ratio & y){
	Ratio z(x.num*y.den - y.num*x.den, x.den*y.den);
	z.reduce();
	return z;
}


Ratio operator*(Ratio & x, Ratio & y){
	Ratio z(x.num*y.num, x.den*y.den);
	z.reduce();
	return z;
}

int Ratio::getNum(){
	return num;
}

int Ratio::getDen(){
	return den;
}

void Ratio::setNum(int n){
	num = n;
}

void Ratio::setDen(int d){
	den = d;
}

void Ratio::reduce() {
	int sign;
	int g;
	if(num == 0 || den == 0){
		num = 0;
		den = 1;
	}
	if(den < 0){
		den *= -1;
		num *= -1;
	}
	if(den == 1) return;
	sign = (num<0?-1:1);
	g = gcd(sign*num,den);
	num = num/g;
	den = den/g;
}

int gcd(int m, int n){
	int r;
	if(m < n) swap(m,n);
	while(n > 0){
		r = m%n;
		m = n;
		n = r;
	}
	return m;
}

Ratio::Ratio(int n, int d){
	num = n;
	den = d;
}

double Ratio::convert(){
	return double (num)/den;
}

void Ratio::invert(){
	int temp = num;
	num = den;
	den = temp;
}


void Ratio::print(){
	cout << num << '/' << den;
}
	