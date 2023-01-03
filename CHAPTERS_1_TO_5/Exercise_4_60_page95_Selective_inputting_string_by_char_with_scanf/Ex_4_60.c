#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	char text[80];
	
	//for string not containing any whitespace:
	scanf(" %[^ ]");
	
	//for string that contains only lowercase letters, blank spaces and newline characters (\n):
	scanf(" %[ abcdefghijklmnopqrstuvwxyz \n]");
	
	//for string that contains only uppercase letters, digits, dollar signs and blank spaces:
	scanf(" %[ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890& ]");
	
	//for string containing anything but asterisks:
	scanf(" %[^*]");	
	
	
	
	return 0;
}
