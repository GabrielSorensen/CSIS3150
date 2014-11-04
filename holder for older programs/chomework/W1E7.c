//

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


void piecesOfPie(double n);

int main () {
 piecesOfPie(1);
 piecesOfPie(2);
 piecesOfPie(3);
 piecesOfPie(4);
 piecesOfPie(5);
 piecesOfPie(6);
 piecesOfPie(7);
 piecesOfPie(8);
 piecesOfPie(M_PI);
}

void piecesOfPie(double n){
	double i=0;
	printf("Printing %f pieces of sin(0-2pi)\n(in radians)\n", n);
	while (i <= 2*M_PI) {
		printf("sin(%f)=%f\n", i, sin(i));
		i=i+((2*M_PI)/n);
	}
}
