

#include <stdio.h>
void cubeByValue (int n);
void cubeByReference(int *iptr);

int main () {
	int n = 10;

	printf("val of n is %d\n", n);

	cubeByValue(n);

	printf("val of n is %d\n", n);

	cubeByReference(&n);

}

void cubeByValue (int n) {
	n = n*n*n;
	printf("input cubed is %d\n", n);
}

void cubeByReference (int *iptr) {
	*iptr = (*iptr)*(*iptr)*(*iptr);
	printf("input cubed is %d\n", *iptr);
}
