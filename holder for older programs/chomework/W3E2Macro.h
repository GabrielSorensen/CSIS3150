//

#include <stdio.h>
#include <limits.h>
#define IN 1
#define OUT 0

#define WordCount		int c;				\
	int nl = 0;								\
	int nw = 0;								\
	int nc = 0;								\
	int state = OUT;						\
											\
	while ((c = getchar()) != EOF) {		\
		nc++;								\
		if (c == '\n') {					\
			nl++;							\
		}									\
		if (c == ' ' || c == '\n' || c == '\t') {		\
			state = OUT;								\
		} else if (state == OUT) {						\
			state = IN;									\
			nw++;										\
		}												\
	}													\
	printf("\nnc: %d \nnl: %d \nnw: %d \n", nc, nl, nw);\
