#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x, y, z;
	
	/*
	prinf() for x, y and z, with a minimum field width of 
	8 characters and no more than 4 decimal places:
	*/
	printf("%8.4f %8.4f %8.4f", x, y, z);
	
	
	/*
	prinf() for (x+y) and (x-z) with a minimum field width of 
	9 characters and no more than 3 decimal places:
	*/
	printf("%9.3f %9.3f", (x+y), (x-z)));
	
	/*
	prinf() for sqrt(x+y) and abs(x-z) with a minimum field width of 
	12 characters for the first, 10 for the second and no more than 4 decimal places:
	*/
	printf("%12.4g %10.4uf", sqrt(x+y), abs(x-z));
	
	
	
	
	return 0;
}
