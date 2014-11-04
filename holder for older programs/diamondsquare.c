//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define double Roughness = 0.6;
#define double Size = 100;

double[] Diamond(int w, int h, double rough);

int ma() {
	int height = 200;
	int width = 200;
	int col = 0;
	int i,j,k;
	FILE *fout;
	fout = fopen("Terrain.ppm", "w");
	fprintf(fout, "P3\n%d %d\n255\n", width, height);






	if (fclose(fout) != 0) {
		printf("There was an error in closing the file.\n");
	}
	return 0;
}

double[] Generate (int w, int h, double rough){

}
