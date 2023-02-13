#include <stdio.h>

void swap( char** p1, char** p2)
{
	char* temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void printArray(char** arr, int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("Array ");
		printf("[%d]:%s, ",i,arr[i]);
	}
	printf("\n");
}

int main()
{
	char* Array[2] = {"aaa","bbb"};
	printArray(Array, sizeof(Array)/sizeof(char*));
	swap(&Array[0], &Array[1]);
	printArray(Array, sizeof(Array)/sizeof(char*));

	return 0;
}
