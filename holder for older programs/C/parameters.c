#include <stdio.h>



int main(int argc, char *argv[]){
	int i;

	for (i = 0; i <= 10; i++) {
		printf("argv[%d] = %s\n", i, argv[i] );
	}


	return 0;
}


