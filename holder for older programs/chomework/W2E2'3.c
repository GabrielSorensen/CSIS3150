//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
	int g = 0;
	printf("Enter number to explain about:\n");
	scanf("%d", &g);
	printf("The Number you inputted was: %d \n", g);
	printf("The way to reference that is by its name.\n");
	printf("The Number rests in memory block %pd\n", &g);
	printf("To get the memory location of an object(or data type), the &(amp) symbol is used.\n");
	printf("The thing inside of memory block %pd is : %d\n", &g, g);
	printf("The *(ast) symbol dereferences or denotes a pointer to an object(or data type).\n");
}

