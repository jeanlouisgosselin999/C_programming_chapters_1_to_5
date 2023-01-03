/*

This program will demonstrate how to enter a 5-letter word and encode it,
by subtracting 30 from each character, thereby giving an entirely different chain of characters.

NOTE:

We will display THREE ways of doing this:

1) by using GETCHAR() and PUTCHAR() functions incased in FOR loops;

2) by only using variables and transferring values into different variables;

3) by using an array, and then transferring the contents of one array into another.

NOTE:
characters and integers are ALIKE!!! so we can easily write 'character' - 45, and it will produce a different character.

*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//****************************  FIRST WAY TO DO IT  **********************************************
	
	char myWord[5];
	int i, j;
	
	
	printf("Please enter another 5-letter word:\n");
	//saving word using GETCHAR() function, but AT THE SAME TIME encoding the word by substracting 30 from each of its characters within the loop:
	for(i=0; (myWord[i] = getchar() - 30) != ('\n'- 30); ++i)
		;
		
		
	//now printing the encoded version of the word:			
	printf("\n");
	printf("This is your word now encoded: \n");
	//transferring the last, and so highest, value of "i" into "j", in order to use "i" again and set "j" as the limit in the next loop:
	j = i;
	//printing word using PUTCHAR() function:
	for(i=0; i<=j; ++i)
		putchar(myWord[i]);
		
	
	//decoding word to its original format:	
	printf("\n");
	printf("This is your word now decoded and set to original display: \n");
	//again: using PUTCHAR(), but this time adding 30 to each character:	
	for(i=0; i<=j; ++i)
		putchar(myWord[i] + 30);

	return 0;
}
	
	
	//****************************  SECOND WAY TO DO IT  **********************************************
	
	/*
	char c1, c2, c3, c4, c5, d1, d2, d3, d4, d5, e1, e2, e3, e4, e5;
	
	printf("Please enter a 5-character word of your choice:\n");
	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
	
	d1 = c1 - 30;
	d2 = c2 - 30;
	d3 = c3 - 30;
	d4 = c4 - 30;
	d5 = c5 - 30;
	
	printf("Here is your word now coded: %c%c%c%c%c", d1, d2, d3, d4, d5);
	
	printf("\n\n");
	
	e1 = d1 + 30;
	e2 = d2 + 30;
	e3 = d3 + 30;
	e4 = d4 + 30;
	e5 = d5 + 30;
	
	printf("Here is your word now uncoded again: %c%c%c%c%c", e1, e2, e3, e4, e5);
	
		return 0;
}

*/

		
		

	//****************************  THIRD WAY TO DO IT  **********************************************	
		
/*

	char myWord[5];
	char myEncodedWord[5];
	char c;
	int i, j;

	
	printf("Please enter a 5-letter word of your choice: \n");
	
	
	for(i=0; i<5; ++i)
	 scanf("%c", &myWord[i]); //NOTE: here we are saving a chain of characters using SCANF() incased in a FOR loop


	printf("\n");
	printf("This is your word now encoded: \n");
	
	//transferring the last, and so highest, value of "i" into "j", in order to use "i" again and set "j" as the limit in the next loop:
	j = i;

	//now printing the word on console
	for(i=0; i<j; ++i)
		printf("%c", (myWord[i] - 30));


	//NOW: copying/transferring data from array "myWord" to array "myEncodedWord":
	for(i=0; i<j; ++i)
		myEncodedWord[i] = myWord[i];
		
	
	printf("\n");
	printf("This is your word now decoded again: \n");
	
	for(i=0; i<j; ++i)
		printf("%c", (myEncodedWord[i] + 30));
		
		return 0;
}
		
	*/


