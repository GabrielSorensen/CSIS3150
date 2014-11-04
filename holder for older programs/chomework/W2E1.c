//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fibonachi(int n);

int main () {
	int g = 0;
	printf("Enter number to count up to in fibonachi:\n");
	scanf("%d", &g);
	printf("fibonachi %d times:\n", g);
	fibonachi(g);
}

void fibonachi(int n){
	if (n == 0) {
		printf("0\n");
	}
	int a = 1;
	int b = 1;
	int i;
	printf("%d\n",1);
	for (i = 3; i <= n; i++) {
		int c = a + b;
		a = b;
		b = c;
		printf("%d\n",b);
	}

}
