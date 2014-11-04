//Structures

#include <stdio.h>
#include <math.h>

typedef struct {
	double re;
	double im;
}Complex;

double modulus (Complex c);
Complex add (Complex c, double real, double imagin);
Complex mult (Complex c, double real, double imagin);
Complex divide (Complex c, double real, double imagin);

int main () {
	Complex z1;
	Complex z2;
	Complex *zptr;
	z1.re = 1.0;
	z1.im = 1.0;
	zptr = &z2;
	zptr->re = 3.0;
	zptr->im = 4.0;
	printf("z1 real: %f imagin: %f\n", z1.re, z1.im);
	printf("z2 real: %f imagin: %f\n", z2.re, z2.im);
	z1 = add(z1, 2.0, 2.0);
	printf("z1 real: %f imagin: %f\n", z1.re, z1.im);
	printf("z2 real: %f imagin: %f\n", z2.re, z2.im);
	z2 = mult(z2, 4.0, 6.0);
	printf("z1 real: %f imagin: %f\n", z1.re, z1.im);
	printf("z2 real: %f imagin: %f\n", z2.re, z2.im);
	z2 = divide(z2, z1.re, z1.im);
	printf("z1 real: %f imagin: %f\n", z1.re, z1.im);
	printf("z2 real: %f imagin: %f\n", z2.re, z2.im);
}

double modulus (Complex c){
	double x = c.re;
	double y = c.im;
	return sqrt(x*x + y*y);
}
Complex add (Complex c, double real, double imagin) {
	double x = c.re;
	double y = c.im;
	x = x + real;
	y = y + imagin;
	Complex b;
	b.re = x;
	b.im = y;
	return b;
}
Complex mult (Complex c, double real, double imagin) {
	double x = c.re;
	double y = c.im;
	x = x * real;
	y = y * imagin;
	Complex b;
	b.re = x;
	b.im = y;
	return b;
}
Complex divide (Complex c, double real, double imagin) {
	double x = c.re;
	double y = c.im;
	x = x / real;
	y = y / imagin;
	Complex b;
	b.re = x;
	b.im = y;
	return b;
}
