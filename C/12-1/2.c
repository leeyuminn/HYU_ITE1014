#include <stdio.h>

int main()
{
	int arr[3][2];
	int row, col;
	for(row=0; row<3; row++)
	{
		for(col=0; col<2; col++)
		{
			scanf("%d", &arr[row][col]);
		}
	}
	for(row=0; row<3; row++)
	{
		for(col=0; col<2; col++)
		{
			printf("%-3d",arr[row][col]);
		}
		printf("\n");
	}
	return 0;
}

