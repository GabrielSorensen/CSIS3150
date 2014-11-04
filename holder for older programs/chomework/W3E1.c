//Structures

#include <stdio.h>

int sameArray(int x[], int y[], int length);

int main () {
	int a[] = {1, 2, 3, 4, 5, 6};
	printf("sizeof a: %d\n", sizeof(a)/sizeof(*a));
	int b[] = {1, 2, 3, 4, 5, 6};
	printf("sizeof b: %d\n", sizeof(b)/sizeof(*a));
	if (sameArray(a, b, sizeof(a)/sizeof(*a)) == 0) {
		printf("The arrays matched.");
	} else {
		printf("The arrays did not match.");
	}
	return 0;
}

int sameArray(int x[], int y[], int length){
	printf("Size of x: %d", sizeof(x));
	if (sizeof(x)/sizeof(*x) != sizeof(y)/sizeof(*x)) {
		return -2;
	}
	int i;
	for (i=0; i < length; i++) {
		printf("\nx at i: %d\ny at i: %d", x[i], y[i]);
		if (x[i] != y[i]) {
			return i+1; //false
		}
	}
	return 0; //true
}
