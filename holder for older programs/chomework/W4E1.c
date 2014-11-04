/*
 *
 *  Created on: Sep 2, 2014
 *      Author: Gabriellaptop
 */

#include <stdio.h>
#include <string.h>

int main () {
	char string [10000];
	char *a = "Third ";
	char *b = "Fourth ";
	strcpy(string, "First ");
	printf("%s\n", string);
	strcat(string, "Second ");
	printf("%s\n", string);
	printf("Comparing %s to %s\n", a, b);
	printf("%d\n", strcmp(a, b));
	printf("Comparing %s to %s\n", a, a);
	printf("%d\n", strcmp(a, a));
	printf("Length of %s is: %d\n", a, strlen(a));
	printf("Length of %s is: %d\n", string, strlen(string));
	strcat(string, a);
	strcat(string, b);
	printf("Splitting %s\n", string);
	char *split;
	split = strtok(string, " ");
	while (split != NULL) {
		printf("%s\n", split);
		split = strtok(NULL, " ");
	}
}
