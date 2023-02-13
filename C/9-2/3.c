#include <stdio.h>

int main(void)
{
	double arr[5];
	int i =  0;
	double* parr = arr;
	for(i=0;i<5;i++)
	{
		scanf("%lf",&*(parr+i));
	}
	(*parr)=2*(*parr);
	for(i=0;i<5;i++)
        {
                printf("%f\n",*(parr+i));

        }
	return 0;

}
			
