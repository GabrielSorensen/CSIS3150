/*
 * arrays.c
 *
 *  Created on: Sep 2, 2014
 *      Author: Gabriellaptop
 */

#include <stdio.h>
#define size 10

int main () {
	int n [size] = {10,20,30,40,50,60,70,80,90,100};
	int i;
	int total = 0;

	//printf("%s%12s\n", "Index", "Value");
	for (i = 0; i < size; i++) {
		total = total + n[i];

	}

	printf("The sum is %d\n", total);

}
