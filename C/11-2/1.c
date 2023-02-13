#include <stdio.h>

void getSumDiff(int a, int b, int* pSum, int* pDiff)
{
	scanf("%d %d",&a,&b);
	*pSum = a + b;
	*pDiff = a - b;
}	

int main()
{
	int a, b, Sum, Diff;
	getSumDiff(a,b,&Sum,&Diff);
	printf("sum: %d\ndiff: %d\n",Sum,Diff);
	return 0;
}	

