/*
 *
 *  Created on: Sep 2, 2014
 *      Author: Gabriellaptop
 */

#include <stdio.h>
#include <ctype.h>

void toUppercase(char *sptr);


int main () {

	char s[] = "Now is the time";

	printf("Before: %s \n", s);
	toUppercase(s);
	printf("After: %s \n", s);



	return 0;
}

void toUppercase(char *sptr) {
	while (*sptr != '\0') {
		*sptr = toupper(*sptr);
		sptr++;
	}
}
