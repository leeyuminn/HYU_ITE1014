#include <stdio.h>

void square(double* const pdvar)
{
	(*pdvar) *= (*pdvar);
}

int main()
{
        double dvar;
        scanf("%lf", &dvar);
	square(&dvar);
	printf("%f\n", dvar);
	return 0;
}

