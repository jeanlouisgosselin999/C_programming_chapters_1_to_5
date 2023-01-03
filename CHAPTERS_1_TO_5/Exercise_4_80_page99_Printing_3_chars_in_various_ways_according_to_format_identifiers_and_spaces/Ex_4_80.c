#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	char c1 = 'A';
	char c2 = 'B';
	char c3 = 'C';
	
	printf("%c %c %c", c1, c2, c3);
	/*
	A B C
	*/
	
	printf("%c%c%c", c1, c2, c3);
	/*
	ABC
	*/	
	
	printf("%3c %3c %3c", c1, c2, c3);
	/*
	A    B    C
	*/
	
	printf("%3c%3c%3c", c1, c2, c3);
	/*
	A   B   C
	*/
	
	printf("c1=%c c2=%c c3=%c", c1, c2, c3);
	/*
	c1=A c2=B c3=C
	*/
	
	return 0;
}
