#include <stdio.h>
#include <stdlib.h>
#include <math.h> //this is to use the pow() function, which calculates exponents of numbers

#define PI 3.14159

int main(int argc, char *argv[]) {
	
	/*
	V(volume) = 4PIr^3/3
	A(area) = 4PIr^2
	*/
	
	double volumeSphere;
	double areaSphere;
	double radius;
	
	printf("What is the radius of the sphere?\n\n");
	scanf("%lg", &radius);
	
	volumeSphere = (4*PI*pow(radius, 3))/3;
	
	areaSphere = 4*PI*pow(radius, 2);
	
	printf("\n");
	
	printf("The volume of the sphere is %g and its area is %g", volumeSphere, areaSphere);
	

	return 0;
}
