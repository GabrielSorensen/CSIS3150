#include <stdio.h>



int main () {
	int n = 10;
	int *iptr = &n;

	char c = 10;
	char *cptr = &c;

	printf("n is %d\n", n);
	printf("iptr is %p\n", iptr);

	printf("c is %d\n", c);
	printf("cptr is %p\n", cptr);
}

