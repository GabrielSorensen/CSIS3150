//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
	int g = -1;
	while (g <= 0) {
		printf("Enter positive number to calculate squares to:\n");
		scanf("%d", &g);
		printf("The Number you inputted was: %d \n", g);
	}
	int i;
	int pre [g];
	for (i=0; i <= g; i++) {
		pre[i] = i;
		printf("Spot %d in the array is: %d\n", i, i);
	}
	for (i = 0; i <= g; i++) {
		pre[i] = i * i;
		printf("Spot %d in the array is now: %d\n", i, pre [i]);
	}
}

