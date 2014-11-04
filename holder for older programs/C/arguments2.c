#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	double num1;
	printf("%d \n%s , \n%s, \n", argc, argv[0], argv[1]);
	num1 = (atof(argv[1]));
	printf("the square of %6.3f is: %6.3f\n", num1, (num1*num1));
}


