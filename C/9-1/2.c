#include <stdio.h>

int main(void)
{
	int i;
	double d;
	char c;
	scanf("%d %lf %c",&i,&d,&c);
	int* pi = &i;
	double* pd = &d;
	char* pc = &c;
	printf("i: %d, %p\n",i,pi);
	printf("i: %lf, %p\n",d,pd);
	printf("i: %c, %p\n\n\n",c,pc);
	(*pi)+=1;
        (*pd)+=1;
        (*pc)+=1;
	printf("i+1: %d\n",i);
	printf("d+1: %lf\n",d);
	printf("c+1: %c\n\n\n",c);
	printf("size of pi: %ld\n", sizeof(pi));
	printf("size of pd: %ld\n", sizeof(pd));
	printf("size of pc: %ld\n", sizeof(pc));
	return 0;
}
