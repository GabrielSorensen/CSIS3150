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
	s.id = 100;
	s.firstName = "Gabe";
	s.lastName = "Sorensen";
	printf("The ID for s is: %d\n", s.id);
	printf("The fname for s is: %s\n", s.firstName);
	printf("The lname for s is: %s\n", s.lastName);
}
