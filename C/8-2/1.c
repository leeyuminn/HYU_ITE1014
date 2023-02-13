#include <stdio.h>

int printLine(int n)
{
	int i,j;
	for(i = 0; i<n; i++)
	{
		for(j=0; j <= i; j++)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
	for(i = 0; i<n; i++)
        {
                for(j=1; j <= n-i; j++)
                {
                        printf("%d ",j);
                }
                printf("\n");
        }

}
int main(void)
{
	int n;
	scanf("%d", &n);
	printLine(n);
	return 0;
}

