#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, k;
	
	//scanf() for all 3 variables as decimal integers:
	scanf("%d %d %d", &i, &j, &k);
	
	//scanf() for "i" as decimal integer, "j" as octal integer and k as hexadecimal integer:
	scanf("%d %o %x",&i , &j, &k);
	
	//scanf() for "i" and "j" as hexadecimal integers and "k" as octal integer:
	scanf("%x %x %o", &i, &j, &k);
	
	
	
	return 0;
}

