#include <stdio.h>

#define PI 3.141592

float main()
{
	float r;
	scanf("%f", &r);
	printf("Perimeter: %f\n",2*PI*r);
	printf("Area: %f\n",PI*r*r);
	return 0;
}

