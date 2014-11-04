//FIle IO (in)

#include <stdio.h>

typedef struct {
	float x;
	float y;
	float z;
}point;

point data;

int main () {
	FILE *fin;
	fin = fopen("geometry.txt", "r");
	while (!feof(fin)) {
		fscanf(fin, "%f %f %f\n",
				data.x,
				data.y,
				data.z);
		printf("%f %f %f \n",
				data.x,
				data.y,
				data.z);
	}


	fclose(fin);

	return 0;
}
