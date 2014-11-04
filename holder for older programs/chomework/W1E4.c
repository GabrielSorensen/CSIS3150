//Structures

#include <stdio.h>
#include <math.h>

int main () {
	int i;
	int n = 3;
	for (i=1; i <= 100; i++) {
		printf("%d^%d: %lld\n",n ,i ,(unsigned long long)pow(n,i));
		if ((unsigned long long)pow(n, i) >= 9223372036854775807) {
			printf("Too Big for an unsigned long long!");
			return 0;
		}
	}
}

