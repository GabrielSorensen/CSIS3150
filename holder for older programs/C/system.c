//

#include <stdio.h>


int main () {
	printf("This is your current working directory:\n");
	system("cd");
	printf("This is your current PATH:\n");
	system("PATH");
	printf("This is the date:\n");
	system("TIME /t");
	return 0;
}
