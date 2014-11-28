using namespace std;

#include <cstdio>
#include <cstdlib>

int main(int argc, char *argv[]){
	int i;
	int sum = 0;
	for (i = 0; i < argc; i++) {
		//printf("argv[%d] = %s\n", i, argv[i] );
		if (atoi(argv[i]) != NULL) {
			sum = sum+atoi(argv[i]);
		}
	}

	printf("Total was: %d\n", sum);
	return 0;
}


