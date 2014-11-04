//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void roll(int nTimes);

int main () {
	roll(-1);
	roll(0);
	roll(1);
	roll(10);
}

void roll(int nTimes){
	if (nTimes <= 0) {
		printf("cannot roll 0 or less times.\n");
		return;
	}
	int i=1;
	srand(time(NULL));
	printf("Rolling the Dice...\n");
	while (i <= nTimes) {
		int d1 = rand() % 20 + 1;
		int d2 = rand() % 20 + 1;
		if (d1 == 20) {
			printf("Natural twenty!\n");
		}
		printf("die1 was:%d  \ndie2 was:%d\n", d1, d2);
		if (d2 == 20) {
			printf("Natural twenty!\n");
		}
		i++;
	}
}
