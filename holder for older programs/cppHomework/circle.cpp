//operator overloading
// ratio ver. 2

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define PI 4*atan(1)

class circle {
public:
	circle(double, double, double);
	double Area();
	double Norm();
	double Circum();
	double getX();
	double getY();
	double getRadius();
	void setX(double);
	void setY(double);
	void setRadius(double);
	string print();
private:
	double x, y, radius;
};

circle::circle(double x,  double y, double radius) {
	this->x = x;
	this->y = y;
	this->radius = radius;
}

double circle::Norm() {
	return sqrt((x*x)+(y*y));
}

double circle::Circum() {
	return (2*PI)*radius;
}

double circle::getX(){
	return x;
}
double circle::getY(){
	return y;
}
double circle::getRadius() {
	return radius;
}
void circle::setX(double x) {
	this->x = x;
}
void circle::setY(double y) {
	this->y = y;
}
void circle::setRadius(double radius) {
	this->radius = radius;
}

string circle::print() {
	string s = " X: ";
	s+= x ;
	s+=" Y: ";
	s+=y ;
	s+=" Radius: ";
	s+=radius ;
	s+=" ";
	return s;
}
