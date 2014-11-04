//Images

#include <stdio.h>
#include <math.h>

int main () {
	int height = 200;
	int width = 200;
	int col = 0;
	int i,j;
	FILE *fout;
	fout = fopen("ImageOutput3.ppm", "w");
	fprintf(fout, "P3\n%d %d\n255\n", width, height);
	for (i=1; i <= width; i++) {
		for (j=1; j <=height; j++) {
			col = (int)fabs(255.0*sin(i/10.0)*floor(cos(j/10.0)));
			fprintf(fout, "%d\n%d\n%d\n", col, col*cos(i/10.0), col*cos(i/10.0));
		}
	}
	if (fclose(fout) != 0) {
		printf("There was an error in closing the file.\n");
	}
	return 0;
}
