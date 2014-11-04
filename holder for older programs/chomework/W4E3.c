//Structure
#include <stdio.h>
#include <string.h>

struct Student {
	char *firstName;
	char *lastName;
	char *Major;
	char *Email;
};


int main () {
	struct Student s;
	s.firstName = "Gabe";
	s.lastName = "Sorensen";
	s.Major = "Computer Science";
	s.Email = "Gabe@gabe.mail";
	printf("The fname for s is: %s\n", s.firstName);
	printf("The lname for s is: %s\n", s.lastName);
	printf("The major for s is: %s\n", s.Major);
	printf("The email for s is: %s\n", s.Email);
}
