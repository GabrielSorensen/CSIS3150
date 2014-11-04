//

#include <stdio.h>

void evenODD (int i);

int main () {
	evenODD(0);
	evenODD(1);
	evenODD(2);
	evenODD(3);
	evenODD(4);
	evenODD(12368);
	evenODD(918273);
}

void evenODD (int i) {
	if (i % 2 == 0) {
		printf("%d is even.\n", i);
	} else {
		printf("%d is odd.\n", i);
	}
}
