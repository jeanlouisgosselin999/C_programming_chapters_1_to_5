#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char text[80];
	
	//the user has typed in the following text:
	
	Programming with C can be a challenging creative activity.
	
	//**********************************************************8
	
	//first printf():
	printf("%s", text);
	//result:
	Programming with C can be a challenging creative activity.
	
	
	//second printf():
	printf("%18s", text);
	//result:
	Programming with C can be a challenging creative activity.
	
	
	//third printf():
	printf("%.18s", text);
	//result:
	Programming with C
	
	
	//fourth printf():
	printf("%18.7s", text);
	//result:
	                  Program
	                  
	                  
	//fifth printf():
	printf("%-18.7s", text);
	//result:                
	Program
	
	
	return 0;
}
