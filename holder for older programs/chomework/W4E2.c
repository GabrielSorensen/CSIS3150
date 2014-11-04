/*
 *
 *  Created on: Sep 2, 2014
 *      Author: Gabriellaptop
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int i;
	int sum = 0;
	for (i = 0; i < argc; i++) {
		//printf("argv[%d] = %s\n", i, argv[i] );
		if (atoi(argv[i]) != NULL) {
			sum = sum+atoi(argv[i]);
		}
	}

	printf("Total was: %d\n", sum);
	return 0;
}


