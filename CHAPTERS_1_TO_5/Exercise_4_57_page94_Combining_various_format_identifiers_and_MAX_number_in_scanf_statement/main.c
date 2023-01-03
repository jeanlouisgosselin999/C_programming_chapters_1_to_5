#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	//meaning of:
	
	scanf("%12ld %5hd %15lf %15le", &a, &b, &c, &d);
	/*
	a == long decimal integer not exceeding 12 characters
	b == short decimal integer not exceeding 5 characters
	c == long floating-point value without exponent not exceeding 15 characters
	d == long floating-point value with exponent not exceeding 15 characters
	*/
	
	scanf("%10lx %6ho %5hu % %14lu", &a, &b, &c, &d);
		/*
	a == long hexadecimal value not exceeding 10 characters
	b == short octal integer not exceeding 6 characters
	c == short unsigned value value not exceeding 5 characters
	d == long unsigned value not exceeding 14 characters
	*/
	
	scanf("%8d %*d %12lf % %12lf", &a, &b, &c, &d);
	/*
	a == integer not exceeding 8 characters
	b == this variable will be ignored when read
	c == long floating-point value without exponent not exceeding 12 characters
	d == long floating-point value without exponent not exceeding 12 characters
	*/
	
	
	return 0;
}

