#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char text[80];
	
	//printing the text entirely on one line:
	printf("%s");
	
	//printing only the first 8 characters:
	printf("%.8s");
	
	//printing only the first 8 characters preceded by 5 blanks:
	printf("     %.8s");
	
	//printing only the first 8 characters followed by 5 blanks:
	printf("%.8s     ");
		
	
	return 0;
}
