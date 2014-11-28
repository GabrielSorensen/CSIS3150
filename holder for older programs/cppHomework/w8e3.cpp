using namespace std;

#include <cstdio>
#include <cmath>

int main () {
	double a = 25.5;
	printf("%f is our variable.\n", a);
	printf("cos(%f)=%f\n", a, cos(a));
	printf("exp(%f)=%f\n", a, exp(a));
	printf("log(%f)=%f\n", a, log(a));
	printf("pow(%f,%f)=%f\n", a, a, pow(a,a));
	printf("sqrt(%f)=%f\n", a, sqrt(a));
	printf("ceil(%f)=%f\n", a, ceil(a));
	printf("floor(%f)=%f\n", a, floor(a));
}
