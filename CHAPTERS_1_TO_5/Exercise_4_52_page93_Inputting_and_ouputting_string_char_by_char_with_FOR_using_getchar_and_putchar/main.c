/*
This program will ask the user to type in a text.
The program will then save this text CHARACTER BY CHARACTER, and in order, 
using a FOR loop and using the "getchar()" function.
The program will finally print the text back on the screen, 
still CHARACTER BY CHARACTER, and still using a FOR loop.
The function "putchar()" will used to print these characters to form the same string as above.

IMPORTANT NOTE: THE FUNCTION "getchar()" IS POSSIBLY THE ONLY FUNCTION WHICH DOES NOT TAKE ANY PARAMETERS, 
AND WHICH IS WRITTEN ON THE RIGHT-HAND SIDE OF AN ASSIGNMENT EXPRESSION, NEXT TO THE VALUE WHICH IS OF INTEREST TO US
(contrary to "putchar()", for instance.)
*/


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char text[60];
	int i, j;
	
	printf("Please enter your text: \n");
	
	//using a loop to save every character of the string in order, with the "getchar()" function:
	for(i=0; (text[i] = getchar()) != '\n'; ++i)
	;
	/*
	NOTE: the expression "text[i] = getchar()) != '\n'" must be read as:
	type in anything you want AS LONG AS your character (taken with "getchar()" function) 
	is not equivalent to "ENTER" (==> \n)
	
	Also: "i" is set to 0; so, when the function "getchar()" retrieves each and every character
	of the string, it will do so by starting at index "i", which is 0, and which is the FIRST box of the array.
	*/
		
	//dumping the last highest value of "i" into "j":
	j = i;
	
	printf("\nThis is your text: \n");
	
	//using yet another loop, this time to PRINT the string on the console ("i" is again set to 0):
	for (i=0; i < j; ++i)
		putchar(text[i]);
		
	getchar();
	getchar();

	return 0;
}

