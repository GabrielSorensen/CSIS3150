//Structures

#include <stdio.h>
#include <string.h>

struct Student {
	int id;
	char *firstName;
	char *lastName;
};


int main () {
	struct Student s;
	struct Student *stptr;

	stptr = &s;
	s.id = 100;
	s.firstName = "Gabe";
	s.lastName = "Sorensen";
	printf("The pointer for s is: %p\n", stptr);
	printf("The ID for s is: %d\n", stptr->id);
	printf("The fname for s is: %s\n", s.firstName);
	printf("The lname for s is: %s\n", s.lastName);
}
