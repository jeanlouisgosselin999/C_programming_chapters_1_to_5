#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i, j;
	long ix;
	short s;
	unsigned u;
	float x;
	double dx;
	char c;
	
	//first scanf():
	scanf("%d %d %f %g", &i, &j, &x, &dx);
	
	//second scanf():
	scanf("%d %ld %d %f %u", &i, &ix, &j, &x, &u);
	
	//third scanf():
	scanf("%d %u %c", &i, &u, &c);
	
	//fourth scanf():
	scanf("%c %f %g %hd", &c, &x, &dx, &s);
	
	
	return 0;
}

