
#include <stdio.h>
#include <math.h>

void sqrtByValue (double n);
void sqrtByReference(double *iptr);

int main () {
	double n = 21.0;

	printf("val of n is %f\n", n);

	sqrtByValue(n);

	printf("val of n is %f\n", n);

	sqrtByReference(&n);

	printf("val of n is %f\n", n);
	printf("Value has been changed!");

}

void sqrtByValue (double n) {
	n = sqrt(n);
	printf("square root of input is %f\n", n);
}

void sqrtByReference (double *iptr) {
	*iptr = sqrt(*iptr);
	printf("square root of input is %f\n", *iptr);
}
