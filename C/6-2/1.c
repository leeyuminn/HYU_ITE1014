#include <stdio.h>

int main(void)
{
	int num1 = 0;
	scanf("%d", &num1);
	for (int i = 1; i <= 9; i++)
	{
		printf("%d*%d=%d \n",num1,i,num1*i);
	}
	return 0;
}	
