#include <stdio.h>


void staticVariable (int n);

int main () {
	int i;

	printf("Calling:");
	staticVariable(1);
	printf("Calling:");
	staticVariable(10);
	printf("Calling:");
	staticVariable(100);
	printf("Calling:");
	staticVariable(1000);
	printf("Finished Calling:");

}

void staticVariable (int n) {
	int test = 0;
	test = test + n;
	printf("Variable = %d\n", test);
}
