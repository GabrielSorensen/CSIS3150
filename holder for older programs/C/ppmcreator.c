//Images

#include <stdio.h>
#include <math.h>

int main () {
	int height = 200;
	int width = 200;
	int col = 0;
	int i,j;
	printf("P3\n%d %d\n255\n", width, height);

	for (i=1; i <= width; i++) {
		for (j=1; j <=height; j++) {
			col = (int)fabs(255.0*sin(i/10.0)*floor(cos(j/10.0)));
			printf("%d\n%d\n%d\n", col, col*2*sin(i), col*3*cos(i));
		}
	}




	return 0;
}
