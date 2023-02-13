#include <stdio.h>

int com(int n,int r)
{
	if(r==n||r==0)
	{
		return 1;
	}
	else
	{
		return com(n-1,r-1)+com(n-1,r);
	}
}

int main(void)
{
	int n,r;
	scanf("%d %d", &n, &r);
	printf("%d\n", com(n, r));
	return 0;
}
