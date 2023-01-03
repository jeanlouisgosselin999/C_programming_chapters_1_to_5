#include <stdio.h>
#include <stdlib.h>

/* This exercise shows the ouput from various "printf": */

int main(int argc, char *argv[]) {
	
	
	int i = 12345, j = -13579, k = 24680;
	long ix = 123456789;
	short sx = -2222;
	unsigned ux = 5555;
	
	
	printf("%d %d %d %ld %d %u", i, j, k, ix, sx, ux);
	/*
	12345 13579 24680 12345123456789 -2222 5555
	*/
	
	printf("%3d %3d %3d\n\n%3ld %3d %3u", i, j, k, ix, sx, ux);
	/*
	12345 13579 24680 
	
	12345123456789 -2222 5555
	*/
	
	printf("%8d %8d %8d\n\n%15ld %8d %8u", i, j, k, ix, sx, ux);
	/*
	12345    13579    24680 
	
	 12345123456789    -2222    5555
	*/
	
	
	
	return 0;
}
