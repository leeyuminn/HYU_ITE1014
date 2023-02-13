#include <stdio.h>

int main(void)
{
	int arr[5];
	int min, max;
	int i, sum = 0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	min = arr[0];
	for(i=1; i<5; i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
		sum += arr[i];
	}
	printf("min: %d\n\n", min);
	printf("max: %d\n\n", max);
	printf("sum: %d\n", arr[0]+arr[1]+arr[2]+arr[3]+arr[4]);

	return 0;
}
