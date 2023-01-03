/*
Reversing uppercase to lowercase letters and vice versa in a line of text.
We will be using the ISLOWER() [==checks the current status of an element], TOLOWER() and TOUPPER() functions.
We will also use the CONTIONAL operator.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main(int argc, char *argv[]) {
	
	char myText[80];
	char c;
	int i, j;
	
	//by entering our text, we are saving it by suing GETCHAR() incased in a FOR loop:
	printf("Please enter your text:\n");
		for(i=0; (myText[i] = getchar()) != '\n'; ++i)
		;
	
	//transferring the last, and so highest, value of "i" into "j" so as to use "j" as the limit in the next loop:	
	j = i;
	
	
	printf("\nThis is your changed text:\n");
	//checking whether it is lowercase or uppercase, and printing the reversed casing of the text using PUTCHAR()
	for(i=0; i<j; ++i) {
		c = islower(myText[i]) ? toupper(myText[i]) : tolower(myText[i]); //***see below
		putchar(c);
	}
		
	return 0;
}

/*

NOTE ON "CONDITIONAL OPERATOR":

syntax = [status of element to be investigated] ? [if not: DO THIS] : [otherwise: DO THIS]

so in our program:

synatx = [if letter is in lowercase] ? [CHANGE IT TO UPPER] : [otherwise leave it lowercase]

*/
