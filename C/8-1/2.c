#include <stdio.h>

int addTotal(int n)
{
	int i;
	int sum = 0;
	for(i=1; i<=n; i++)
	{
		sum+=i;
	}
	return sum;
}
int mulTotal(int n)
{
	int a;
	int mul = 1;
	for(a=1; a<=n; a++)
	{
		mul=mul*a;
	}
	return mul;
}
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("addTotal(): %d\n", addTotal(n));

	printf("gMul: %d\n", mulTotal(n));
       return 0;
}       

