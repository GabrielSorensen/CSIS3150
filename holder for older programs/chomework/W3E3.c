#include <stdio.h>
#include <stdlib.h>

int main () {
    long long ram = 0;
    int src = 1;
    long long i;
    long long *dest;
    printf("Source = %d\n", src);
    for (i = 0; i > -1; i++) {
        dest = (int *) malloc(1000);
        *dest = 1111;
        ram ++;
        printf("RAM used up to this point: %d\n", ram);
        //free(dest);
    }

    return 0;
}
