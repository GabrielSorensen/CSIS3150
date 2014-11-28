//
using namespace std;

#include <iostream>
#include <fstream>
#include <array>
#include <cmath>
#include <complex>
#include <math.h>

int iterate_pt (complex<double> c);

#define ncols 16*10
#define nrows 9*10

int MANdelbrot[ncols][nrows];

int main () {
	printf("Starting:\n");
	double crmin = -0.75;
	double crmax = -0.74;
	double cimin = -0.138;
	double cimax = -0.127;

	//int ncols = 800;
	//int nrows = 800;



	//int MANdelbrot[ncols][nrows];
	int x,y;
	int color;
	complex<double> c;
	complex<double> imag = 0.0 + 1.0i;
	double dx = (crmax - crmin)/ncols;
	double dy = (cimax - cimin)/nrows;
	for (y = 0; y < nrows; y++) {
		for (x = 0; x < ncols; x++) {
			c = (crmin + x*dx) + (cimin + y*dy)*imag;
			MANdelbrot[x][y] = iterate_pt(c) + 65;
		}
	}
	//print to ppm
	FILE *fout;
	fout = fopen("mandelbrot.ppm", "w");
	fprintf(fout, "P3\n%d %d\n255\n", ncols, nrows);

	for (y = 0; y < nrows; y++) {
		for (x = 0; x <ncols; x++) {
			color = MANdelbrot[x][y];
			fprintf(fout, "%d\n%d\n%d\n", color, color, color);
		}
	}
	printf("DONE.\n");
}

int iterate_pt (complex<double> c){
	complex<double> z = 0.0 + 0.0i;
	int iterations = 0;
	double a;
	int k;
	for (k = 1; k <= (255-64); k++) {
		z = z*z + c;
		a = norm(sqrt(z*conj(z)));
		if (a > 50) {
			break;
		} else {
			++iterations;
		}
	}
	return iterations;
}
