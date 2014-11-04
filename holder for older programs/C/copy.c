/*
 *
 *  Created on: Sep 2, 2014
 *      Author: Gabriellaptop
 */

#include <stdio.h>

void copy1 (char *s1, char *s2);		//pointer arithmetic copy
void copy2 (char *s1, char *s2);

int main () {
	char s1 [16];                        //char-string array
	char *s2 = "Now is the time";		//pointer
	char s3[25];
	char s4[] = " for all good programmers";

	copy1(s1, s2);

	printf("s1:  %s\n", s1);

	copy2(s3, s4);

	printf("s3:  %s\n", s3);

	return 0;
}

void copy1 (char *s1, char *s2) {
	int i;
	for (i = 0; (s1[i] = s2[i]) != '\0'; i++ ) {   }
		//        ^ start at 0, take s2[i] and copy to s1[i] until the null('\0') character
}

void copy2 (char *s1, char *s2) {
	for (; (*s1 = *s2) != '\0'; s1++, s2++) {	}
	//^ same thing but use the pointers instead and increment using the datatype's stride(offset in bytes in ram)
}
