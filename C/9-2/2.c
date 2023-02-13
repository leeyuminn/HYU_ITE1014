#include <stdio.h>

int main(void)
{
	int arr[5];
	int* parr = arr;
	int i = 0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&*(parr+i));
	}
	for(i=4; i>=0;i--)
	{
		printf("%d ",*(parr+i));
	}
	printf("\n");
	return 0;
}

	
