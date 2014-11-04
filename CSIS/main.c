//Images

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int height = 200;
	int width = 200;
	int col = 0;
	int i,j, s;
	FILE *fout;
	fout = fopen("ImageOutput3.ppm", "w");
	fprintf(fout, "P3\n%d %d\n255\n", width, height);
	for (i=1; i <= width; i++) {
		for (j=1; j <=height; j++) {
			col = (int)fabs(255.0*sin(i/10.0)*floor(cos(j/10.0)));
			fprintf(fout, "%d\n%d\n%d\n", (int)col, (int)col*cos(i/10.0), (int)col*cos(i/10.0));
		}
	}
	if (fclose(fout) != 0) {
		printf("There was an error in closing the file.\n");
	}
	fout = fopen("startGimp.bat", "w");
	fprintf(fout, "set DefaultGimp = C:\\Program Files\\GIMP 2\\bin\\");
	fprintf(fout, "\nif not exist %%DefaultGimp%%\gimp goto ERROR");
	fprintf(fout, "\nset PATH =;%%PATH%%;%%DefaultGimp%%;");
	fprintf(fout, "\ngimp ImageOutput3.ppm");
	fprintf(fout, "\n:ERROR \necho Something happened, exiting!\npause\ncd");
	s = system("startGimp.bat");
	return 0;
}
