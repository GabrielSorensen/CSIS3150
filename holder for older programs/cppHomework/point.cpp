//operator overloading
// ratio ver. 2

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class point {
public:
	point(int, int, int);
	void Negative();
	double Norm();
	string print();
private:
	int x, y, z;
};

point::point(int x,  int y, int z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void point::Negative() {
	x = -1*x;
	y = -1*y;
	z = -1*z;
}

double point::Norm() {
	return sqrt((x*x)+(y*y)+(z*z));
}

string point::print() {
	string s = " X: ";
	s+= x ;
	s+=" Y: ";
	s+=y ;
	s+=" Z: ";
	s+=z ;
	s+=" ";
	return s;
}
