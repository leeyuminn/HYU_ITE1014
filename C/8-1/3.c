#include <stdio.h>
int S(int n)
{
	if(n==1)
		return 1;
	else
		return n + S(n-1);
}
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d\n", S(n));
	return 0;
}
