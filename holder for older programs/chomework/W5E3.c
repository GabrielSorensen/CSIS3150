//Images

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
	srand(986459836);
	int height = 200;
	int width = 200;
	int col = 0;
	int i,j;
	FILE *fout;
	fout = fopen("ImageOutput4.ppm", "w");
	fprintf(fout, "P3\n%d %d\n255\n", width, height);
	for (i=1; i <= width; i++) {
		for (j=1; j <=height; j++) {
			col = (int)fabs(255.0*sin(i/10.0)*floor(cos(j/10.0)));
			fprintf(fout, "%d\n%d\n%d\n", col, rand() % 256, rand() % 256);
		}
	}
	if (fclose(fout) != 0) {
		printf("There was an error in closing the file.\n");
	}
	return 0;
}
