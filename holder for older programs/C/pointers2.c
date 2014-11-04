#include <stdio.h>



int main () {
	char c[5] = "now";
	printf("%p \n", &c);
	printf("%p \n", c);
	printf("%p \n", &c[0]);   //all same thing
	printf("%p \n", c[0]);   //not same
	printf("%c \n", &c[0]);  //char at font set location
	printf("%c \n", c[0]);
	printf("%d \n", c[0]);
}

