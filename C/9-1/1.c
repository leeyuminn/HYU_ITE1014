#include <stdio.h>

int main(void)
{
	int i;
	scanf("%d",&i);
	int* pi = &i;
	printf("%d\n",(*pi));
	(*pi)+=10;
	printf("%d\n",i);
	return 0;
}
