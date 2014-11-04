//FIle IO

#include <stdio.h>

int main () {
	FILE *fptr;
	fptr = fopen("data.txt", "r");
	char text[500000];
	int bytes_read = fread(text, 1, 500000, fptr);
	printf("%s\n", text);
	printf("The num of bytes read: %d\n", bytes_read);

	return 0;
}
