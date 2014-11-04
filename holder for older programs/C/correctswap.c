#include <stdio.h>

void swap (int *x, int *y);

int main(){
	int x = 1;
	int y = 123;

	printf("before swapping: x:%d y:%d\n", x, y);
	swap(&x, &y);
	printf("after swapping: x:%d y:%d\n", x, y);

	return 0;
}

void swap (int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

