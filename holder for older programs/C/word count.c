/*
 *
 *  Created on: Sep 2, 2014
 *      Author: Gabriellaptop
 */

#include <stdio.h>
#include <limits.h>


int main () {
	int nc = 0;

	while (getchar() != EOF) {
		++nc;
	}

	printf("nc = %d \n", nc);
}
