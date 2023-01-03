#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, k;
	
	//scanf function for all 3 variables as decimal integers not exceeding 6 characters:
	scanf("%6d %6d %6d", &i, &j, &k);
	
	//scanf function for "i" as decimal integer, "j" as octal and "k" as hexa not exceeding 8 characters:
	scanf("%8d %8o %8x", &i, &j, &k);
	
	return 0;
}

