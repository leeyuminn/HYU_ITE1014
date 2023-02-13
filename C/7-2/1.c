#include <stdio.h>

int main(void)
{
	int a;
	double b;
	scanf("%d %lf", &a, &b);
	printf("%10d %10d %10d\n",a<<1,a<<2,a<<3);
	printf("%10.2lf %10.2lf %10.2lf",2*b, 4*b, 8*b);
	return 0;
}
	
