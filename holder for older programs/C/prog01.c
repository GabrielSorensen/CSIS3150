#include <stdio.h>

int main () {
	int n;

	for (n=1;  n <= 10; n++) {
		printf("the cube of %d is %d \n", n, (int) pow(n, 3));
	}
	printf("Hello World!");
}
