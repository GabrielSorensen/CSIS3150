//

#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);

int main () {
	printf("distance between two points for points"
			" x%d,y%d  x%d,y%d:  %f\n",
			1, 1,//x1,y1
			4, 4,//x2,y2
			distance(1, 1, 4, 4)
	);
	printf("distance between two points for points"
				" x%d,y%d  x%d,y%d:  %f\n",
				1, -4,//x1,y1
				-4, 2,//x2,y2
				distance(1, -4, -4, 2)
		);
	printf("distance between two points for points"
					" x%d,y%d  x%d,y%d:  %f\n",
					2, -5,//x1,y1
					-3, -7,//x2,y2
					distance(2, -5, -3, -7)
			);
}
double distance (int x1, int y1, int x2, int y2) {
	 return sqrt(((x2 - x1)*(x2 - x1))+((y2 - y1)*(y2 - y1)));
}
