#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char name[10];
	int i, j;
	
	printf("Please enter your name:\n\n");
	
	//saving name into an array:
	for(i=0; (name[i] = getchar())!='\n'; ++i)
	;
	
	//assigning last and highest value of "i" into "j":
	j = i;
	
	printf("\n\n");
	
	//displaying name:
	printf("Your name is:\n\n");

	for(i=0; i<j; ++i)
		putchar(name[i]);
		
	getchar();
	getchar();
	
	return 0;
}
